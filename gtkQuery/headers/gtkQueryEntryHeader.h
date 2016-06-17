typedef struct _gtkQueryEntry {

	const char* (*get) ();
 	double (*getAsDouble) ();	
 	

}gtkQueryEntry;

gtkQueryEntry entry(char*);
const char *get (void);
double getAsDouble (void);	
 	

