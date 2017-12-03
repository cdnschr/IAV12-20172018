#include <stdio.h>

int main(void){
  for (int i = 9; i > 0; i--) {
    printf("%*s",9-i,"");
    for (int j = 0; j < i; j++) {
      printf("%s","*");
    }
    printf("\n");
  }
  return 0;
}
