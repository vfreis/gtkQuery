typedef struct _gtkQueryWindow{

	void (*show) (void);	
	void (*hide) (void);
	
}gtkQueryWindow;

gtkQueryWindow window(char*);
void show();
void hide();
