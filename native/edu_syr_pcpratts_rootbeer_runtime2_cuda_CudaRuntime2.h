/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2 */

#ifndef _Included_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
#define _Included_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    setupGpuCards
 * Signature: (II[J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_setupGpuCards
  (JNIEnv *, jclass, jint, jint, jlongArray);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    initCurrentGpuCard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_initCurrentGpuCard
  (JNIEnv *, jclass);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    freeCurrentGpuCard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_freeCurrentGpuCard
  (JNIEnv *, jclass);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    loadFunction
 * Signature: (JLjava/lang/Object;III)V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_loadFunction
  (JNIEnv *, jobject, jlong, jobject, jint, jint, jint);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    writeClassTypeRef
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_writeClassTypeRef
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    runBlocks
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_runBlocks
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    unload
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_unload
  (JNIEnv *, jobject);

/*
 * Class:     edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2
 * Method:    printDeviceInfo
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_syr_pcpratts_rootbeer_runtime2_cuda_CudaRuntime2_printDeviceInfo
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
