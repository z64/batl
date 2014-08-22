#include "global.h"
#include "ship.h"

int main() {

	initscr();

	Ship ship(5,5,'r',3,"testShip");
	ship.draw();

	refresh();
	getch();

	endwin();
	return 0;

}	
