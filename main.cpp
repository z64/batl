#include "global.h"
#include "game.h"

int main() {

	initscr();

	new Game();

	refresh();
	getch();

	endwin();

}
