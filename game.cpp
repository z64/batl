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

	//2. get ships

}

bool Game::Play() {

	//1. select player
	//2. get move
	//3. check win

}
