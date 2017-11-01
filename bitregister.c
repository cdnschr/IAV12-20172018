#include <stdio.h>

unsigned char regi=0;

int main (void){
  printf("%x\n", regi );
  regi |= 1 << 1; // Bit wird gesetzt
  printf("%x\n", regi );
  return 0;
}
