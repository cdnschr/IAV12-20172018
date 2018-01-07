#include <stdio.h>

#define WERT 9

int main(void){
  int temp = 0;
  for (int i = 0; i < WERT; i++) {
        printf("*");
      if (temp >= 0 && temp < WERT){
        for (int k = i; k > 0; k--) {
          printf(" ");
        }
        printf("*");
        }
        for (int j = 0; j < WERT-i; j++) {
          printf(" ");
        }

    printf("*");
    printf("\n");
    temp++;
  }
  return 0;
}
