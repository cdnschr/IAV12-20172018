#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 49
#define MIN 1
#define MENGE 6

void lottozahlen(int[]);

int main(void){
  int zahlen[MENGE];
  srand(time(NULL));
  lottozahlen(zahlen);
  return 0;
}

void lottozahlen(int zahlen[]){
  for(int i = 0; i < MENGE; i++){
    zahlen[i] = (rand() + MIN) % (MAX + 1);
  }


    for (int i = 0; i < MENGE; i++) {
      for (int j = 0; j < MENGE; j++) {
        if (zahlen[i] == zahlen[j]) {
          zahlen[j] = (rand() + MIN) % (MAX + 1);
        }
      }
    }


  for(int j = 0; j < MENGE; j++)
    printf("%d ", zahlen[j]);
}
