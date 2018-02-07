#include <stdio.h>

#define start 1
#define counter 10

void zahlen(int mehrdim[][counter]);

int main(void){
  int mehrdim[counter][counter];
  zahlen(mehrdim);

  return 0;
}

void zahlen(int mehrdim[][counter]){
  int zaehler = start;
  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < counter; j++) {
      mehrdim[i][j] = zaehler;
      zaehler++;
    }
  }
  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < counter; j++) {
      printf("%d\t", mehrdim[i][j] );
    }
    printf("\n");
  }
}
