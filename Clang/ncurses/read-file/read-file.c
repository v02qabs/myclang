#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

void display_file(const char *filename);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    initscr();            // ncursesの初期化
    cbreak();
    noecho();
    keypad(stdscr, TRUE); // 矢印キーなどの入力を有効化

    display_file(argv[1]);

    getch();  // ユーザーのキー入力を待つ
    endwin(); // ncursesモード終了

    return 0;
}

void display_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printw("Failed to open file: %s\n", filename);
        refresh();
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printw("%s", buffer);
    }

    fclose(fp);
    refresh();
}
