#include <stdio.h>

int a=3;

int main(void)
{
  a+=2;
  a-=1;
  a*=8;
  a/=4;
  a%=1;
  a&=63;
  a|=7;
  a ^ 15;
  a<<=3;
  a>>=2;
  printf("%i\n",a );

  a=1;

  a=1==2;
}
