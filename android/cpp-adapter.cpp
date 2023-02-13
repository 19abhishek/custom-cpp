#include <jni.h>
#include "react-native-custom-cpp.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_customcpp_CustomCppModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return customcpp::multiply(a, b);
}
