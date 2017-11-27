#include <stdio.h>

int main(void){
  for (int i = 0; i <= 100; i++) {

    for (int j = 0; j <= 100; j++) {
      printf("%d, %d\n", i, j);
    }
  }
  return 0;
}
