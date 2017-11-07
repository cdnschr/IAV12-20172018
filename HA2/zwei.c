#include <stdio.h>

int main (void)
{
  int kaffee=3;

  if(kaffee==0)
  printf("Ihre Auswahl: Kaffee schwarz\n");
  else if(kaffee==1)
  printf("Ihre Auswahl: Kaffee schwarz mit Zucker\n");
  else if(kaffee==2)
  printf("Ihre Auswahl: Kaffee mit Milch\n");
  else if(kaffee==3)
  printf("Ihre Auswahl: Kaffee mit Milch und Zucker\n");
  else{
  printf("Ungültige Auswahl!\n");
  }
  return 0;
}
