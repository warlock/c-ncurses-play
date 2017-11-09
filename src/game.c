#include <ncurses.h>

int main() {
	char caracter;
	initscr();
	keypad(stdscr, 1);
	cbreak();
	if (has_colors()) start_color();
	init_pair(1, COLOR_RED, COLOR_BLUE);
	init_pair(2, COLOR_YELLOW, COLOR_GREEN);
	attron(COLOR_PAIR(1));
	printw("HOLA");
	attron(COLOR_PAIR(2));
	printw("MUNDO");
	do {
		caracter = getch();
	}
	while (caracter != ' ');
	endwin();
	return 0;
}