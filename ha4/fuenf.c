#include <stdio.h>

int main(void){
  int groesse = 9, temp = 0;
  for (int i = 0; i <= groesse; i+=2) {
    printf("%*s",groesse - temp,"");
    for (int j = 0; j <= i; j++) {
      printf("%s","*");
    }
    printf("\n");
    temp++;
  //  printf("%i\n",temp );
  }
  for (int k = 2; k <= groesse; k+=2) {
    printf("%*s",(groesse + 2 - temp),"");
    for (int l = 0; l < (groesse - k); l++) {
      printf("%s","*");
    }
    printf("\n");
    temp--;
  }
  return 0;
}
