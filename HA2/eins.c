#include <stdio.h>

int main(void)
{
  int zahl = -69;

  if( zahl >= 0 && zahl <= 100 )
  printf("Die Zahl %i befindet sich im Bereich zwischen 0 und 100\n", zahl);
  else if( zahl < 0 )
  printf("Die Zahl %i liegt unterhalb des Bereichs zwischen 0 und 100\n", zahl);
  else if( zahl > 100 )
  printf("Die Zahl %i liegt oberhalb des Bereichs zwischen 0 und 100\n", zahl);
  else
  printf("Fehler!\n");
  return 0;
}
