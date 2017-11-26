#include <stdio.h>
#include <stdlib.h>

int main (void){
  int zahl;

  printf("Bitte Zahl eingeben\n");
  scanf("%i", &zahl);

  if((zahl % 2) == 0){
    printf("Die Zahl %i ist gerade.\n", zahl);
  }
  else{
    printf("Die Zahl %i ist ungerade. \n", zahl );
  }

  if( ((zahl % 3) == 0) && ((zahl % 6) != 0) ){
    printf("Außerdem ist die Zahl durch 3 aber nicht durch 6 teilbar.\n");
  }

  if( ((zahl % zahl) == 0) && ((zahl % 1) == 0) && ((zahl % 2) != 0) && ((zahl % 3) != 0) && ((zahl % 5) != 0) && ((zahl % 7) != 0) ){
    printf("Die Zahl ist auch eine Primzahl!\n" );
  }
  else if (zahl == 2){
    printf("Die Zahl ist auch eine Primzahl!\n" );
  }
  else if (zahl == 3){
    printf("Die Zahl ist auch eine Primzahl!\n" );
  }
  else if (zahl == 5){
    printf("Die Zahl ist auch eine Primzahl!\n" );
  }
  else if (zahl == 7){
    printf("Die Zahl ist auch eine Primzahl!\n" );
  }
  else{
    printf("Die Zahl ist wohl keine Primzahl!\n" );
  }

  return 0;
}
