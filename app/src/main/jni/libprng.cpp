//
// Created by sertac.demiray on 19/10/2021.
//
#include <jni.h>
#include <string>
#include <stdio.h>
#include <jni.h>

using namespace std;

extern "C" JNIEXPORT jstring JNICALL
Java_com_cryptopp_prng_PRNG_stringNdk(JNIEnv *env, jobject thiz) {
    string message = "DgPaysDemo";
    return env->NewStringUTF(message.c_str());
}




