#include <stdio.h>

int main(void){

  int zahl1[] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8};
  int zahl2[] = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8};
  //int zahl2[] = {8,7,6,5,4,3,2,1,0,1,2,3,4,5,6,7,8,9};
  int anzahl = sizeof(zahl1)/ sizeof(int);

  for (int i = anzahl-1; i >= 0; i--) {
    if(zahl1[i] + zahl2[i] < 10){
     zahl1[i] += zahl2[i];
    }

    else if(zahl1[i] + zahl2[i] >= 10){
    zahl1[i-1]+=1;
    zahl1[i] = (zahl1[i] + zahl2[i]) %10;
    }

  }

  for (int j = 0; j < anzahl; j++) {
    printf("%i", zahl1[j] );
  }
  printf("\n");
  return 0;
}
