LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	BinderStudyServer.cpp \
	BinderStudyService.cpp \
	IBinderStudyService.cpp	
LOCAL_MODULE_TAGS := eng

LOCAL_SHARED_LIBRARIES := \
	libbinder \
	libutils \

LOCAL_MODULE:= BinderStudyServer

include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)
LOCAL_MODULE_TAGS := eng

LOCAL_SRC_FILES := \
	BinderStudyClient.cpp \
	BinderStudyClient_main.cpp \
	IBinderStudyService.cpp	
				

LOCAL_SHARED_LIBRARIES += \
	libbinder \
	libutils \

LOCAL_MODULE:= BinderStudyClient_main

include $(BUILD_EXECUTABLE)
