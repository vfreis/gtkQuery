typedef struct _gtkQueryEntry {

	const char* (*getEntry) ();
 	double (*getEntryAsDouble) ();	
 	

}gtkQueryEntry;

gtkQueryEntry entry(char*);
const char *getEntry ();
double getEntryAsDouble ();	
 	

