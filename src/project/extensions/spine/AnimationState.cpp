﻿/*******************************************************************************
 * Copyright (c) 2013, Esoteric Software
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ******************************************************************************/

#include <spine/AnimationState.h>
#include <spine/extension.h>
#include <stdio.h>
#include <spine/CCSkeleton.h>
 

namespace cocos2d { namespace extension {
 
class  CCSkeleton;
typedef struct _Entry _Entry;
struct _Entry {
	Animation* animation;
	int/*bool*/loop;
	float delay;
	_Entry* next;
};

typedef struct {
	AnimationState super;
	Animation *previous;
	float previousTime;
	int/*bool*/previousLoop;
	float mixTime;
	float mixDuration;
	_Entry* queue;
} _Internal;

AnimationState* AnimationState_create (AnimationStateData* data) {
	AnimationState* self = SUPER(NEW(_Internal));
	CONST_CAST(AnimationStateData*, self->data) = data;
	return self;
}

void _AnimationState_clearQueue (AnimationState* self) {
	_Internal* internal = SUB_CAST(_Internal, self);
	_Entry* entry = internal->queue;
	while (entry) {
		_Entry* nextEntry = entry->next;
		FREE(entry);
		entry = nextEntry;
	}
	internal->queue = 0;
}

void AnimationState_dispose (AnimationState* self) {
	_AnimationState_clearQueue(self);
	FREE(self);
}

void AnimationState_addAnimation (AnimationState* self, Animation* animation, int loop, float delay) {
	_Entry* existingEntry;
	Animation* previousAnimation;

	_Internal* internal = SUB_CAST(_Internal, self);
	_Entry* entry = NEW(_Entry);
	entry->animation = animation;
	entry->loop = loop;

	existingEntry = internal->queue;
	if (existingEntry) {
		while (existingEntry->next)
			existingEntry = existingEntry->next;
		existingEntry->next = entry;
		previousAnimation = existingEntry->animation;
	} else {
		internal->queue = entry;
		previousAnimation = self->animation;
	}

	if (delay <= 0) {
		if (previousAnimation)
			delay = previousAnimation->duration - AnimationStateData_getMix(self->data, previousAnimation, animation) + delay;
		else
			delay = 0;
	}
	entry->delay = delay;
}

void AnimationState_addAnimationByName (AnimationState* self, const char* animationName, int loop, float delay) {
	Animation* animation = animationName ? SkeletonData_findAnimation(self->data->skeletonData, animationName) : 0;
	AnimationState_addAnimation(self, animation, loop, delay);
}

void _AnimationState_setAnimation (AnimationState* self, Animation* newAnimation, int loop,CCSkeleton * pOwnSkeleton) {
	_Internal* internal = SUB_CAST(_Internal, self);
	internal->previous = 0;
	if (newAnimation && self->animation && self->data) {
		internal->mixDuration = AnimationStateData_getMix(self->data, self->animation, newAnimation);
		if (internal->mixDuration > 0) {
			internal->mixTime = 0;
			internal->previous = self->animation;
			internal->previousTime = self->time;
			internal->previousLoop = self->loop;
		}
	}
	CONST_CAST(Animation*, self->animation) = newAnimation;
	if(pOwnSkeleton->pCurAnimation!=NULL)
	{
		pOwnSkeleton->postSkeletonActionFinish();
	}
	pOwnSkeleton->pCurAnimation=NULL;
	self->loop = loop;
	self->time = 0;
}

void AnimationState_setAnimation (AnimationState* self, Animation* animation, int/*bool*/loop,CCSkeleton * pOwnSkeleton) {
	_AnimationState_clearQueue(self);
	_AnimationState_setAnimation(self, animation, loop,pOwnSkeleton);
}

void AnimationState_setAnimationByName (AnimationState* self, const char* animationName, int/*bool*/loop,CCSkeleton * pOwnSkeleton) {
	Animation* animation = animationName ? SkeletonData_findAnimation(self->data->skeletonData, animationName) : 0;
	AnimationState_setAnimation(self, animation, loop,pOwnSkeleton);
}

void AnimationState_clearAnimation (AnimationState* self) {
	_Internal* internal = SUB_CAST(_Internal, self);
	internal->previous = 0;
	CONST_CAST(Animation*, self->animation) = 0;
	_AnimationState_clearQueue(self);
}

void AnimationState_clearSkeletonLoop(CCSkeleton * pOwnSkeleton) {
	pOwnSkeleton->skeletonLoopCount=0l;
}


void AnimationState_update (AnimationState* self, float delta,CCSkeleton * pOwnSkeleton) {
	_Entry* next;
	_Internal* internal = SUB_CAST(_Internal, self);

	self->time += delta;
	internal->previousTime += delta;
	internal->mixTime += delta;

	if (internal->queue && self->time >= internal->queue->delay) {
		_AnimationState_setAnimation(self, internal->queue->animation, internal->queue->loop,pOwnSkeleton);
		next = internal->queue->next;
		FREE(internal->queue);
		internal->queue = next;
	}
}

void AnimationState_apply (AnimationState* self,CCSkeleton * pOwnSkeleton) {
	_Internal* internal;
	float alpha;

	if(AnimationState_isComplete(self)==1)
	{
		pOwnSkeleton->postSkeletonActionFinish();
	} 

	if (!self->animation) 
	return;
	 
	internal = SUB_CAST(_Internal, self);
	if (internal->previous) {
		//动作过渡期间融合
		//(上个动作结束)  暂时在融合期间不进行上个动作的回调检测
		Animation_apply(internal->previous, pOwnSkeleton, internal->previousTime, internal->previousLoop,true);
		alpha = internal->mixTime / (internal->mixDuration/pOwnSkeleton->timeScale);
		if (alpha >= 1) {
			alpha = 1;
			internal->previous = 0;
			//上个动作结束
		}
		//加载下个动作的配置文件 
		if(Animation_IsChangeAnimation(self->animation,pOwnSkeleton))
		{ 
			AnimationState_clearSkeletonLoop(pOwnSkeleton); 
			pOwnSkeleton->resetSkeletonActionFinish();
			if(CheckSkeletonCallBackHandlerValid())
			{
				pOwnSkeleton->resetAllCallBackNode();
				OnSkeletonCallBackEventHandler(pOwnSkeleton->m_ObjectUUID,pOwnSkeleton->m_AnimationID,pOwnSkeleton->getCallBackEventVec());
			}
		}
		//(下个动作开始)
		Animation_mix(self->animation, pOwnSkeleton, self->time, self->loop, alpha);
	} else
	{
		//没有动作融合 加载当前动作配置项
		if(Animation_IsChangeAnimation(self->animation,pOwnSkeleton))
		{ 
			//上个动作结束
			AnimationState_clearSkeletonLoop(pOwnSkeleton); 
			pOwnSkeleton->resetSkeletonActionFinish();
			if(CheckSkeletonCallBackHandlerValid())
			{
				pOwnSkeleton->resetAllCallBackNode();
				OnSkeletonCallBackEventHandler(pOwnSkeleton->m_ObjectUUID,pOwnSkeleton->m_AnimationID,pOwnSkeleton->getCallBackEventVec());
			}
		}
		Animation_apply(self->animation, pOwnSkeleton, self->time, self->loop,false);

	}
		
}

int   AnimationState_isComplete (AnimationState* self) {
	return !self->animation || self->time >= self->animation->duration;
}

}} // namespace cocos2d { namespace extension {