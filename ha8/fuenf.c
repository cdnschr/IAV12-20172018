//Implementiere Funktion calc_sin()

#include <stdio.h>
#include <math.h>

#define LAENGE 10

void calc_sin(double eins[], double zwei[], int len1, int len2);

int main(void){
 double eins[LAENGE]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
 double zwei[LAENGE]={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0};
 int len1, len2;
 len1 = len2 = LAENGE;
 calc_sin(eins,zwei,len1,len2);
 return 0;
}

void calc_sin(double eins[], double zwei[], int len1, int len2){
 for (int i = 0; i < len1; i++) {
   eins[i] = sin(zwei[i]);
   printf("Wertetabelle 1: %2.4lf\t2: %2.4lf\n---------------------------------\n", eins[i], zwei[i] );
 }

}
