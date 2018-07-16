#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

double werte[100];
int i;

srand(time(NULL));

for (i = 0; i < 99; i++){
  werte[i] = (double)rand() / (double)360;
}

for (i = 0; i < 99; i++){
  printf("%lf /n", werte[i]);
}
  return 0;
}
{}
