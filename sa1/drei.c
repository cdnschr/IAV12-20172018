#include <stdio.h>

#define BREITE 7

int main(void){
  for (int i = 0; i <= BREITE*3; i++) {
    for (int j = 0; j <= BREITE*3; j++) {
      if (i == 0) {
        printf("O");
      }
      else if (j == 0){
        printf("O");
      }
      else if (j == BREITE*3){
        printf("O");
      }
      else if (i == BREITE*3){
        printf("O");
      }
      else if (i % 3 == 0){
        printf("O");
      }
      else if (j % 3 == 0){
        printf("O");
      }
      else
        printf("-");
    }
    printf("\n");
  }

  return 0;
}
