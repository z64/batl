#include "global.h"
#include "ship.h"

int main() {

	initscr();
	curs_set(0);

	Ship ship(5,5,'r',CARRIER,"testShip");
	ship.draw();

	Ship ship1(5,25,'u',CRUISER,"testCruiser");
	ship1.draw();

	Ship ship2(15,5,'d',GUNBOAT,"testGunboat");
	ship2.draw();
	refresh();
	getch();

	ship2.isHit(15,5);
	ship2.isHit(15,6);
	ship2.draw();

	refresh();
	getch();

	endwin();
	return 0;

}	
