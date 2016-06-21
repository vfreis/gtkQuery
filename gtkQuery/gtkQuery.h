#ifndef __GTK_H__
	#include <gtk/gtk.h>
#endif /* __GTK_H__ */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

//gtkQuery prototype function
typedef void (*gtkQueryFunction) (void*);

//gtkQueryObj is used to make an easier access to gtk objects needed troughout the program;
typedef struct _gtkQuery {
		
	GtkBuilder *builder;
	GtkWindow *window;
	GtkButton *button;
	GtkEntry *entry;
	GtkSpinButton *spin;
	GtkLabel* label;
	GtkAdjustment *adjust;

}gtkQuery;

gtkQuery gtk;


void gtkQueryStart(int argc, char *argv[], char* widget_name) {

	gtk_init(&argc, &argv);

	gtk.builder = gtk_builder_new();
	gtk_builder_add_from_file(gtk.builder, widget_name, NULL);

}

//All the includes should be declared here !!!!!

#include "headers/gtkQueryHeader.h"
#include "functions/gtkQueryFunction.h"




