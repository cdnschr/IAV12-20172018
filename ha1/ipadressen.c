#include <stdio.h>

unsigned char ipoktett1=172, ipoktett2=16, ipoktett3=0, ipoktett4=1 ;
unsigned char snoktett1=255, snoktett2=255, snoktett3=224, snoktett4=0;
unsigned char a=0, b=0, c=0, d=0;
int main(void)
{
  printf("IP Adresse:\t%i.%i.%i.%i\n",ipoktett1, ipoktett2, ipoktett3, ipoktett4);
  printf("Subnetzmaske:\t%i.%i.%i.%i\n", snoktett1, snoktett2, snoktett3, snoktett4);

  a=ipoktett1 & snoktett1;            //logische UND-Verknüpfung ergibt die Netzmaske
  b=ipoktett2 & snoktett2;
  c=ipoktett3 & snoktett3;
  d=ipoktett4 & snoktett4;
  printf("Die zugehörige Netzadresse lautet: %i.%i.%i.%i\n",a,b,c,d);

  a=ipoktett1 | ~snoktett1;         //logische ODER-Verknüpfung mit dem Komplement ergibt die Broadcast
  b=ipoktett2 | ~snoktett2;
  c=ipoktett3 | ~snoktett3;
  d=ipoktett4 | ~snoktett4;
  printf("Die zugehörige Broadcast lautet: %i.%i.%i.%i\n",a,b,c,d);
  return 0;
}
