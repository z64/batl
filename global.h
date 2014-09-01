#ifndef GLOBAL_H
#define GLOBAL_H

#include <ncurses/ncurses.h>
#include <vector>
#include <string>
#include <unistd.h>

using std::vector;
using std::string;

#define PLAYERS 2

//graphics
#define PARTCHAR '#'
#define HITCHAR 'X'
#define MISSCHAR '?'

//ship definitions
#define CARRIER 5
#define DESTROYER 4
#define CRUISER 3
#define GUNBOAT 2

//game states
#define START	0
#define QUIT	1
#define MENU	2
#define ENTRY	3
#define PLAY	4

#endif
