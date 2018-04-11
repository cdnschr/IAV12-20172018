// Implementiere Funktion void tausche(int *a, int *b);

#include <stdio.h>

void tausche(int *a, int *b);

int main(void){
int a = 12345;
int b = 67890;
printf("Inhalt von a: %d\nInhalt von b: %d\n", a, b );
tausche(&a,&b);
printf("*TAUSCHE*\n");
printf("Inhalt von a: %d\nInhalt von b: %d\n", a, b );
return 0;
}

void tausche(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
