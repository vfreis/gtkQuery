#include <gtk/gtk.h>

//gtkQueryObj is used to make an easier access to gtk objects needed troughout the program;
typedef struct _gtkQuery {
	
	void (*function) (void);
	
	GtkBuilder *builder;
	GtkWindow *window;
	GtkButton *button;
	GtkEntry *entry;
	GtkSpinButton *spin;
	GtkLabel* label;


}gtkQuery;


gtkQueryObj gtk;

void gtkQueryStart(int argc, char *argv[], char* widget_name) {

	printf("%s\n", widget_name);
	gtk_init(&argc, &argv);

	gtk.builder = gtk_builder_new();
	gtk_builder_add_from_file(gtk.builder, widget_name, NULL);

}

//All the includes should be declared here !!!!!

#include "headers/gtkQueryHeader.h"
#include "functions/gtkQueryFunction.h"



