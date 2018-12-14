//
// Created by vvdn on 26/9/18.
//
#include <jni.h>

#ifndef NDKSAMPLEINANDROID_HELLO_H
#define NDKSAMPLEINANDROID_HELLO_H
#ifdef __cplusplus
extern "C" {
#endif //NDKSAMPLEINANDROID_HELLO_H

JNIEXPORT jstring JNICALL Java_ndk_sample_in_android_MyNDK_getMyString(JNIEnv *, jobject);
JNIEXPORT jint JNICALL Java_ndk_sample_in_android_MyNDK_sum(JNIEnv *, jobject,jint);

JNIEXPORT jint JNICALL Java_ndk_sample_in_android_MainActivity_sum(JNIEnv *, jobject,jint);
#ifdef __cplusplus
}
#endif
#endif