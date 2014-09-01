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

public:

	Game();
	bool Play();

};


#endif
