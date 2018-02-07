#include <stdio.h>

#define RECHTECKE 4
#define ZEICHEN 6

int main(void){
  int a = 1;
  int b = 0;
  int temp;
  int counter = 0;

for (int l = 0; l < RECHTECKE; l++) {
 for (int k = 0; k < ZEICHEN; k++) {
  for (int i = 0; i < RECHTECKE; i++) {
    for (int j = 0; j < ZEICHEN; j++) {

      if (a == 1) {
        printf("-");
      }
      else if(b == 1) {
        printf("0");
      }
      counter++;
    }

   }
   printf("\n");
   temp = a;
   a = b;
   b = temp;
   }
   temp = a;
   a = b;
   b = temp;
 }
  return 0;
}
