#include <stdio.h>

int main(void){
  char Taste = 'X';
  printf("Wollen Sie einen Becher? (Taste B)\n");
  if (Taste == 'B') {
    printf("Gebe Becher aus!?\n");
  }
  else{
    printf("Stellen Sie ihre Tasse in den Automaten\n");
  }

  printf("Wählen Sie ihr Getränk\n");

  Taste = '5';
  switch(Taste){
    case '1':
        printf("Kaffee schwarz\n");
        break;
    case '2':
        printf("Kaffee mit Milch\n");
        break;
    case '3':
        printf("Kaffee mit Zucker\n");
        break;
    case '4':
        printf("Kaffee mit Milch und Zucker\n");
        break;
    default:
        printf("Vollpfosten, falsche Taste gedrückt!\n");

  }
  return 0;
}
