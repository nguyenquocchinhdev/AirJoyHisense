/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fqx_airjoy_client_MediaVideo */

#ifndef _Included_com_fqx_airjoy_client_MediaVideo
#define _Included_com_fqx_airjoy_client_MediaVideo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    playVideo
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_playVideo
  (JNIEnv *, jobject, jstring, jstring, jstring, jfloat);

/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    setPlayVideoRate
 * Signature: (Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_setPlayVideoRate
  (JNIEnv *, jobject, jstring, jfloat);

/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    stopPlayVideo
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_stopPlayVideo
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    setPlayVideoProgress
 * Signature: (Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_setPlayVideoProgress
  (JNIEnv *, jobject, jstring, jfloat);

/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    getPlayVideoProgress
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_getPlayVideoProgress
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_fqx_airjoy_client_MediaVideo
 * Method:    getPlayVideoInfo
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_fqx_airjoy_client_MediaVideo_getPlayVideoInfo
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
