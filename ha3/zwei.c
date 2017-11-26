#include <stdio.h>

int main(void){
  int temp;

  for (int i = 0; i < 10; i++) {
    temp = i;
    printf("Dual:\t\tOktal:\n");
    do{
      printf("%i\r", temp % 2);
      temp /= 2;
    }while(temp > 0);
    printf("\t\t %o\n", i);
  }

  return 0;
}
