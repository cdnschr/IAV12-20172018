// Funktion print_char

#include <stdio.h>
#include <stdarg.h>

int print_char(const char *zeichen, ...);

int main(void){
  char zeichen[] = "Buchstaben sind %c und %c.\nHier finden sie alles von %c bis %c\n";
  print_char(zeichen);
  return 0;
}

int print_char(const char *zeichen, ...){
  int zaehler = 0;
  int anzahl = 0;
  int endlos = 1;
  va_list zeiger;

  va_start(zeiger, zeichen);
  while(endlos == 1){
    char stelle = zeichen[zaehler];
    switch (stelle) {
      default:
            fputs(zeichen[zaehler],stdout);
            zaehler++;
            break;
      case '\0':
            va_end(zeiger);
            return anzahl;
      case '%c':
            fputs(va_arg(zeiger, char),stdout);
            zaehler++;
            anzahl++;
            break;
      case '\n':
            puts("");
            zaehler++;
            break;
    }
  }
}
