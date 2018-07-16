#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

FILE *fp;
double werte[100];
int i;

for (i = 0; i < 99; i++){
  werte[i] = ((double)rand() / RAND_MAX)*(360.0-0.1)+0.1;   // Fließkomma Zahlen von 0.1 - 360
  printf("%lf\n", werte[i] );
}

srand(time(NULL));
fp = fopen("aufgabe1.txt", "w");

if(fp == NULL) {
	printf("Datei konnte nicht geoeffnet werden.\n");
}
else{

  for (i = 0; i < 99; i++){
    fprintf(fp, "%lf\n", werte[i]);
  }
  printf("Datei wurde erstellt.\n");
  fclose(fp);
}
  return 0;
}
