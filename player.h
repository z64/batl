#ifndef PLAYER_H
#define PLAYER_H

#include "global.h"
#include "ship.h"

class Player {

private:

	vector<Ship*> ships;
	string name;

	int hp;

public:

	Player(string);

	void addShip(Ship*);
	bool isHit(int,int);
	void draw();
	void drawHit();
	int getHP();

};


#endif
