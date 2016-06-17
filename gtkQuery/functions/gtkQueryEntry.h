gtkQueryEntry entry(char* entry_name) {

	gtk.entry = (GtkEntry*)gtk_builder_get_object(gtk.builder, entry_name);
	
	gtkQueryEntry entry;

	entry.get = get;
	entry.getAsDouble = getAsDouble;

	return entry;
 }

const char *get (void) {

	const char *entryText = gtk_entry_get_text(gtk.entry);

	return entryText;
}

double getAsDouble (void) {

	const char *entryText = gtk_entry_get_text(gtk.entry);
	double entryValue = atof(entryText);

	return entryValue;
 } 

