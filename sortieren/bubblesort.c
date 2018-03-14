#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 1000
#define MENGE 100

void bubbles(int[]);

int main(void){
  int zahlen[MENGE];
  srand(time(NULL));
  bubbles(zahlen); 
  return 0;
}

void bubbles(int zahlen[]){
  int swap = 0;
  int temp = 0;

    for (int i = 0; i < MENGE; i++) {
   	zahlen[i] = (rand() + MIN) % (MAX + 1); 
     for (int j = 0; j < MENGE; j++) {
        if(zahlen[i] == zahlen[j]){
          zahlen[i] = (rand() + MIN) % (MAX + 1);
        } 
      }
    }
  do{
   swap = 0;
   for(int i = 0; i < MENGE-1; i++)
   if (zahlen[i] > zahlen[i+1]){
   temp = zahlen[i];
   zahlen[i] = zahlen[i+1];
   zahlen[i+1] = temp;
   swap = 1;
   } 
  }while(swap == 1);
  temp = 1;
  for(int j = 0; j < MENGE; j++){
    printf("%d %d \n", zahlen[j], temp);
    temp++; 
 }
}

