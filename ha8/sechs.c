// Funktion print_char

#include <stdio.h>
#include <stdarg.h>

int print_char(int anzahl, ...);

int main(void){
  char zeichen1 = 'a';
  char zeichen2 = 'b';
  char zeichen3 = 'c';

  printf ("%d\n", print_char(zeichen1, zeichen2, zeichen3));
  return 0;
}

int print_char(int anzahl, ...){
  int zahl = 0;
  va_list zeiger;

  va_start(zeiger, anzahl);
  for (int i = 0; i < anzahl; i++) {
    zahl++;
  }
  va_end(zeiger);
  return zahl;
}
