#include <curses.h>
#include <unistd.h> // For sleep()
#include <string.h> // For strlen()
#include <stdlib.h> // For malloc()

int main(void)
{

    char *text = "Hello, how are you? ";
    char *scroll;
    int text_length;

    int i, max_x, max_y;

    // Get text length
    text_length = strlen(text);

    // Initialize screen for ncurses
    initscr();
    // Don't show cursor
    curs_set(0);
    // Get terminal dimensions
    // getmaxyx(stdscr, max_y, max_x);
    // Clear the screen
    clear();

    getmaxyx(stdscr, max_y, max_x);
    scroll = malloc(2 * max_x + 1);

    for (i=0; i< 2*max_x; i++) {
            scroll[i] = text[i % text_length];
    }

    scroll[2*max_x - 1]='\0';


    // Scroll text back across the screen
    for (i=0; i < 10000; i++) {

            mvaddnstr(0,0,&scroll[i%max_x], max_x);
            refresh();
            usleep(20000);
    }
    // Wait for a keypress before quitting
    getch();

    endwin();

    return 0;
}
