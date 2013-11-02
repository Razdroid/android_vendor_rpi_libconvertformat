LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_CFLAGS += $(USERLAND_CFLAGS)
LOCAL_C_INCLUDES += $(USERLAND_INCLUDES)

LOCAL_MODULE := libconvertformat
LOCAL_SRC_FILES := convert_format.cpp
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
