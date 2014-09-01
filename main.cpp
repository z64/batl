#include "global.h"
#include "game.h"

Ship* getShip();

int main() {

	initscr();

	new Game();

	refresh();
	getch();

	endwin();
	return 0;

}

Ship* getShip() {

	mvprintw(1,0,"X: ");
	mvprintw(2,0,"Y: ");
	mvprintw(3,0,"Direction: ");
	mvprintw(4,0,"Class: ");

	int x,y; char d; int l; //string n;

	mvscanw(1,11,"%d",&x); //x
	mvscanw(2,11,"%d",&y); //y
	mvscanw(3,11,"%c",&d); //direction
	mvscanw(4,11,"%d",&l); //length

	return new Ship(x,y,d,l,"newShip");

}
