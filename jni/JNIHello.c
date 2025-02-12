#include "JNIHello.h"
#include <stdio.h>

JNIEXPORT void JNICALL
Java_hello_JNIHello_main(JNIEnv * env, jclass cls, jobjectArray args)
{
  printf("Hello, World!\n");
}
