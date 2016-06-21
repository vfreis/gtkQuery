#define LINK_STD() = {setURL}

gtkQueryLinkButton linkButton (char *linkButtonName) {

	gtkQueryLinkButton linkButton = LINK_STD();

	gtk.linkButton = (gtkQueryLinkButton*)gtk_builder_get_object(builder, linkButtonName);

	return linkButton;
}

void setURL(char *url) {

	gtk_link_button_set_uri (gtk.linkButton, url);
}	