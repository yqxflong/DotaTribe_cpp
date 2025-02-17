﻿#ifndef  _DOTATRIBE_EVENTTYPER_H_
#define  _DOTATRIBE_EVENTTYPER_H_


enum
{
	_TYPED_EVENT_UNKOWN_ = 0,                         // 未知类型的事件

	//*********************************************************************************
	//********************************非Window事件枚举*******************************
	//*********************************************************************************
	_TYPED_EVENT_SNS_LOGIN_SUCCESS_,              // SNS登陆成功提示
	_TYPED_EVENT_SNS_LOGIN_FAILED_,               // SNS登陆失败提示
	_TYPED_EVENT_SNS_SHARE_SUCCESS_,              // SNS分享成功提示
	_TYPED_EVENT_SNS_SHARE_FAILED_,               // SNS分享失败提示

	_TYPED_EVENT_GAMECENTER_AUTHENTICATION_,      // GameCenter验证回调消息

	_TYPED_EVENT_LOCAL_IAP_SUCCESS_,              // 本地购买成功消息
	_TYPED_EVENT_LOCAL_IAP_FAILED_,               // 本地购买失败消息

	_TYPED_EVENT_VERSIONUPDATE_FINISHED_,         // 版本更新完毕消息

//*********************************************************************************
//********************************Window事件枚举*******************************
//*********************************************************************************
	_TYPED_EVENT_SHOW_ROLESTATUSWINDOW_,                 //隐藏人物状态层
	_TYPED_EVENT_HIDE_ROLESTATUSWINDOW_,                 //隐藏人物状态层
	_TYPED_EVENT_UPDATE_ROLESTATUSWINDOW_,				 //更新任务状态层

	_TYPED_EVENT_SHOW_DTTIMEDGRAYWINDOW_,			//显示隔绝层

	_TYPED_EVENT_SHOW_MESSAGEBOXWINDOW_,          // 显示提示面板
	_TYPED_EVENT_HIDE_MESSAGEBOXWINDOW_,          // 隐藏提示面板
	_TYPED_EVENT_UPDATE_MESSAGEBOXWINDOW_,        // 更新提示面板
	_TYPED_EVENT_FADEOUT_MESSAGEBOXWINDOW_,       // 渐隐提示面板

	_TYPED_EVENT_SHOW_LEADERSHIPLVUPWINDOW_,          // 显示领导力升级面板
	_TYPED_EVENT_HIDE_LEADERSHIPLVUPWINDOW_,          // 隐藏领导力升级面板

	_TYPED_EVENT_SHOW_MESSAGEBOXWINDOW_1_,			//单个按钮的提示面板

	_TYPED_EVENT_SHOW_INPUTNUMWINDOW_,				//显示输入数字窗口
	_TYPED_EVENT_HIDE_INPUTNUMWINDOW_,				//隐藏输入数字窗口
	_TYPED_EVENT_UPDATE_INPUTNUMWINDOW_,			//更新输入数字窗口
	_TYPED_EVENT_FADEOUT_INPUTNUMWINDOW_,			//渐隐输入数字窗口

	_TYPED_EVENT_SHOW_LOGOWINDOW_,                // 显示LOGO窗口
	_TYPED_EVENT_HIDE_LOGOWINDOW_,                // 隐藏LOGO窗口
	_TYPED_EVENT_UPDATE_LOGOWINDOW_,              // 更新LOGO窗口
	_TYPED_EVENT_FADEOUT_LOGOWINDOW_,             // 渐隐LOGO窗口

	_TYPED_EVENT_SHOW_STARTWINDOW_,              // 显示开始窗口
	_TYPED_EVENT_HIDE_STARTWINDOW_,              // 隐藏开始窗口
	_TYPED_EVENT_UPDATE_STARTWINDOW_,            // 更新开始窗口
	_TYPED_EVENT_FADEOUT_STARTWINDOW_,           // 渐隐开始窗口
	//
	_TYPED_EVENT_UPDATEWINDOW_UI_SHOW_FILECOUNT,					//显示当前下载文件数
	_TYPED_EVENT_UPDATEWINDOW_UI_SHOW_DOWNLOAD,					//显示下载相关UI
	_TYPED_EVENT_UPDATEWINDOW_UI_SHOW_NORMAL,							//显示正常游戏的UI
	_TYPED_EVENT_UPDATEWINDOW_BEGIN_DOWNLOAD_ZIPFILE_,            // 开始下载ZIP资源文件
	_TYPED_EVENT_UPDATEWINDOW_DOWNLOAD_ZIPFILE_FAILED_,           // 下载ZIP资源文件失败
	_TYPED_EVENT_UPDATEWINDOW_DOWNLOAD_ZIPFILE_SUCCESS_,          // 下载ZIP资源文件成功
	_TYPED_EVENT_UPDATEWINDOW_DOWNLOAD_ZIPFILE_PROGRESS_,         // 更新下载进度
	_TYPED_EVENT_UPDATEWINDOW_DOWNLOAD_ZIPFILE_INVALID_,          // ZIP校验失败
	_TYPED_EVENT_UPDATEWINDOW_BEGIN_UNZIP_ZIPFILE_,               // 开始解压ZIP资源文件
	_TYPED_EVENT_UPDATEWINDOW_UNZIP_ZIPFILE_SUCCESS_,             // 解压ZIP资源成功
	_TYPED_EVENT_UPDATEWINDOW_UNZIP_ZIPFILE_FAILED_,              // 解压ZIP资源失败
	_TYPED_EVENT_UPDATEWINDOW_BEGIN_VERIFY_FILE_,                 // 开始进行文件比对校验
	_TYPED_EVENT_UPDATEWINDOW_VERIFY_FILE_SUCCESS_,               // 文件比对校验成功
	_TYPED_EVENT_UPDATEWINDOW_VERIFY_FILE_FAILED_,                // 文件比对校验失败

	_TYPED_EVENT_SHOW_SELECTSERVERWINDOW_,        // 显示选择服务器面板
	_TYPED_EVENT_HIDE_SELECTSERVERWINDOW_,        // 隐藏选择服务器面板
	_TYPED_EVENT_UPDATE_SELECTSERVERWINDOW_,      // 更新选择服务器面板
	_TYPED_EVENT_FADEOUT_SELECTSERVERWINDOW_,     // 渐隐更新选择服务器面板

	_TYPED_EVENT_SHOW_LOADINGWINDOW_,             // 显示加载进度条面板
	_TYPED_EVENT_HIDE_LOADINGWINDOW_,             // 隐藏加载进度条面板
	_TYPED_EVENT_UPDATE_LOADINGWINDOW_BAR_,       // 更新加载进度条面板的进度
	_TYPED_EVENT_UPDATE_LOADINGWINDOW_TEXT_,      // 更新加载进度条面板的文字
	_TYPED_EVENT_UPDATE_LOADINGWINDOW_,           // 更新加载进度条面板
	_TYPED_EVENT_FADEOUT_LOADINGWINDOW_,          // 渐隐加载进度条面板

	_TYPED_EVENT_SHOW_HOMEWINDOW_,               // 显示登陆面板 DotaTribe主界面
	_TYPED_EVENT_HIDE_HOMEWINDOW_,               // 隐藏登陆面板
	_TYPED_EVENT_UPDATE_HOMEWINDOW_,             // 更新登陆面板
	_TYPED_EVENT_FADEOUT_HOMEWINDOW_,            // 渐隐登陆面板


	_TYPED_EVENT_SHOW_SELECTMISSIONWINDOW_,          // 显示世界地图选择窗口
	_TYPED_EVENT_HIDE_SELECTMISSIONWINDOW_,          // 隐藏世界地图选择窗口

	_TYPED_EVENT_SHOW_SELECTSONMISSIONWINDOW_,       // 显示关卡地图选择窗口
	_TYPED_EVENT_HIDE_SELECTSONMISSIONWINDOW_,       // 隐藏关卡地图选择窗口
	_TYPED_EVENT_UPDATE_SELECTSONMISSIONWINDOW_,     // 更新关卡地图选择窗口
	_TYPED_EVENT_UPDATE_REWARDBOX_,					 // 更新关卡地图奖励宝箱
	_TYPED_EVENT_UPDATE_GETSTARREWARD_,				 // 领取关卡地图奖励
	_TYPED_EVENT_UPDATA_MISSIONNEXTSTATES_,			 // 更新下一关卡状态
	_TYPED_EVENT_GOTO_NEXTMISSION_,					 // 前往下一关卡
	_TYPED_EVENT_SHOW_MISSIONMESSAGEBOX_,			 // 显示领取关卡窗口和跳转窗口
	_TYPED_EVENT_FADEOUT_SELECTSONMISSIONWINDOW_,    // 渐隐关卡地图选择窗口
	_TYPED_EVENT_SELECTSONMISSIONWINDOW_SHOW_ARROWHINT,	//显示箭头提示
	_TYPED_EVENT_SELECTSONMISSIONWINDOW_HIDE_ARROWHINT,	//隐藏箭头提示

	_TYPED_EVENT_SHOW_MASSACREWINDOW_,          // 显示扫荡窗口
	_TYPED_EVENT_HIDE_MASSACREWINDOW_,          // 隐藏扫荡窗口
	_TYPED_EVENT_UPDATEDATA_MASSACREWINDOW_,	// 更新扫荡信息
	_TYPED_EVENT_UPDATE_UI_TEXT_,               // 更新UI文字信息

	_TYPED_EVENT_SELECTMISSIONWINDOW_START_DRAG_,    // 场景选择窗口开始拖拽
	_TYPED_EVENT_SELECTMISSIONWINDOW_DRAGING_,       // 场景选择窗口拖拽中
	_TYPED_EVENT_SELECTMISSIONWINDOW_END_DRAG_,      // 场景选择窗口结束拖拽


	_TYPED_EVENT_RESET_CHALLENGETIMES_,					//清除关卡挑战次数

	_TYPED_EVENT_SCENELOBBYWINDOW_START_DRAG_,    // 场景选择窗口开始拖拽
	_TYPED_EVENT_SCENELOBBYWINDOW_DRAGING_,       // 场景选择窗口拖拽中
	_TYPED_EVENT_SCENELOBBYWINDOW_END_DRAG_,      // 场景选择窗口结束拖拽

	_TYPE_EVENT_SHOW_ATHLETICWINDOW_,              //显示战斗窗口
	_TYPE_EVENT_HIDE_ATHLETICWINDOW_,			   //关闭战斗窗口
	_TYPE_EVENT_UPDATE_ATHLETICWINDOW_,            //更新战斗窗口
	_TYPE_EVENT_WILL_ENTER_ATHLETICS_,			   //将要进入战斗流程通知

    _TYPE_EVENT_SHOW_ATHLETICSRESULTWINDOW_,       //显示结果界面
	_TYPE_EVENT_HIDE_ATHLETICSRESULTWINDOW_,       //关闭结果界面
	_TYPE_EVENT_DISABLE_WINDOW_UIBTN_,			   //禁用UI界面按钮

	_TYPED_EVENT_MOVEBUTTON_LOGINWINDOW_,		   //登录页面移动按钮事件

	_TYPED_EVENT_SHOW_CUSTOMSPASSWINDOW_,          // 显示关卡面板
	_TYPED_EVENT_HIDE_CUSTOMSPASSWINDOW_,          // 隐藏关卡面板
	_TYPED_EVENT_UPDATE_CUSTOMSPASSWINDOW_,        // 更新关卡面板
	_TYPED_EVENT_FADEOUT_CUSTOMSPASSWINDOW_,       // 渐隐关卡面板

	_TYPED_EVENT_SHOW_SELECTROLEWINDOW_,           // 显示选择角色面板
	_TYPED_EVENT_HIDE_SELECTROLEWINDOW_,           // 隐藏选择角色面板
	_TYPED_EVENT_UPDATE_SELECTROLEWINDOW_,         // 更新选择角色面板
	_TYPED_EVENT_FADEOUT_SELECTROLEWINDOW_,        // 渐隐选择角色面板
	_TYPED_EVENT_COMMOND_TURNLEFT_,				   // 选择角色左滑动操作
	_TYPED_EVENT_COMMOND_TURNRIGHT_,			   // 选择角色右滑动操作

	//add by fangjun begin
	_TYPED_EVENT_SHOW_STRENTHENWINDOW_,					//显示强化界面
	_TYPED_EVENT_HIDE_STRENTHENWINDOW_,					//隐藏强化界面
	_TYPED_EVENT_HIDE_STRENTHENWINDOW_GUIDE_,			//隐藏强化界面_for新手引导
	_TYPED_EVENT_UPDATE_STRENTHENWINDOW_,				//更新强化界面
	_TYPED_EVENT_FADEOUT_STRENTHENWINDOW_,				//渐隐强化界面
	//end

	_TYPED_EVENT_SHOW_TEAMBATTLEWINDOW_,			//显示组队副本
	_TYPED_EVENT_CHANGETO_TEAMBATTLE_,				//跳转到组队
	_TYPED_EVENT_HIDE_TEAMBATTLEWINDOW_,			//隐藏组队副本
	_TYPED_EVENT_UPDATE_TEAMBATTLEWINDOW_,			//更新组队副本
	_TYPED_EVENT_FADEOUT_TEAMBATTLEWINDOW_,			//渐隐组队副本

	_TYPED_EVENT_SHOW_TEAMSELECTWINDOW_,			//显示选队伍
	_TYPED_EVENT_HIDE_TEAMSELECTWINDOW_,			//隐藏选队伍
	_TYPED_EVENT_UPDATE_TEAMSELECTWINDOW_,			//更新选队伍
	_TYPED_EVENT_FADEOUT_TEAMSELECTWINDOW_,			//渐隐选队伍

	_TYPED_EVENT_SHOW_PESWINDOW_,			      //显示英雄装备
	_TYPED_EVENT_FADEIN_PESWINDOW_,			      //渐现英雄装备
	_TYPED_EVENT_HIDE_PESWINDOW_,				  //隐藏英雄装备
	_TYPED_EVENT_UPDATE_PESWINDOW_,		          //更新英雄装备
	_TYPED_EVENT_FADEOUT_PESWINDOW_,		      //渐隐英雄装备

	_TYPED_EVENT_HEROWINDOW_ROLEINFO_LEADERSHIP_LVUP,	//通知英雄窗口领导力升级

	_TYPED_EVENT_SHOW_LEVELUPNORMALWINDOW_,       // 显示角色升级面板
	_TYPED_EVENT_HIDE_LEVELUPNORMALWINDOW_,       // 隐藏角色升级面板
	_TYPED_EVENT_UPDATE_LEVELUPNORMALWINDOW_,     // 更新角色升级面板
	_TYPED_EVENT_CLOSE_SELECTSKILLWINDOW_,		  // 关闭选择技能面板时更新升级窗口

	_TYPED_EVENT_SHOW_REVENUEWINDOW_,			  // 显示征收面板
	_TYPED_EVENT_HIDE_REVENUEWINDOW_,			  // 隐藏征收面板
	_TYPED_EVENT_UPDATE_REVENUEWINDOW_,			  // 更新征收面板
	_TYPED_EVENT_FADEOUT_REVENUEWINDOW_,		  // 渐隐征收面板

	_TYPED_EVENT_SHOW_LESSRESOURCEWINDOW_,		  // 显示资源不足面板
	_TYPED_EVENT_HIDE_LESSRESOURCEWINDOW_,		  // 隐藏资源不足面板
	_TYPED_EVENT_UPDATE_LESSRESOURCEWINDOW_,	  // 更新资源不足面板


	_TYPED_EVENT_SHOW_TEMPLEWINDOW_,			  // 显示神庙窗口
	_TYPED_EVENT_HIDE_TEMPLEWINDOW_,			  // 隐藏神庙窗口


	_TYPED_EVENT_SHOW_ACTIVITYWINDOW_,			  // 显示活动主窗口
	_TYPED_EVENT_HIDE_ACTIVITYWINDOW_,			  // 隐藏活动主窗口
	_TYPED_EVENT_UPDATE_ACTIVITYWINDOW_,		  // 更新活动主窗口
	_TYPED_EVENT_DELETE_ACTIVITY_,				  // 删除当前活动
	_TYPED_EVENT_UPDATEEFFECT_ACTIVITY_,		  // 更新当前活动开启特效

	_TYPED_EVENT_SHOW_ACTIVITYWINDOW_SPEING_,	  // 显示温泉活动窗口
	_TYPED_EVENT_HIDE_ACTIVITYWINDOW_SPEING_,	  // 隐藏温泉活动窗口
	_TYPED_EVENT_UPDATE_ACTIVITYWINDOW_SPEING_,	  // 更新温泉活动窗口

	_TYPED_EVENT_SHOW_CONVICTIONWINDOW_,		  // 显示信仰窗口
	_TYPED_EVENT_HIDE_CONVICTIONWINDOW_,		  // 隐藏信仰窗口
	_TYPED_EVENT_UPDATE_CONVICTIONWINDOW_,		  // 更新信仰窗口
	_TYPED_EVENT_UPDATE_PRAY_COST,				  // 更新祈愿消耗

	_TYPED_EVENT_SHOW_HELPWINDOW_,			  // 显示装备帮助面板
	_TYPED_EVENT_HIDE_HELPWINDOW_,			  // 隐藏装备帮助面板

	_TYPED_EVENT_SHOW_ARENAHELPWINDOW_,			  // 显示竞技场帮助面板
	_TYPED_EVENT_HIDE_ARENAHELPWINDOW_,			  // 隐藏竞技场帮助面板

	_TYPED_EVENT_SHOW_HEROTECHNOLOGYWINDOW_,       // 显示英雄科技面板
	_TYPED_EVENT_HIDE_HEROTECHNOLOGYWINDOW_,       // 隐藏英雄科技面板
	_TYPED_EVENT_UPDATE_HEROTECHNOLOGYWINDOW_,     // 更新英雄科技面板
	_TYPED_EVENT_UPDATE_HEROTECHNOLOGYVIEW_,	   // 更新英雄科技子面板
	_TYPED_EVENT_UPDATE_HEROTECHNOLOGYLIST_,	   //更新英雄科技列表
	_TYPED_EVENT_FADEOUT_HEROTECHNOLOGYWINDOW_,    // 渐隐英雄科技面板

	_TYPED_EVENT_SHOW_CHATWINDOW_,       // 显示聊天面板
	_TYPED_EVENT_HIDE_CHATWINDOW_,       // 隐藏聊天面板
	_TYPED_EVENT_CLOSE_CHATWINDOW_,		 // 最小化聊天面板
	_TYPED_EVENT_UPDATE_CHATWINDOW_,     // 更新聊天面板
	_TYPED_EVENT_UPDATE_CHATVIEW_,		 // 更新英雄科技子面板
	_TYPED_EVENT_FADEOUT_CHATWINDOW_,    // 渐隐英雄科技面板

	_TYPED_EVENT_SHOW_FRIENDWINDOW_,       // 显示好友面板
	_TYPED_EVENT_HIDE_FRIENDWINDOW_,       // 隐藏好友面板
	_TYPED_EVENT_UPDATE_FRIENDWINDOW_,     // 更新好友面板
	_TYPED_EVENT_UPDATE_ALLFRIEND_,			//更新所有好友
	_TYPED_EVENT_DELETE_FRIEND_,		  //删除好友
	_TYPED_EVENT_UPDATE_FINDFRIENDWINDOW_, // 更新查找面板

	_TYPED_EVENT_SHOW_SKINSELECTWINDOW_,		  //显示换外套界面
	_TYPED_EVENT_HIDE_SKINSELECTWINDOW_,		  //隐藏换外套界面
	_TYPED_EVENT_UPDATE_SKINSELECTWINDOW_,		  //更新换外套界面
	_TYPED_EVENT_FADEOUT_SKINSELECTWINDOW_,		  //渐隐换外套界面

	_TYPED_EVENT_SHOW_EQUIPSELECTWINDOW_,			//显示选择装备界面
	_TYPED_EVENT_HIDE_EQUIPSELECTWINDOW_,			//隐藏选择装备界面
	_TYPED_EVENT_UPDATE_EQUIPSELECTWINDOW_,			//更新选择装备界面
	_TYPED_EVENT_FADEOUT_EQUIPSELECTWINDOW_,		//渐隐选择装备界面

	_TYPED_EVENT_SHOW_EQUIPSELECTCARDWINDOW_,			//显示选择装备升级卡片界面
	_TYPED_EVENT_HIDE_EQUIPSELECTCARDWINDOW_,			//隐藏选择装备升级卡片界面

	_TYPED_EVENT_SHOW_SELECTSKILLWINDOW_,		    //显示选择技能界面
	_TYPED_EVENT_HIDE_SELECTSKILLWINDOW_,		    //隐藏选择技能界面
	_TYPED_EVENT_UPDATE_SELECTSKILLWINDOW_,		    //更新选择技能界面
	_TYPED_EVENT_FADEOUT_SELECTSKILLWINDOW_,	    //渐隐选择技能界面 
	_TYPED_EVENT_ENTERBACK_SELECTSKILLWINDOW_,		//切换后台技能界面
	_TYPED_EVENT_UPDATE_SKILLNOTCH_SELECTWINDOW_,	//更新技能凹槽界面
	_TYPED_EVENT_UNLOCK_SKILLNOTCH_SELECTWINDOW_,	//解锁技能凹槽


	_TYPED_EVENT_SHOW_OBJECTWINDOW_,		  //显示物品列表界面
	_TYPED_EVENT_HIDE_OBJECTWINDOW_,		  //隐藏物品列表界面
	_TYPED_EVENT_UPDATE_OBJECTWINDOW_,		  //更新物品列表界面
	_TYPED_EVENT_FADEOUT_OBJECTWINDOW_,		  //渐隐物品列表界面

	_TYPED_EVENT_SHOW_SELECTCARDLISTWINDOW_,		  //显示素材卡界面
	_TYPED_EVENT_HIDE_SELECTCARDLISTWINDOW_,		  //隐藏素材卡界面
	_TYPED_EVENT_UPDATE_SELECTCARDLISTWINDOW_,		  //更新素材卡界面
	_TYPED_EVENT_FADEOUT_SELECTCARDLISTWINDOW_,		  //渐隐素材卡界面

	_TYPED_EVENT_SHOW_HEROBARWINDOW_,		  //显示抽卡酒馆界面
	_TYPED_EVENT_HIDE_HEROBARWINDOW_,		  //隐藏抽卡酒馆界面
	_TYPED_EVENT_UPDATE_HEROBARWINDOW_,		  //更新抽卡酒馆界面
	_TYPED_EVENT_FADEOUT_HEROBARWINDOW_,	  //渐隐抽卡酒馆界面
	_TYPED_EVENT_UPDATE_TEXT_HEROBARWINDOW_,  //更新抽卡酒馆文字界面

	_TYPED_EVENT_SHOW_RESULTHEROUP_,		  //显示英雄升级结果界面
	_TYPED_EVENT_HIDE_RESULTHEROUP_,		  //隐藏英雄升级结果界面
	_TYPED_EVENT_UPDATE_RESULTHEROUP_,	  //更新英雄升级结果界面
	_TYPED_EVENT_FADEOUT_RESULTHEROUP_,	  //渐隐英雄升级结果界面


	_TYPED_EVENT_SHOW_SERVERLISTSELWINDOW_,			//显示服务器界面
	_TYPED_EVENT_HIDE_SERVERLISTSELWINDOW_,			//隐藏服务器界面
	_TYPED_EVENT_UPDATE_SERVERLISTSELWINDOW_,		//更新服务器界面
	_TYPED_EVENT_FADEOUT_SERVERLISTSELWINDOW_,		//渐隐服务器界面

	_TYPED_EVENT_SHOW_NOTICEBOXWINDOW_,		  //显示公告界面
	_TYPED_EVENT_HIDE_NOTICEBOXWINDOW_,		  //隐藏公告界面
	_TYPED_EVENT_UPDATE_NOTICEBOXWINDOW_,	  //更新公告界面
	_TYPED_EVENT_FADEOUT_NOTICEBOXWINDOW_,	  //渐隐公告界面

	_TYPED_EVENT_SHOW_SYSTEMSETWINDOW_,		  //显示系统设置界面
	_TYPED_EVENT_HIDE_SYSTEMSETWINDOW_,		  //隐藏系统设置界面
	_TYPED_EVENT_UPDATE_SYSTEMSETWINDOW_,	  //更新系统设置界面
	_TYPED_EVENT_FADEOUT_SYSTEMSETWINDOW_,	  //渐隐系统设置界面

	_TYPEF_EVENT_SHOW_ARENAWINDOW_,		     //显示竞技场界面
	_TYPEF_EVENT_SEND_ARENAREQUEST_,		 //发送显示竞技场界面请求
	_TYPEF_EVENT_HIDE_ARENAWINDOW_,		     //隐藏竞技场界面
	_TYPEF_EVENT_UPDATE_ARENEWINDOW_,		 //更新竞技场界面
	_TYPEF_EVENT_FADEOUT_ARENEWINDOW_,		 //逐渐隐藏竞技界面
	_TYPEF_EVENT_UPDATE_ADDCHALLENGE_,
	

	_TYPEF_EVENT_SHOW_EMAILWINDOW_,		     //显示邮箱界面
	_TYPEF_EVENT_HIDE_EMAILWINDOW_,		     //隐藏邮箱界面
	_TYPEF_EVENT_UPDATE_EMAILWINDOW_,		  //更新邮箱界面

	_TYPED_EVENT_SHOW_CLIMBTOWERWINDOW_,		     //显示爬塔界面
	_TYPED_EVENT_HIDE_CLIMBTOWERWINDOW_,		     //隐藏爬塔界面
	_TYPED_EVENT_UPDATE_CLIMBTOWERWINDOW_,		 //更新爬塔界面
	_TYPED_EVENT_FADEOUT_CLIMBTOWERWINDOW_,		 //逐渐隐藏爬塔界面


	_TYPED_EVENT_SHOW_SHOPWINDOW_,		     //显示商店界面
	_TYPED_EVENT_HIDE_SHOPWINDOW_,		     //隐藏商店界面
	_TYPED_EVENT_UPDATE_SHOPWINDOW_,		 //更新商店界面
	_TYPED_EVENT_UPDATE_TEXT_SHOPWINDOW_,	 //更新商店文字界面

	_TYPEF_EVENT_SHOW_EFFECTWINDOW_,		     //显示Effect界面
	_TYPEF_EVENT_HIDE_EFFECTWINDOW_,		     //隐藏Effect界面

	_TYPED_EVENT_SHOW_GUIDEWINDOW_,		     //显示Guide界面
	_TYPED_EVENT_HIDE_GUIDEWINDOW_,		     //隐藏Guide界面
	_TYPED_EVENT_NEXT_GUIDESTEP_,			 //下一步新手引导

	_TYPED_EVENT_SHOW_BAGWINDOW_,					//显示背包界面，新
	_TYPED_EVENT_HIDE_BAGWINDOW_,					//隐藏背包界面，新
	_TYPED_EVENT_UPDATE_BAGWINDOW_,				   //刷新背包界面，新
	_TYPED_EVENT_FADEOUT_BAGWINDOW_,				//渐隐背包界面，新

	_TYPED_EVENT_SHOW_SHOPINPUTNUMWINDOW_,				//显示商店输入数字窗口
	_TYPED_EVENT_HIDE_SHOPINPUTNUMWINDOW_,				//隐藏商店输入数字窗口
	_TYPED_EVENT_UPDATE_SHOPINPUTNUMWINDOW_,			//更新商店输入数字窗口

	_TYPED_EVENT_SHOW_TIPSWINDOW_,						//显示提示窗口
	_TYPED_EVNET_HIDE_TIPSWINDOW_,						//销毁
	_TYPED_EVENT_UPDATE_TIPSWINDOW_,			    	//更新
  
	_TYPED_EVENT_SHOW_MARKETPWINDOW_,					//显示商城界面
	_TYPED_EVENT_HIDE_MARKETPWINDOW_,					//隐藏商城界面
	_TYPED_EVENT_UPDATE_MARKETPWINDOW_,					//更新商城界面
	_TYPED_EVENT_UPDATE_TEXT_MARKETPWINDOW_,			//更新商城文字界面
	_TYPED_EVENT_UPDATE_RANDOMMARKETPWINDOW_,			//刷新随机商店界面

	_TYPED_EVENT_SHOW_COMMUNICATIONWAITTINGWIN_,		//显示通信等待窗口
	_TYPED_EVENT_HIDE_COMMUNICATIONWAITTINGWIN_,		//隐藏通信等待窗口
	_TYPED_EVENT_UPDATE_COMMUNICATIONWAITINGWIN_,		//更新通信等待窗口
	_TYPED_EVENT_COMMUNICATION_TIMEOUT_,				//超时消息

	_TYPED_EVENT_SHOW_VIPWINDOW_,						 //显示vip界面
	_TYPED_EVENT_HIDE_VIPWINDOW_,						//隐藏vip界面
	_TYPED_EVENT_UPDATE_VIPWINDOW_,						//更新vip界面

	_TYPEF_EVENT_SHOW_HEROTIPSWINDOW_,		     //显示英雄tips界面
	_TYPEF_EVENT_HIDE_HEROTIPSWINDOW_,		     //隐藏雄tips界面
	_TYPEF_EVENT_UPDATE_HEROTIPSWINDOW_,		 //更新雄tips界面
	_TYPEF_EVENT_FADEOUT_HEROTIPSWINDOW_,		 //逐渐隐藏雄tips界面

	_TYPEF_EVENT_SHOW_PLAYERTIPSWINDOW_,		 //显示英雄tips界面
	_TYPEF_EVENT_HIDE_PLAYERTIPSWINDOW_,		 //隐藏雄tips界面
	_TYPEF_EVENT_UPDATE_PLAYERTIPSWINDOW_,		 //更新雄tips界面
	_TYPEF_EVENT_FADEOUT_PLAYERTIPSWINDOW_,		 //逐渐隐藏雄tips界面


	_TYPED_EVENT_SHOW_RANKWINDOW_,				  //显示排行榜界面
	_TYPED_EVENT_HIDE_RANKWINDOW_,				  //隐藏排行榜界面
	_TYPED_EVENT_UPDATE_RANKWINDOW_,			  //更新排行榜界面
	_TYPED_EVENT_FADEOUT_RANKWINDOW_,			  //逐渐隐藏排行榜界面

	_TYPED_EVENT_SHOW_PUCONGWINDOW_,				//显示仆从面板
	_TYPED_EVENT_HIDE_PUCONGWINDOW_,				//隐藏仆从面板
	_TYPED_EVENT_UPDATE_PUCONGWINDOW_,				//更新仆从面板
	_TYPED_EVENT_FADEOUT_PUCONGWINDOW_,				//渐隐仆从面板

	_TYPED_EVENT_SHOW_NETOBJECTTIPSWINDOW_,			//显示网络物品tips
	_TYPED_EVENT_HIDE_NETOBJECTTIPSWINDOW_,			//隐藏网络物品tips

	_TYPED_EVENT_SHOW_EQUIPTIPSWINDOW_,			//显示装备物品tips
	_TYPED_EVENT_HIDE_EQUIPTIPSWINDOW_,			//隐藏装备物品tips
	_TYPED_EVENT_SELL_CALLBACK_EQUIPTIPSWINDOW_,			//Tips回调装备出售

	_TYPED_EVENT_SHOW_WRITEEMAILWINDOW_,			//显示写邮件窗口
	_TYPED_EVENT_HIDE_WRITEEMAILWINDOW_,			//隐藏写邮件窗口

	_TYPED_EVENT_SHOW_ERRORTIPSWINDOW_,				//显示弱提示窗口
	_TYPED_EVENT_HIDE_ERRORTIPSWINDOW_,				//隐藏弱提示窗口
	_TYPEF_EVENT_UPDATE_ERRPRTIPSWINDOW_,			//更新弱提示窗口
 
	 

	_TYPED_EVENT_SHOW_BATTLECAPABILITYWINDOW_,				//显示提升战力窗口
	_TYPED_EVENT_HIDE_BATTLECAPABILITYWINDOW_,				//隐藏提升战力窗口
	_TYPEF_EVENT_UPDATE_BATTLECAPABILITYWINDOW_,			//更新提升战力窗口

	_TYPED_EVENT_SHOW_ACCOUNTBINDWINDOW_,				//显示绑定账号窗口
	_TYPED_EVENT_HIDE_ACCOUNTBINDWINDOW_,				//隐藏绑定账号窗口

	_TYPED_EVENT_SHOW_MAINTASKWINDOW_,				//显示主线任务窗口
	_TYPED_EVENT_HIDE_MAINTASKWINDOW_,				//隐藏主线任务窗口
	_TYPED_EVENT_UPDATE_MAINTASKWINDOW_,			//更新主线任务窗口
	_TYPED_EVENT_FADEOUT_MAINTASKWINDOW_,			//渐隐主线任务窗口

	_TYPED_EVENT_SHOW_RECHARGEWINDOW_,					//显示充值窗口
	_TYPED_EVENT_HIDE_RECHARGEWINDOW_,					//隐藏充值窗口
	_TYPED_EVENT_UPDATE_RECHARGEWINDOW_,				//更新充值窗口
	_TYPED_EVENT_UPDATE_ADDTIONPAYWINDOW_,				//附加支付充值窗口返回
	_TYPED_EVENT_UPDATE_VIPTEXT_RECHARGEWINDOW_,		//更新充值多少到VIP级别窗口
	_TYPED_EVENT_UPDATE_DOUBLE_RECHARGEWINDOW_,			//三档充值显示更新

	_TYPED_EVENT_SHOW_RECHARGEWARNWINDOW_,				//显示充值绑定账号提示窗口
	_TYPED_EVENT_HIDE_RECHARGEWARNWINDOW_,				//隐藏充值绑定账号提示窗口

	_TYPED_EVENT_SHOW_ANNOUNCEMENTWINDOW_,				//显示公告界面
	_TYPED_EVENT_HIDE_ANNOUNCEMENTWINDOW_,				//关闭公告界面
	_TYPED_EVENT_UPDATE_ANNOUNCEMENTWINDOW_,			//更新公告界面


	_TYPED_EVENT_SHOW_LIMITEDACTIVITYWINDOW_,					//显示限时活动窗口
	_TYPED_EVENT_HIDE_LIMITEDACTIVITYWINDOW_,					//隐藏限时活动窗口
	_TYPED_EVENT_UPDATE_LIMITEDACTIVITYWINDOW_,					//更新限时活动窗口
	_TYPED_EVENT_UPDATE_LIMITEDACTIVITYWINDOW_NOTICE,			//更新公告窗口


	_TYPED_EVENT_SHOW_FORCEPUSHTASKREWARDWINDOW_,				//显示强制推送奖励窗口
	_TYPED_EVENT_HIDE_FORCEPUSHTASKREWARDWINDOW_,				//隐藏推送奖励窗口
	_TYPED_EVENT_UPDATE_FORCEPUSHTASKWORDWINDOW_,				//更新推送奖励窗口
	_TYPED_EVENT_CLEAR_FORCEPUSHTASKWORDWINDOW_,				//关闭所有的奖励数据

	_TYPED_EVENT_SHOW_MINEAREAWINDOW_,						//显示矿区界面
	_TYPED_EVENT_HIDE_MINEAREAWINDOW_,						//隐藏矿区界面
	_TYPED_EVENT_FADEOUT_MINEAREAWINDOW_,					//渐隐矿区界面
	_TYPED_EVENT_UPDATE_MINEAREAWINDOW_,					//更新矿区界面

	_TYPED_EVENT_SHOW_HeroIllustratedWindow_,					//显示图鉴窗口
	_TYPED_EVNET_HIDE_HeroIllustratedWindow_,					//隐藏图鉴窗口
	_TYPED_EVENT_UPDATE_HeroIllustratedWindow_,					//更新图鉴窗口

	_TYPED_EVENT_SHOW_HeroAdvancedWindow_,						//显示进阶窗口
	_TYPED_EVNET_HIDE_HeroAdvancedWindow_,						//隐藏进阶窗口
	_TYPED_EVENT_UPDATE_HeroAdvancedWindow_,					//更新进阶窗口

	_TYPED_EVENT_SHOW_ALTARWINDOW_,						//显示献祭界面
	_TYPED_EVENT_HIDE_ALTARWINDOW_,						//隐藏献祭界面
	_TYPED_EVENT_UPDATE_ALTARWINDOW_,					//更新献祭界面
	_TYPED_EVENT_UPDATEDEBRIS_ALTARWINDOW_,				//更新碎片界面
	_TYPED_EVENT_UPDATEALTAROVER_ALTARWINDOW_,			//更新献祭完后的界面
	_TYPED_EVENT_CALLBACK_ALTARWINDOW_,			//更新献祭完后的界面

	_TYPED_EVENT_SHOW_GAINHEROWINDOW_,		 //显示获得英雄界面
	_TYPED_EVENT_HIDE_GAINHEROWINDOW_,		 //隐藏获得英雄界面

	_TYPED_EVENT_SHOW_GAINSOULDEBRIWINDOW_,		 //显示获得灵魂碎片界面
	_TYPED_EVENT_HIDE_GAINSOULDEBRIWINDOW_,		 //隐藏获得灵魂碎片界面

	_TYPED_EVENT_SHOW_CHECKLEADERSHIPWINDOW_,	//显示查看统帅力界面	
	_TYPED_EVENT_HIDE_CHECKLEADERSHIPWINDOW_,	//隐藏查看统帅力界面	

	_TYPED_EVENT_SHOW_MULTIREWARDWINDOW_,		//显示多个奖励界面	
	_TYPED_EVENT_HIDE_MULTIREWARDWINDOW_,		//隐藏多个奖励界面

	_TYPED_EVENT_SHOW_FIRSTRECHGIFTWINDOW_,		//显示首充礼包奖励界面	
	_TYPED_EVENT_HIDE_FIRSTRECHGIFTWINDOW_,		//隐藏首充礼包奖励界面
	_TYPED_EVENT_UPDATE_FIRSTRECHGIFTWINDOW_,	//更新首充礼包奖励界面

	_TYPED_EVENT_SHOW_LOGINACTIVITYWINDOW_,		//显示每日登陆奖励界面	
	_TYPED_EVENT_HIDE_LOGINACTIVITYWINDOW_,		//隐藏每日登陆奖励界面
	_TYPED_EVENT_UPDATE_LOGINACTIVITYWINDOW_,	//更新每日登陆奖励界面

	_TYPED_EVENT_SHOW_NEWEQUIPREMINDWINDOW_,	//显示新装备提醒界面	
	_TYPED_EVENT_HIDE_NEWEQUIPREMINDWINDOW_,	//隐藏新装备提醒界面

	_TYPED_EVENT_SHOW_ARENAREWARDWINDOW_,		//显示竞技场奖励界面
	_TYPED_EVENT_HIDE_ARENAREWARDWINDOW_,		//隐藏竞技奖励界面
	_TYPED_EVENT_UPDATE_ARENAREWARDWINDOW_,		//更新竞技场奖励界面
	_TYPEF_EVENT_UPDATE_REWARDDISTANCE_,		//更新奖励倒计时
	_TYPEF_EVENT_HINT_ARENAWINDOW_AWARD_,		//竞技场奖励提示

	_TYPED_EVENT_SHOW_SHOPTIPSWINDOW_,			//显示商店物品tips
	_TYPED_EVENT_HIDE_SHOPTIPSWINDOW_,			//隐藏商店物品tips


	_TYPED_EVENT_SHOW_LEVELUPREWARDACTIVITYWINDOW_,	 //显示升级奖励活动窗口
	_TYPED_EVENT_HIDE_LEVELUPREWARDACTIVITYWINDOW_,	 //隐藏升级奖励活动窗口
	_TYPED_EVENT_UPDATE_LEVELUPREWARDACTIVITYWINDOW_,//更新升级奖励活动窗口
	
	_TYPED_EVENT_SHOW_BOSSSCOREWINDOW_,				//显示boss积分系统
	_TYPED_EVENT_HIDE_BOSSSCOREWINDOW_,				//隐藏boss积分系统
	_TYPED_EVENT_FADEOUT_BOSSSCOREWINDOW_,			//渐隐boss积分系统

	_TYPED_EVENT_SHOW_HEROSOULWINDOW_,				//显示战魂激活窗口
	_TYPED_EVENT_HIDE_HEROSOULWINDOW_,				//隐藏战魂激活窗口
	_TYPED_EVENT_UPDATE_HEROSOULWINDOW_,			//更新战魂激活窗口
	 
	_TYPED_EVENT_SHOW_GROWUPPLANACTIVITYWINDOW_,	 //显示成长计划活动窗口
	_TYPED_EVENT_HIDE_GROWUPPLANACTIVITYWINDOW_,	 //隐藏成长计划活动窗口
	_TYPED_EVENT_UPDATE_GROWUPPLANACTIVITYWINDOW_,	 //更新成长计划活动窗口
	_TYPED_EVENT_UPDATE_BTNTEXT_GROWUPPLANACTIVITYWINDOW_,	 //更新成长计划按钮活动窗口


	_TYPED_EVENT_SHOW_SOULTIPSWINDOW_,			//显示战魂tips
	_TYPED_EVENT_HIDE_SOULTIPSWINDOW_,			//隐藏战魂tips

	_TYPED_EVENT_SHOW_EXCHANGEACTIVITYWINDOW_,		  //显示兑换活动窗口
	_TYPED_EVENT_HIDE_EXCHANGEACTIVITYWINDOW_,		  //隐藏兑换活动窗口
	_TYPED_EVENT_UPDATE_EXCHANGEACTIVITYWINDOW_,	  //更新兑换活动窗口
	_TYPED_EVENT_REFRESH_EXCHANGEACTIVITYWINDOW_,	  //刷新兑换活动窗口
 	 
	_TYPED_EVENT_SHOW_VIPGIFTWINDOW_,		//显示VIP礼包界面	
	_TYPED_EVENT_HIDE_VIPGIFTWINDOW_,		//隐藏VIP礼包界面	
	_TYPED_EVENT_UPDATE_VIPGIFTWINDOW_,		//更新VIP礼包界面	
	_TYPED_EVENT_BACKQA_VIPGIFTWINDOW_,		//返回是否购买VIP礼包界面

	_TYPED_EVENT_SHOW_APPSTOREWAITWINDOW_,		//显示app支付等待框	
	_TYPED_EVENT_HIDE_APPSTOREWAITWINDOW_,		//隐藏app支付等待框	

	_TYPED_EVENT_SHOW_TENCALLWINDOW_,		 //显示十连抽界面
	_TYPED_EVENT_HIDE_TENCALLWINDOW_,		 //隐藏十连抽界面

	_TYPED_EVENT_SHOW_GAINCALLITEMWINDOW_,		//显示召唤物品界面
	_TYPED_EVENT_HIDE_GAINCALLITEMWINDOW_,		//隐藏召唤物品界面

	_TYPED_EVENT_SHOW_TEAMINFOWINDOW_,			//显示队伍信息界面
	_TYPED_EVENT_HIDE_TEAMINFOWINDOW_,			//隐藏队伍信息界面
	_TYPED_EVENT_UPDATE_TEAMINFOWINDOW_,		//更新队伍信息界面

//*********************************************************************************
//********************************逻辑事件枚举***********************************
//*********************************************************************************
	//============网络断开提示通知===============
	_TYPED_EVENT_SOCKETCLOSED_HINT,					//网络断开提示通知
	_TYPED_EVENT_NETWORKCHANGED_HINT,				//网络切换提示,来自设备

	_TYPED_EVENT_RECONNECT_INGAME_NOTIFY,			//游戏中网络重连通知

	//~~~~~~~~~~~声音~~~~~~~~~~~
	_TYPED_EVENT_SOUND_PLAY_,						//播放声音
	_TYPED_EVENT_SOUND_STOP_,						//停止播放声音
	//
	_TYPED_EVENT_CLEAR_USING_EFFECT_,				//清除浮动效果

	_TYPED_EVENT_REFRESH_UI_BAGOBJECT_INFO_,		//刷新界面展示背包信息
	_TYPED_EVENT_REFRESH_HEROSTRENVIEW_,			//英雄强化界面事件注册
	_TYPED_EVENT_REFRESH_UPDATEUI_,					//刷新界面事件

	_TYPED_EVENT_REFRESH_BAGSALEIMPORTANTOBJECT_COMFIRM_,	//确认要卖贵重物品

	_TYPED_EVENT_BAG_CHANGE_SUBVIEW_,				//物品列表界面，使用合成物时从物品列表功能到合成功能

	_TEPED_EVENT_EQUIPLVUP_GET_COSTMONEY_,			//装备升级界面，第一次服务器通讯获得花费金钱
	_TEPED_EVENT_EQUIPLVUP_GET_LVUPRESULT_,			//装备升级界面，第二次获得升级完成
	_TEPED_EVENT_EQUIPLVUP_AFTER_CHOOSECOST_,		//装备升级界面，选完素材卡

	_TYPED_EVENT_EQUPERECAST_REFRESH_LIST_,

	_TYPED_EVENT_EQUIPRECAST_UPDATE_,				//装备重铸更新消息

	_TEPED_EVENT_UPDATRA_EQUIPPROMOTE_,				//装备进阶见面刷新

	_TYPED_EVENT_ATTRIBUTE_TRAIN_GETSTATUS_,		//属性训练接收到服务器属性状态信息

	_TYPED_EVENT_LOCK_ATTRIBUTE_RESULT_,			//装备洗练，属性锁定时服务器结果
	_TYPED_EVENT_UNLOCK_ATTRIBUTE_RESULT_,			//装备洗练，属性解锁时服务器结果
	_TYPED_EVENT_EQUIPTRAIN_RESULT_,				//装备洗练，服务器返回洗练结果
	_TYPED_EVENT_EQUIPTRAIN_GETLOCKSTATUS_RESULT_,	//装备洗练，装备属性锁状态返回结果

	_TYPED_EVENT_CONFIRMUSE_CONTAINPURPLECARD_,	//选中紫卡使用确认提示框的信息

	_TYPED_EVENT_ENTERTOWER_RESULT_,				//爬塔，进入塔结果消息
	_TYPED_EVENT_CHALLENGETOWER_RESULT,				//爬塔，挑战塔结果消息,战斗播放结束后的事件
	_TYPED_EVENT_CHALLENGETOWER_RUNHERO_,			//爬塔，挑战接收到数据，提示塔界面人物开始移动的事件
	_TYPED_EVENT_RESETTOWER_RESULT_,				//爬塔，重置塔结果消息
	_TYPED_EVENT_START_TOWER_TIMES_,			//爬塔，开始塔判断次数结果消息

	_TYPED_EVENT_TOWER_COMFIRM_RESET_,			//爬塔提示确认重置，确认事件

	_TYPED_EVENT_ROLEEQUIP_ENTER_ENTER_,		//进入人物装备通知
	_TYPED_EVENT_ROLEEQUIP_EQUIP_MAINWEAPON_,		//装备上主手时通知

	_TYPED_EVENT_BAGREFRESH_BAG_ITEM_,		//背包物品同步

	_TYPED_EVENT_HOME_MORE_SHOWITEMS_,		//呼叫打开More
	
	_TYPED_EVENT_BAG_OPENLOCK_SIZE_,				//背包解锁格数格数更新

	_TYPEF_EVENT_NPCTALK_TONEXTPAGE_,			  //NPC对话下一页

	_TYPED_EVENT_NUMBER_,                         // 事件类型个数

	_TYPED_EVENT_TEAMBATTLE_GETDATA_RESULT_,             //组队副本主界面数据
	_TYPED_EVENT_TEAMBATTLE_RESET_RESULT_,             //组队重置进度数据
	_TYPED_EVENT_TEAMSELECT_GETSTAGEDATA_RESULT_,		//获得组队副本当前的关卡的数据
	_TYPED_EVENT_TEAMSELECT_GETTEAMLIST_,			//获得队伍列表数据
	_TYPED_EVENT_TEAMSELECT_GETMYTEAM_,				//获得我的队伍数据
	_TYPED_EVENT_TEAMSELECT_BEREMOVED_,				//我被从队伍中移除
	_TYPED_EVENT_TEAMSELECT_GETSLAVElIST_RESULT_,			//获得我的奴隶列表
	_TYPED_EVENT_TEAMSELECT_GETMERCENARYLIST_RESULT_,		//获得我的可雇佣仆从列表
	_TYPED_EVENT_TEAMBATTLE_GETTONGGUANJIANGLI_RESULT_,		//获得通关奖励
	_TYPED_EVENT_TEAMBATTLE_CONFIRM_COSTJEWEL_TEAMREWARD_,	//确认花费钻石领取通关奖励
	_TYPED_EVENT_TEAMBATTLE_REFUSE_COSTJEWEL_TEAMREWARD_,	//取消花费钻石领取通关奖励

	_TYPED_EVENT_PESEQUIPSUBVIEW_ROLESHAPE_REFRESH,		//刷新人物外套
	_TYPED_EVENT_PESEQUIPSUBVIEW_ROLEEQUIP_REFRESH,		//刷新人物装备
	_TYPED_EVENT_PESEQUIPSUBVIEW_EQUIPLIST_REFRESH,		//刷新装备列表

	_TYPED_EVENT_UPDATE_HEROSOUL_VIEW_,					//刷新英雄战魂界面

	_TYPED_EVENT_PESEQUIPSUBVIEW_TIPS_CALLBACK_EQUIP,		//Tips回调装备
	_TYPED_EVENT_PESEQUIPSUBVIEW_TIPS_CALLBACK_DISBOARD,	//Tips回调卸下装备

	_TYPED_EVENT_SERVANT_MASTER_ENTERCATCH_GETDATA_,	//奴隶主进入抓捕
	_TYPED_EVENT_SERVANT_MASTER_ENTERPLAY_GETDATA_,		//奴隶主进入互动
	_TYPED_EVENT_SERVANT_MASTER_PLAYSUCCESS_GETDATA_,	//奴隶主互动成功
	_TYPED_EVENT_SERVANT_MASTER_NEWS_COME_,				//奴隶主新闻到来
	_TYPED_EVENT_SERVANT_MASTER_ENTERRESCUE_GETDATA_,	//奴隶主进入解救
	_TYPED_EVENT_SERVANT_SLAVE_ENTERREVOLT_GETDATA_,	//奴隶进入反抗
	_TYPED_EVENT_SERVANT_SLAVE_BRIBESUCCESS_GETDATA_,	//奴隶贿赂成功
	_TYPED_EVENT_SERVANT_SLAVE_ENTERPLAY_GETDATA_,		//奴隶进入互动
	_TYPED_EVENT_SERVANT_SLAVE_NEWS_COME_,				//奴隶主新闻到来
	_TYPED_EVENT_SERVANT_SLAVE_PLAYSUCCESS_GETDATA_,	//奴隶互动成功
	_TYPED_EVENT_SERVANT_SLAVE_ENTERSOS_GETDATA_,		//奴隶进入求救界面
	_TYPED_EVENT_SERVANT_PLAYER_IDENTITYCHANGED_,		//人物身份转换
	_TYPED_EVENT_SERVANT_COMFIRM_IDENTITYCHANGED_,		//人物身份转换后确认身份转换，从而切换界面
	 
	//_TYPED_EVENT_ENTERMAINTASK_GETDATA_,				//进入主线任务获得数据
	//_TYPED_EVENT_MAINTASKREWARD_GETDATA_,				//主线任务领取奖励

	_TYPED_EVENT_RESET_COMFIRM_TEAMBATTLEPROGRESS_,		//确认组队进度重构

	_TYPED_EVENT_MINING_ENTERMINING_GETDATA_,					//进入挖矿获得数据
	_TYPED_EVENT_MINING_ENTERGOBLINAREA_GETDATA_,				//进入地精矿获得数据
	_TYPED_EVENT_MINING_STOPMINING_GETDATA_,					//停止采矿获得数据
	_TYPED_EVENT_MINING_ENTERDWARVENAREA_GETDATA_,				//进入矮人矿获得数据
	_TYPED_EVENT_MINING_ENTERDRAGONAREA_GETDATA_,				//进入巨龙矿获得数据
	_TYPED_EVENT_MINING_STARTMINING_GETDATA_,					//开始采矿成功
	_TYPED_EVENT_MINING_ENTERHUNTMINING_GETDATA_,						//进入寻宝获得返回
	_TYPED_EVENT_MINING_HUNTMININGRESULT_GETDATA_,				//寻宝结果返回
	_TYPED_EVENT_MINING_HUNTHELLOMONEY_GETDATA_,				//打招呼获得金钱返回
	_TYPED_EVENT_MINING_HUNTBUYMINERAL_GETDATA_,				//直接购买寻宝原矿的返回
	_TYPED_EVENT_MINING_HUNTASKFORFRIEND_GETDATA_,				//加好友申请返回
	_TYPED_EVENT_MINING_DWARVEN_LOOT_GETDATA_,					//矮人矿区抢矿位获得数据

	_TYPED_EVENT_TOWER_FASTFIGHT_GETDATA_,						//快速战斗
	_TYPED_EVENT_TOWER_JEWELRESET_GETDATA_,						//钻石重置
	_TYPED_EVENT_TOWER_REWARD_GETDATA_,							//获得奖励列表
	_TYPED_EVENT_TOWER_GETREWARD_GETDATA_,						//领取某个奖励

	_TYPED_EVENT_START_HERO_INFO_SYNC_,							//开始同步英雄信息
	_TYPED_EVENT_END_HERO_INFO_SYNC_,							//同步英雄信息结束
	
	_TYPED_EVENT_CONFIRM_EQUIP_USEONEKEYTRAIN_,					//确定使用装备一键洗练

	_TYPED_EVENT_BUYCLIMBTOWERTIMES_GETDATA_,					//购买爬塔次数成功
	_TYPED_EVENT_BUYHUNTTIMES_GETDATA_,							//购买寻宝次数成功

	_TYPED_EVENT_UNLOCK_EQUIPATTRIBUTELOCK_,					//解锁装备属性锁定

	_TYPED_EVENT_EQUIPPROMOTE_RESULT_,							//装备进阶结果

	_TYPED_EVENT_NEWFUNCOPEN_HOMESHOWNEW_,						//新功能开启通知homewindow显示New

	_TYPED_EVENT_DWARVEN_PAGEINFO_REFRESH_CONFIRM_,				//矮人矿区界面数据刷新弹窗确认

	_TYPED_EVENT_LIMITACTIVITY_EXCHANGE_CDKEY_RESLUT_,			//兑换码结果

	_TYPED_EVENT_ENABLE_GLOBAL_MENUITEM,						//启用全局按钮事件

	_TYPED_EVENT_GAME_RESUME_,									//游戏状态恢复正常

	_TYPED_EVENT_BOSS_ENTER_GETDATA_,							//boss积分获得页面数据
	_TYPED_EVENT_BOSS_RANK_GETDATA_,							//boss积分获得排行榜数据
	_TYPED_EVENT_BOSS_REWARD_GETDATA_,							//boss积分获得奖励数据
	_TYPED_EVENT_BOSS_LINGQU_GETDATA_,							//boss积分领取奖励反馈数据

	_TYPED_EVENT_BOSS_HUNT_LEFTTIME_,							//寻宝剩余次数
	
	_TYPED_EVNET_HUNT_LIEREN_CHAKAN_GETDATA_,					//寻宝遇到猎人查看猎人信息
	_TYPED_EVENT_HUNT_LIEREN_QIANGDUO_NO_GETDATA_,				//寻宝遇到猎人放弃抢夺猎人信息
	_TYPED_EVENT_HUNT_LIEREN_QIANGDUO_NO_CONFIRM_,				//寻宝猎人放弃抢夺提示框确认放弃
	_TYPED_EVENT_SHOP_BUY_COUNTERSIGN,							//商店购买确定

	//注意：请不要在以下类型之间再定义事件类型
	_TYPED_EVENT_LUA_MOUDLE_BEGIN_ = 5000,	//Lua模块事件开始
	_TYPED_EVENT_LUA_MOUDLE_END_   = 6000,	//Lua模块事件结束
};


#endif
