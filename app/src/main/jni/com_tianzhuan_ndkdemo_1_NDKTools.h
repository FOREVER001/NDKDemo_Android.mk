
#include <jni.h>

#ifndef _Included_com_tianzhuan_ndkdemo_1_NDKTools  /*防止该头文件被重复引用*/
#define _Included_com_tianzhuan_ndkdemo_1_NDKTools
#ifdef __cplusplus //__cplusplus是cpp中自定义的一个宏
extern "C" { //告诉编译器，这部分代码按C语言的格式进行编译，而不是C++的
#endif
/*
 * Class:     com_tianzhuan_ndkdemo_1_NDKTools
 * Method:    getStringFromNDK
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tianzhuan_ndkdemo_11_NDKTools_getStringFromNDK
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
