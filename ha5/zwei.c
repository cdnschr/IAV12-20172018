#include <stdio.h>

#define BREITE 21
#define plus '+'
#define null '0'

int main(void){
  if((BREITE % 2) != 0){
  //  printf("%i\n", BREITE/2);
    for (int i = 1; i <= BREITE; i++) {
      for (int j = 1; j <= BREITE; j++) {
        if ((i == BREITE/2+1) && i > 1 && j > 1 && i < BREITE && j < BREITE) {
          printf("%c", null);
        }
        else if ((j == BREITE/2+1) && j > 1 && i > 1 && i < BREITE && j < BREITE){
          printf("%c", null);
        }
        else if(i+j == BREITE/2 +2){
          printf("%c", null);
        }
        else if(i-j == BREITE/2){
          printf("%c", null);
        }
        else if(j-i == BREITE/2){
          printf("%c", null);
        }
        else if(i+j == BREITE + BREITE/2+1){
          printf("%c", null);
        }
        else{
          printf("%c", plus);
        }
      }
      printf("\n");
    }
  }
  else{
    printf("Falsche Breite gewählt\n");
  }
  return 0;
}
