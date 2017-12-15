#include <stdio.h>

int main(void){
  int zahl1 = 5;
  int zahl2 = 4;
  int ergebnis[200];
  int counter = 0;
  int temp;
  int null = 0;

  if(zahl1 > 0){

    temp = zahl1 % zahl2;
    ergebnis[counter] = zahl1 / zahl2;
    counter++;

    while (counter < 200) {
      temp *= 10;
      ergebnis[counter] = temp / zahl2;
      temp %= zahl2;
      counter++;
    }
    temp = 0;
    while (null == 0) {
     if(ergebnis[counter-temp-1] == 0){
       temp++;
      }
     else if(ergebnis[counter-temp-1] > 0){
        null = 1;
      }
    }
    for (int i = 0 ; i < counter - temp; i++) {
      printf("%i", ergebnis[i] );
      if (i == 0) {
        printf(",");
      }
    }
  }

  printf("\n");
  return 0;
}
