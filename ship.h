#ifndef SHIP_H
#define SHIP_H 

#include "global.h"


struct shipPart {

	int x,y;
	char d;

	shipPart(int,int);

};

class Ship {

private:

	vector<shipPart> parts;
	string name;

	int hp;

public:

	Ship(int,int,char,int,string);

	void draw();
	void drawHit();
	bool isHit(int,int);
	int getHP();

};


#endif
