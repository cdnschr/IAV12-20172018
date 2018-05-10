#include <curses.h> // Benötigt um Inhalt der Konsole zu verändern
#include <stdlib.h> // noetig fuer atexit()
#include <unistd.h> // für sleep genutzt
#include "lauflicht.h" // Lib mit den Hex-Codes

#define SPALTEN 5
#define ZEILEN 7
#define BUCHSTABEN 8
#define TIMER 10

void Buchstabe(int *bits, int zeichen, int x);
void quit();

int main(void){
//  char alphabet[7][5][256]; //check es nicht ich machs anders
int zeichen[] = { 340, 525, 505, 0,  410, 340, 350, 0, 510, 525, 550, 500, 505, 0 };
int bits[7];
int koordinate = 0;
int shuffler;
int timer = TIMER*BUCHSTABEN;
int arraylen;
initscr();
atexit(quit);
curs_set(0);

while(timer > 0){
  shuffler = 0;
  koordinate = 0;
  arraylen = sizeof(zeichen) / sizeof(int);
//    while (shuffler < arraylen ) {
    for (int i = shuffler; i < BUCHSTABEN; i++) {
      Buchstabe(bits, zeichen[i], koordinate);
      koordinate+=6;
      usleep(100000);
      timer--;
      refresh();
    }
  shuffler++;
 //}

}

mvaddstr(12, 2, "Taste druecken");
refresh();
getch();
return 0;
}

void Buchstabe(int *bits, int zeichen, int koordinate) { //Funktion, welche durch übergabe von Anzahl an Bits, eines Zeichens in Form der Adresse im gegebenen Hexcode und einer Koordinate in der Konsole ein Zeichen ausgibt
  int i;
  for (int x = 0; x<SPALTEN; x++){
    i = ZEILEN;
    for (int y = 0; y <=ZEILEN; y++) {
      bits[i] = (font5x7int[zeichen+x] >> i) & 1;
      if(bits[i] == 1)
      mvprintw(y,x+koordinate, "#" );
      i--;
      }
    }
}

void quit() // Funktion um das Konsolenfenster sauber zu schließen
{
  endwin();
}
