#include <stdio.h>

int wert(void){
  int x = 3, y = 2;
  return (x*y);
}

int main(void){

  int x = 5;
  int y;

  y = wert();

  if(y > 0){

    int y = 5;

      printf("x: %d\n", x);
      printf("y: %d\n", y);
  }
  else{
    int x = 7;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
  }
  printf("x: %d\n", x);
  printf("y: %d\n", y);

  return 0;
}
