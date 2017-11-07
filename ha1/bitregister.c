#include <stdio.h>

unsigned char regi=0;
unsigned char bit=0;

int main (void){
  printf("%x\n", regi );
  regi |= 1 << 0; // Bit wird auf 1 gesetzt
  printf("%x\n", regi );
  regi |= 1 << 1; // Bit wird gesetzt
  printf("%x\n", regi );
  regi |= 1 << 2; // Bit wird gesetzt
  printf("%x\n", regi );
  regi |= 1 << 7; // Bit wird gesetzt
  printf("%x\n", regi );
  regi &= ~(1 << 0); // Bit wird auf 0 gesetzt
  printf("%x\n", regi );
  bit = (regi >> 0) & 1; // Was steht im Bit auf Stelle 0
  printf("%x\n", bit );
  bit = (regi >> 7) & 1; // Was steht im Bit auf Stelle 7
  printf("%x\n", bit );
  return 0;
}
