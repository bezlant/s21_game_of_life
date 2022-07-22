#include <curses.h>

#define MAX_X 80
#define MIN_X 0
#define MAX_Y 25
#define MIN_Y 0

void populate(int cell[MAX_Y][MAX_X]);
int setState(int cell[MAX_Y][MAX_X]);
void render(int cell[MAX_Y][MAX_X]);
void game_start(void);
void game_settings(void);
void game_end(void);
void copy_matrix(int original[MAX_Y][MAX_X], int copy[MAX_Y][MAX_X]);
int calc_neighbours(int gen[MAX_Y][MAX_X], int y, int x);
int check_if_all_dead(int gen[MAX_Y][MAX_X]);
