#include <ncurses/ncurses.h>


int main() {

	initscr();

	printw("test");
	refresh();
	getch();


	endwin();
	return 0;

}	
