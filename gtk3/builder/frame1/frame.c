#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);
	GtkBuilder *builder;
	builder = gtk_builder_new();
	gtk_builder_add_from_file(builder, "frame1.glade", NULL);
	gtk_builder_connect_signals(builder,NULL);
	GObject *frame1;
	frame1 = gtk_builder_get_object(builder, "window1");
	gtk_widget_show_all(GTK_WIDGET(frame1));
	gtk_main();
	return 0;
}

