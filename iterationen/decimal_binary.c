/*
    Mein erster Dezimal in Binär Umrechner - Version 0.1
    All hail to the king baby!
    Gibt noch eine Null am Anfang zuviel aus...
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

  int zahl = 0;
  int *array;
  int temp;
  int i = 0;

  printf("Bitte die Dezimalzahl eingeben.\n");

  scanf("%d", &zahl);

  temp = zahl;

  while (temp > 0) {
    temp /= 2;
    i++;
    printf("Durchgang: %d Ergebnis: %d \n", i, temp );
  }

  array = (int *) malloc(i * sizeof(int));

  while (zahl > 0){
    array[temp] = zahl % 2;
    zahl /= 2;
    temp++;
  }

  printf("Umgerechneter Binärwert: ");
  while (temp >= 0){
    printf("%d", array[temp]);
    temp--;
  }
  printf("\n");

  return 0;
}
