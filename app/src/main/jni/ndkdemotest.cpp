#include "com_tianzhuan_ndkdemo_1_NDKTools.h"

JNIEXPORT jstring JNICALL Java_com_tianzhuan_ndkdemo_11_NDKTools_getStringFromNDK
  (JNIEnv *env , jclass jclass){
    return env->NewStringUTF("哈哈我是张三");
  }