#include "ship.h"

shipPart::shipPart(int a, int b) {

	x = a; y = b;
	d = PARTCHAR;

}

Ship::Ship(int a, int b, char d, int l, string n) {

	name = n;
	hp = l;

	int xslope = 0 ,yslope =0;

	switch(d) {

		case 'u':
		yslope = -1;
		break;

		case 'd':
		yslope = 1;
		break;

		case 'l':
		xslope = -1;
		break;
		
		case 'r':
		xslope = 1;
		break;

		deafult:
		xslope = 1;
		break;
	};

	for(int i = 0; i < l; i++) {

		parts.push_back(shipPart(a,b));
		a = a + xslope;
		b = b + yslope;

	}

}

void Ship::draw() {

	for(int i = 0; i < parts.size(); i++) {

		mvaddch(parts[i].y, parts[i].x, parts[i].d);

	}

	mvprintw(0,0,"%s,%d",name.c_str(),hp);

}

bool Ship::isHit(int a, int b) {

	for(int i = 0; i < parts.size(); i++) {

		if( (parts[i].x == a) && (parts[i].y == b) ) {
				
				parts[i].d = HITCHAR;
				hp--;
				return true;

		}

	}
	
	return false;
}

int Ship::getHP() {

	return hp;

}
