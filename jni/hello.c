#include <jni.h>
#include <stdio.h>

// Java_パッケージ名_クラス名_メソッド名
JNIEXPORT void JNICALL Java_HelloWorld_hello(JNIEnv *env, jobject obj) {
    printf("Hello World from C!\n");
}
