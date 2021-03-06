/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com4j_Native */

#ifndef _Included_com4j_Native
#define _Included_com4j_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com4j_Native
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com4j_Native_init
  (JNIEnv *, jclass);

/*
 * Class:     com4j_Native
 * Method:    createInstance
 * Signature: (Ljava/lang/String;IJJ)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_createInstance
  (JNIEnv *, jclass, jstring, jint, jlong, jlong);

/*
 * Class:     com4j_Native
 * Method:    getActiveObject
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getActiveObject
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com4j_Native
 * Method:    getObject
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getObject
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com4j_Native
 * Method:    getROTSnapshot
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_com4j_Native_getROTSnapshot(JNIEnv *, jclass);


/*
 * Class:     com4j_Native
 * Method:    getRunningObjectTable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getRunningObjectTable
  (JNIEnv *, jclass);

/*
 * Class:     com4j_Native
 * Method:    getEnumMoniker
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getEnumMoniker
  (JNIEnv *, jclass, jint);

/*
 * Class:     com4j_Native
 * Method:    getNextRunningObject
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getNextRunningObject
  (JNIEnv *, jclass, jint, jint);


/*
 * Class:     com4j_Native
 * Method:    addRef
 * Signature: (I)V
 */
JNIEXPORT jint JNICALL Java_com4j_Native_addRef
  (JNIEnv *, jclass, jint);

/*
 * Class:     com4j_Native
 * Method:    release
 * Signature: (I)V
 */
JNIEXPORT jint JNICALL Java_com4j_Native_release
  (JNIEnv *, jclass, jint);

/*
 * Class:     com4j_Native
 * Method:    invoke
 * Signature: (II[Ljava/lang/Object;[IIZI)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com4j_Native_invoke
  (JNIEnv *, jclass, jint, jint, jobjectArray, jintArray, jint, jboolean, jint);

/*
 * Class:     com4j_Native
 * Method:    invokeDispatch
 * Signature: (III[Ljava/lang/Object;)Lcom4j/Variant;
 */
JNIEXPORT jobject JNICALL Java_com4j_Native_invokeDispatch
  (JNIEnv *, jclass, jint, jint, jint, jobjectArray);

/*
 * Class:     com4j_Native
 * Method:    getErrorInfo
 * Signature: (IJJ)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_getErrorInfo
  (JNIEnv *, jclass, jint, jlong, jlong);

/*
 * Class:     com4j_Native
 * Method:    getErrorMessage
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com4j_Native_getErrorMessage
  (JNIEnv *, jclass, jint);

/*
 * Class:     com4j_Native
 * Method:    queryInterface
 * Signature: (IJJ)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_queryInterface
  (JNIEnv *, jclass, jint, jlong, jlong);

/*
 * Class:     com4j_Native
 * Method:    loadTypeLibrary
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_loadTypeLibrary
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com4j_Native
 * Method:    coInitialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com4j_Native_coInitialize
  (JNIEnv *, jclass);

/*
 * Class:     com4j_Native
 * Method:    coUninitialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com4j_Native_coUninitialize
  (JNIEnv *, jclass);

/*
 * Class:     com4j_Native
 * Method:    advise
 * Signature: (ILcom4j/EventProxy;JJ)I
 */
JNIEXPORT jint JNICALL Java_com4j_Native_advise
  (JNIEnv *, jclass, jint, jobject, jlong, jlong);

/*
 * Class:     com4j_Native
 * Method:    unadvise
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com4j_Native_unadvise
  (JNIEnv *, jclass, jint);

/*
 * Class:     com4j_Native
 * Method:    createBuffer
 * Signature: (II)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com4j_Native_createBuffer
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
