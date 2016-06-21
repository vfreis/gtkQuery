#include "gtkQuery/gtkQuery.h"

void imprime() {

	label("label").write("Hello gtkQuery !!");
}	

int main (int argc, char *argv[]) {

	gtkQueryStart(argc, argv, "helloGtkQuery.xml");
	
	window("window").show();

	button("button").onClick(imprime);

	gtk_main();
}


