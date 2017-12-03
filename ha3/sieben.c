#include <stdio.h>

int main (void){
  int zahl1 = 0, zahl2 = 1, zahl3;
  for (int i = 0; i < 7; i++) {
    zahl3 = zahl1 + zahl2;
    printf("%i\n", zahl3 );
    zahl1 = zahl2 + zahl3;
    printf("%i\n", zahl1 );
    zahl2 = zahl3 + zahl1;
    printf("%i\n", zahl2);
    zahl3 = zahl1 + zahl2;
    printf("%i\n", zahl3 );
    zahl1 = zahl2 + zahl3;
    printf("%i\n", zahl1 );
  }

  return 0;
}
