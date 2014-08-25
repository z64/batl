#include "global.h"
#include "player.h"

Ship* getShip();

int main() {

	initscr();

	Player player("adam");
//	player1.addShip(new Ship(5,4,'r',CRUISER,"myShip"));
//	player1.addShip(new Ship(7,10,'d',CARRIER,"myShip"));

	for(int i = 1; i < 2; i++) {


		mvprintw(0,0,"ship entry: %d",i);
		player.addShip(getShip());

		clear();
		player.draw();

	}

	int a,b;
	while( (a > -1) && (b > -1) ) {

		mvprintw(0,0,"X: 2  Y: 3");
		mvscanw(0,3,"%d",&a);
		mvscanw(0,9,"%d",&b);

		player.isHit(a,b);
		player.draw();

	}


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
