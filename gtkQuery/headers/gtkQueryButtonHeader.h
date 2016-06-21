typedef struct _gtkQueryButton{

	void (*onClick) (void*, void*);	
	void (*setButtonLabel) (char*);

}gtkQueryButton;

gtkQueryButton button (char *);

void onClick(void*, void*);
void setButtonLabel(char*);
