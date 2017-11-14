#include <stdio.h>

int main(void)
{
  int a, b, c;
  printf("A\tB\tC\tA && !B || C\t!A || B && !C\t!A || !B && !C\n");
  a = b = c = 0;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  a = 1;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  b = 1;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  c = 1;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  a = b = 0;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  b = 1;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  a = 1;
  b = 0;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  a = c = 0;
  b = 1;
  printf("%i\t%i\t%i\t\t%i\t\t%i\t\t%i\n", a, b, c, (a && !b || c), (!a || b && !c), (!a || !b && !c) );
  return 0;
}
