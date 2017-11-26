#include <stdio.h>

int main(void){
  int testarray[10] = {45354, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int array2 [10][2];
  int temp = 100;
  for (int i = 0; i < 10; i++) {
    printf("%d\n", testarray[i] );
  }

  for (int j = 0; j < 2; j++) {
    for (int k = 0; k < 10; k++) {
      array2[j][k] =  temp;
      printf("%i\n", array2[j][k] );
      temp++;
    }
  }

  return 0;
}
