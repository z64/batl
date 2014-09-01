#ifndef GAME_H
#define GAME_H

#include "global.h"
#include "player.h"

class Game {

private:

	int state;
	int time;
	bool turn;
	vector<Player*> players;
	void draw(Player*);
	Ship* getShip(int);

public:

	Game();
	bool Play();

};


#endif
