#include <curses.h> // Benötigt um Inhalt der Konsole zu verändern
#include <stdlib.h> //noetig fuer atexit()
#include "lauflicht.h"

#define SPALTEN 5
#define ZEILEN 7


void quit()
{
  endwin();
}

int main(void){
//  char alphabet[7][5][256]; //check es nicht ich machs anders... :P
int x,y;
initscr();
atexit(quit);
curs_set(0);
for (x = 1; x<=SPALTEN; x++){
  for (y = 1; y <=ZEILEN; y++) {
    mvprintw(y,x, "#" );
  }
}
mvaddstr(11, 2, "Taste druecken");
refresh();
getch();
return 0;
}
