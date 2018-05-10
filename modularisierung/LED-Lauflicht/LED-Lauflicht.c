#include <curses.h> // Benötigt um Inhalt der Konsole zu verändern
#include <stdlib.h> // noetig fuer atexit()
#include <unistd.h> // für sleep genutzt
#include "lauflicht.h" // Lib mit den Hex-Codes

#define SPALTEN 5
#define ZEILEN 7
#define BUCHSTABEN 8
#define TIMER 10

void Buchstabe( int zeichen, int x);
void quit();

int main(void){
//  char alphabet[7][5][256]; //check es nicht ich machs anders
const int zeichen[] = { 340, 525, 505, 0,  410, 340, 350};//, 0, 510, 525, 550, 500, 505, 0, 525 };
int arraylen = sizeof(zeichen) / sizeof(int);
int koordinate = 0;
int counter = 0;
int timer = TIMER*BUCHSTABEN;

initscr();      // Wichtige Funktionen um das Konsolenfenster zu initialisieren und sauber zu beenden
atexit(quit);
curs_set(0);

while(timer > 0){
  koordinate = 0;
    for (int i = 0; i < BUCHSTABEN; i++) {
      if(counter == arraylen)
      counter = 0;
      Buchstabe(zeichen[i+counter], koordinate);

      koordinate+=6;
      usleep(90000);
//      timer--;
    }
  counter++;
}
mvaddstr(12, 2, "Taste druecken");
refresh();
getch();
return 0;
}

void Buchstabe( int zeichen, int koordinate) { //Funktion, welche durch übergabe der Adresse im gegebenen Hexcode und einer Koordinate in der Konsole ein Zeichen ausgibt
  int i;
  int bits[ZEILEN];

  for (int x = 0; x<SPALTEN; x++){
    i = ZEILEN;
    for (int y = 0; y <=ZEILEN; y++) {
      bits[i] = (font5x7int[zeichen+x] >> i) & 1;
      mvprintw(y,x+koordinate, " " );
      if(bits[i] == 1)
      mvprintw(y,x+koordinate, "#" );
      i--;
      refresh();
      }
    }
}

void quit() // Funktion um das Konsolenfenster sauber zu schließen
{
  endwin();
}
