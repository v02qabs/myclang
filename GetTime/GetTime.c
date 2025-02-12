#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main ( void ) {
    time_t now_t = time(NULL);
    // 同じ形式で時刻を2回表示する。
    // asctime がセキュリティーチェックでエラーになる場合は
    // 代わりに asctime_s を使う。（後述）
    printf("%s", asctime(localtime(&now_t)));
    printf("%s", ctime(&now_t));
    return 0;
}
