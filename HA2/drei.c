#include <stdio.h>

int main (void)
{
  char variable = 's';

  if (variable == 'a')
  printf("Die Variable hat den Inhalt %c\n", variable);
  else if (variable == 'b')
  printf("Die Variable hat nicht den Inhalt a sondern %c\n", variable );
  else{
    printf("Der Inhalt der Variablen ist weder a noch b\n");
  }
  return 0;
}
