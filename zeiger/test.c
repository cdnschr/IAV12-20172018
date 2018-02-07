#include <stdio.h>

int main(void){

  int zahl = 10;
  int zahlen[] = {1,4,5,7,12};
  int len = 0;

  int* i_zeiger;
  i_zeiger = &zahl;
  printf("Die Adresse der Zahl lautet: %p\n", i_zeiger);
  printf("Der Inhalt des Zeigers ist: %d\n", *i_zeiger);

  len = sizeof(zahlen) / sizeof(int);
  printf("%d\n", len );


  printf("Inhalt der Anfangsadresse des Arrays: %d\n", zahlen[0] );
  printf("Inhalt der Anfangsadresse des Arrays über Zeiger: %d \n", *zahlen);
  printf("Inhalt der Anfangsadresse+1 des Arrays : %d \n", *(zahlen+1));
  printf("Inhalt+1 der Anfangsadresse des Arrays : %d \n", *zahlen+1);

  return 0;
}
