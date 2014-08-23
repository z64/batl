#include "global.h"
#include "player.h"

int main() {

	initscr();
	curs_set(0);

	printw("playerdev");

	Player player1("adam");
	player1.addShip(new Ship(5,4,'r',CRUISER,"myShip"));
	player1.addShip(new Ship(7,10,'d',CARRIER,"myShip"));

	player1.isHit(5,4);
	player1.isHit(20,20);

	player1.draw();

	refresh();
	getch();

	endwin();
	return 0;

}	
