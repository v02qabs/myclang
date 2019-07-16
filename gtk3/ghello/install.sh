gcc hello.c -o hello $(pkg-config --cflags --libs glib-2.0)
