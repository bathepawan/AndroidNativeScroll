ifneq ($(TARGET_SIMULATOR),true)

LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CFLAGS += -Wall
# Enable PIE manually. Will get reset on $(CLEAR_VARS). This
# is what enabling PIE translates to behind the scenes.
LOCAL_CFLAGS += -fPIE 
LOCAL_LDFLAGS += -fPIE -pie

LOCAL_LDLIBS := -L$(LOCAL_PATH)/lib -llog -g

LOCAL_C_INCLUDES := bionic
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include

LOCAL_SRC_FILES:= scroll.c

LOCAL_MODULE := scroll

include $(BUILD_EXECUTABLE)

endif  # TARGET_SIMULATOR != true
