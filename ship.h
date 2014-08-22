#ifndef SHIP_H
#define SHIP_H 

#include "global.h"


struct shipPart {

	int x,y;
	char d;

};

class Ship {

private:

	vector<shipPart> parts;
	string name;

public:

	Ship(int,int,int,string);

	bool isHit(int,int);

};


#endif
