LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_static

LOCAL_MODULE_FILENAME := cocosd2dx

LOCAL_CPPFLAGS += -fexceptions

LOCAL_SRC_FILES := \
CCConfiguration.cpp \
CCScheduler.cpp \
CCCamera.cpp \
ccFPSImages.c \
actions/CCAction.cpp \
actions/CCActionCamera.cpp \
actions/CCActionCatmullRom.cpp \
actions/CCActionEase.cpp \
actions/CCActionGrid.cpp \
actions/CCActionGrid3D.cpp \
actions/CCActionInstant.cpp \
actions/CCActionInterval.cpp \
actions/CCActionManager.cpp \
actions/CCActionPageTurn3D.cpp \
actions/CCActionProgressTimer.cpp \
actions/CCActionTiledGrid.cpp \
actions/CCActionTween.cpp \
base_nodes/CCAtlasNode.cpp \
base_nodes/CCNode.cpp \
cocoa/CCAffineTransform.cpp \
cocoa/CCGeometry.cpp \
cocoa/CCAutoreleasePool.cpp \
cocoa/CCDictionary.cpp \
cocoa/CCNS.cpp \
cocoa/CCObject.cpp \
cocoa/CCSet.cpp \
cocoa/CCString.cpp \
cocoa/CCZone.cpp \
cocoa/CCArray.cpp \
cocoa/CCDataVisitor.cpp \
cocos2d.cpp \
CCDirector.cpp \
draw_nodes/CCDrawingPrimitives.cpp \
draw_nodes/CCDrawNode.cpp \
effects/CCGrabber.cpp \
effects/CCGrid.cpp \
kazmath/src/aabb.c \
kazmath/src/mat3.c \
kazmath/src/mat4.c \
kazmath/src/neon_matrix_impl.c \
kazmath/src/plane.c \
kazmath/src/quaternion.c \
kazmath/src/ray2.c \
kazmath/src/utility.c \
kazmath/src/vec2.c \
kazmath/src/vec3.c \
kazmath/src/vec4.c \
kazmath/src/GL/mat4stack.c \
kazmath/src/GL/matrix.c \
keypad_dispatcher/CCKeypadDelegate.cpp \
keypad_dispatcher/CCKeypadDispatcher.cpp \
label_nodes/CCLabelAtlas.cpp \
label_nodes/CCLabelBMFont.cpp \
label_nodes/CCLabelTTF.cpp \
label_nodes/CCMultiLineLabelTTF.cpp \
label_nodes/CCNumberLabelTTF.cpp \
label_nodes/CCShadowLabelTTF.cpp \
label_nodes/CCSingleLineLabelTTF.cpp \
label_nodes/CCStrokeLabelTTF.cpp \
layers_scenes_transitions_nodes/CCLayer.cpp \
layers_scenes_transitions_nodes/CCScene.cpp \
layers_scenes_transitions_nodes/CCTransitionPageTurn.cpp \
layers_scenes_transitions_nodes/CCTransition.cpp \
layers_scenes_transitions_nodes/CCTransitionProgress.cpp \
menu_nodes/CCMenu.cpp \
menu_nodes/CCImmovableMenu.cpp \
menu_nodes/CCMenuItem.cpp \
misc_nodes/CCClippingNode.cpp \
misc_nodes/CCMotionStreak.cpp \
misc_nodes/CCProgressTimer.cpp \
misc_nodes/CCRenderTexture.cpp \
misc_nodes/CCProgressBar.cpp \
particle_nodes/CCParticleExamples.cpp \
particle_nodes/CCParticleSystem.cpp \
particle_nodes/CCParticleBatchNode.cpp \
particle_nodes/CCParticleSystemQuad.cpp \
platform/CCImageCommonWebp.cpp \
platform/CCSAXParser.cpp \
platform/CCThread.cpp \
platform/CCFileUtils.cpp \
platform/platform.cpp \
platform/CCEGLViewProtocol.cpp \
platform/android/CCDevice.cpp \
platform/android/CCEGLView.cpp \
platform/android/CCAccelerometer.cpp \
platform/android/CCApplication.cpp \
platform/android/CCCommon.cpp \
platform/android/CCFileUtilsAndroid.cpp \
platform/android/CCImage.cpp \
platform/android/CCSystem.cpp \
platform/android/CCSNS.cpp \
platform/android/CCPayment.cpp \
platform/android/CCGameCenter.cpp \
platform/android/CCBehavior.cpp \
platform/android/CCAd.cpp \
platform/android/CCPlatform.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxBitmap.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxHelper.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxRenderer.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxAccelerometer.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxAd.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxPayment.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxSNS.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxSystem.cpp \
platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxPlatform.cpp \
platform/android/jni/JniHelper.cpp \
platform/android/jni/IMEJni.cpp \
platform/android/jni/TouchesJni.cpp \
platform/android/jni/DPIJni.cpp \
script_support/CCScriptSupport.cpp \
richtext/CCRichTextLoader.cpp \
richtext/CCRichTextXMLAttribute.cpp \
richtext/CCRichTextXMLHandler.cpp \
shaders/ccShaders.cpp \
shaders/CCGLProgram.cpp \
shaders/ccGLStateCache.cpp \
shaders/CCShaderCache.cpp \
sprite_nodes/CCAnimation.cpp \
sprite_nodes/CCAnimationCache.cpp \
sprite_nodes/CCSprite.cpp \
sprite_nodes/CCSpriteBatchNode.cpp \
sprite_nodes/CCSpriteFrame.cpp \
sprite_nodes/CCSpriteFrameCache.cpp \
sprite_nodes/CCAnimationSprite.cpp \
sprite_nodes/CCFadeSprite.cpp \
sprite_nodes/CCRotateSprite.cpp \
sprite_nodes/CCScaleSprite.cpp \
sprite_nodes/CCShakeSprite.cpp \
support/ccUTF8.cpp \
support/CCNotificationCenter.cpp \
support/CCProfiling.cpp \
support/CCPointExtension.cpp \
support/TransformUtils.cpp \
support/user_default/CCUserDefaultAndroid.cpp \
support/base64.cpp \
support/ccUtils.cpp \
support/CCVertex.cpp \
support/data_support/ccCArray.cpp \
support/image_support/TGAlib.cpp \
support/tinyxml2/tinyxml2.cpp \
support/zip_support/ZipUtils.cpp \
support/zip_support/ioapi.cpp \
support/zip_support/unzip.cpp \
support/component/CCComponent.cpp \
support/component/CCComponentContainer.cpp \
text_input_node/CCIMEDispatcher.cpp \
text_input_node/CCTextFieldTTF.cpp \
textures/CCTexture2D.cpp \
textures/CCTextureAtlas.cpp \
textures/CCTextureCache.cpp \
textures/CCTextureETC.cpp \
textures/CCTexturePVR.cpp \
tilemap_parallax_nodes/CCParallaxNode.cpp \
tilemap_parallax_nodes/CCTMXLayer.cpp \
tilemap_parallax_nodes/CCTMXObjectGroup.cpp \
tilemap_parallax_nodes/CCTMXTiledMap.cpp \
tilemap_parallax_nodes/CCTMXXMLParser.cpp \
tilemap_parallax_nodes/CCTileMapAtlas.cpp \
touch_dispatcher/CCTouchDispatcher.cpp \
touch_dispatcher/CCTouchHandler.cpp \
touch_dispatcher/CCTouch.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/include \
                    $(LOCAL_PATH)/kazmath/include \
                    $(LOCAL_PATH)/platform/android

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/include \
                    $(LOCAL_PATH)/kazmath/include \
                    $(LOCAL_PATH)/platform/android

LOCAL_LDLIBS := -lGLESv2 \
                -llog \
                -lz

LOCAL_EXPORT_LDLIBS := -lGLESv2 \
                       -llog \
                       -lz

LOCAL_WHOLE_STATIC_LIBRARIES := cocos_libpng_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_jpeg_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_libxml2_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_libtiff_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_libwebp_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS := -Wno-psabi -DUSE_FILE32API
LOCAL_EXPORT_CFLAGS := -Wno-psabi -DUSE_FILE32API
LOCAL_CPPFLAGS += -Wno-error=format-security

include $(BUILD_STATIC_LIBRARY)

$(call import-module,libjpeg)
$(call import-module,libpng)
$(call import-module,libtiff)
$(call import-module,libwebp)
