typedef struct _gtkQueryWindow{

	void (*show) (void);	
	void (*hide) (void);
	void (*move) (int,int);
	
}gtkQueryWindow;

gtkQueryWindow window(char*);
void show();
void hide();
void move(int, int);
 