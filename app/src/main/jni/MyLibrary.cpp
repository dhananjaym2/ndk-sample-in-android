//
// Created by vvdn on 26/9/18.
//
#include <Hello.h>
#include <mysum.c>

JNIEXPORT jstring Java_ndk_sample_in_android_MyNDK_getMyString(JNIEnv * env, jobject) {
    return env->NewStringUTF("HelloFromLibrary.cpp file");
}

JNIEXPORT jint Java_ndk_sample_in_android_MyNDK_sum(JNIEnv * env, jobject instance,jint a) {
    return sum(a);
}

JNIEXPORT jint Java_ndk_sample_in_android_MainActivity_sum(JNIEnv * env, jobject instance,jint a) {
    return sum(a);
}
