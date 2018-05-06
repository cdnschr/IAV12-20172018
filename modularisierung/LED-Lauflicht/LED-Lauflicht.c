#include <curses.h> // Benötigt um Inhalt der Konsole zu verändern
#include <stdlib.h> //noetig fuer atexit()
#include "lauflicht.h"

#define SPALTEN 5
#define ZEILEN 7
#define BUCHSTABEN 8

void Buchstabe(int *bits, int zeichen, int x);
void quit();

int main(void){
//  char alphabet[7][5][256]; //check es nicht ich machs anders... :P
int zeichen = 330;
int bits[8];
int koordinate = 0;
initscr();
atexit(quit);
curs_set(0);


for (int i = 0; i < BUCHSTABEN; i++) {
  Buchstabe(bits, zeichen, koordinate);
  koordinate+=5;
}

mvaddstr(11, 2, "Taste druecken");
refresh();
getch();
return 0;
}

void Buchstabe(int *bits, int zeichen, int koordinate) {
  int i;
  for (int x = koordinate; x<SPALTEN; x++){
    i = 0;
    for (int y = 0; y <=ZEILEN; y++) {
      bits[i] = (font5x7int[zeichen+x] >> i) & 1;
      if(bits[i] == 1)
      mvprintw(y,x, "#" );
      i++;
      }
    }
}

void quit()
{
  endwin();
}
