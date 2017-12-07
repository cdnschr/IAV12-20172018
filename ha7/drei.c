#include <stdio.h>

int main(void){
  int zahl1 = 171;
  int zahl2 = 17;
  int ergebnis[20];
  int counter = 0;
  int temp;

  while(zahl1 > 0){
    temp = zahl1 % zahl2;
    printf("Rest: %i\t", temp);
    ergebnis[counter] = zahl1 / zahl2;
    zahl1/=z
    printf("%i\n", ergebnis[counter] );
    counter++;
  }

  return 0;
}
