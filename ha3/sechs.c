#include <stdio.h>

int main(void){
  int baum = 9;
  for (int i = 0; i < baum; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
