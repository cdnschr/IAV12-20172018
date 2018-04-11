// Funktion print_char

#include <stdio.h>
#include <stdarg.h>

int print_char(const char *zeichen, ...);

int main(void){
  const char zeichen[] = {"Buchstaben sind %c und %c.\nHier finden sie alles von %c bis %c\n"};
  printf("%d\n", print_char(zeichen, 'A', 'B', 'C', 'D'));

  return 0;
}

int print_char(const char *zeichen, ...){
  int zaehler = 0;
  int anzahl = 0;
  int endlos = 1;
  char stelle;
  va_list zeiger;

  va_start(zeiger, zeichen);
  while(endlos == 1){
  stelle = zeichen[zaehler];
    switch (stelle) {
      default:
            fputs(&stelle,stdout);
            zaehler++;
            break;
      case '\0':
            va_end(zeiger);
            endlos = 0;
            return anzahl;
      case '%':
            if((zeichen[zaehler+1]) == 'c'){
            stelle = va_arg(zeiger, char);
            fputs(&stelle,stdout);
            zaehler+=2;
            anzahl++;
            }
            else{
            fputs(&stelle,stdout);
            zaehler++;
            }
            break;
      case '\n':
            puts("");
            zaehler++;
            break;
    }
  }
}
