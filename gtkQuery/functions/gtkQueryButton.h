#define BUTTON_STD() {onClick, setButtonLabel}

gtkQueryButton button (char *button_name) {

	gtkQueryButton button = BUTTON_STD();

	gtk.button = (GtkButton*)gtk_builder_get_object(gtk.builder, button_name);

	 return button;
}

void onClick (void *function) {
	
	//void *param is not working yet ....

	g_signal_connect((gpointer)gtk.button, "clicked",
			function, NULL);
}

void setButtonLabel (char* button_label) {

	const char *_button_label = button_label;

	gtk_button_set_label(gtk.button, _button_label);
}

