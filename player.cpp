#include "player.h"

Player::Player(string n) { name = n; }

void Player::addShip(Ship* ship) {

	ships.push_back(ship);
	hp++;

}

void Player::draw() {

	for(int i = 0; i < ships.size(); i++) {

		ships[i]->draw();
	}
}

bool Player::isHit(int x, int y) {

	for(int i = 0; i < ships.size(); i++) {
		
		if(ships[i]->isHit(x,y)) {

			if(ships[i]->getHP() == 0) { hp--; }
			return true;
		}

	}

	mvaddch(y,x,MISSCHAR);
	return false;
}