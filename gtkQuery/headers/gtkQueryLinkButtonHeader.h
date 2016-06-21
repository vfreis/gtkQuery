typedef struct _gtkQueryLinkButton{

	void (*setURL) (char*);

}gtkQueryButton;

gtkQueryLinkButton linkButton (char *);

void setURL(char *url);