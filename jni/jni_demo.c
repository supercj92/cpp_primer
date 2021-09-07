//
// Created by chris on 2021/6/12.
//
#include "com_cfysu_jni_JNIHello.h"


JNIEXPORT jstring JNICALL Java_com_cfysu_jni_JNIHello_sayHello
        (JNIEnv * env, jobject jo){
    return (*env)->NewStringUTF(env,"这里是来自c的string");
    //printf("Java_com_cfysu_jni_JNIHello_sayHello");
    //return str;
}
