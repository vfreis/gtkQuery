typedef struct _gtkQuerySpinButton{

	double (*getSpin) (void);
	void (*adjustSpin) (double, double, double, double, double, double);
	
}gtkQuerySpinButton;

gtkQuerySpinButton spin(char* spin_name); 
double getSpin();
void adjustSpin(double, double, double, double, double, double);
