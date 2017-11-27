#include <stdio.h>

int main(void){

  for (int i = 0; i <= 10; i++) {

    printf("Dual:\t\tOktal:\n");
    printf("%d%d%d%d%d%d%d%d", i % 256, i % 128, i % 64, i % 32, i % 16, i % 8, i % 4, i % 2);
    printf("\t %o\n", i);
  }
  return 0;
}
