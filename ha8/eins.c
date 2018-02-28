// Mathematische Funktionen
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
double start = 0.0;
double end = 180.0;
int part = 5;
double step;

step = (end - start) / part;

for (int i = 0; i < part; i++){
  printf("%.2f\n", (start+=step) );
  }
  

  return 0;
}
