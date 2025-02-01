#include <ncurses.h>

int main() {
    initscr();            // ncursesの初期化
    cbreak();             // 行バッファリングを無効化
    noecho();             // 入力された文字を表示しない


    printw("HELLO");      // 画面に "HELLO" を表示
    refresh();            // 画面を更新
    getch();              // ユーザーのキー入力を待つ

    endwin();             // ncursesモード終了
    return 0;
}
