#include "minmax.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
  double a = 2.12;
  double b = 5.87;

  printf("Minimum von %lf und %lf ist %lf.\n", a, b, min(a,b));
  printf("Maximum von %lf und %lf ist %lf.\n", a, b, max(a,b));
  return 0;
}
