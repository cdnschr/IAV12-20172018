#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define zaehler 40

int main (void){

// AUFGABE 1
  int zufallszahl[zaehler];
  srand(time(NULL));
  for (int i = 0; i < zaehler; i++) {
    zufallszahl[i] = rand();
  }

  for (int j = 0; j < zaehler; j++) {
    printf("%d ", zufallszahl[j] );
  }
printf("\n\n");
//AUFGABE 2

double gleitkomma[zaehler];
srand(time(NULL));
for (int i = 0; i < zaehler; i++) {
  gleitkomma[i] = ((double)rand()/(double)(RAND_MAX));
}

for (int j = 0; j < zaehler; j++) {
  printf("%2.10f ", gleitkomma[j] );
}

  return 0;
}
