#include "game.h"

Game::Game() {

	//1. get players
	for(int i = 1; i <= PLAYERS; i++) {
		
		clear();
		string n;
		mvprintw(0,0,"Player %d name: ",i);
		move(0,16);
		getstr(&n[0]);

		players.push_back(new Player(n));

	}

	clear();
	//2. get ships
	for(int i = 0; i < players.size(); i++) {

		for(int a = 5; a >=2; a--) {

			clear();
			players[i]->draw();
			refresh();
			mvprintw(0,0,"Player %d, enter ship data for ship %d ",i,a);
			players[i]->addShip(getShip(a));

		}

		clear();
		players[i]->draw();
		refresh();
		mvprintw(0,0,"Player %d, enter ship data for last ship",i);
		players[i]->addShip(getShip(2));

		clear();
		mvprintw(0,0,"Ships entry complete.");
		players[i]->draw();
		refresh();

		getch();

	}
}

bool Game::Play() {

	//1. select player
	//2. get move
	//3. check win

}


Ship* Game::getShip(int l) {

	mvprintw(1,0,"X: ");
	mvprintw(2,0,"Y: ");
	mvprintw(3,0,"Direction: ");

	int x,y; char d; //string n;

	mvscanw(1,11,"%d",&x); //x
	mvscanw(2,11,"%d",&y); //y
	mvscanw(3,11,"%c",&d); //direction

	return new Ship(x,y,d,l,"newShip");

}
