#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

FILE *fp;
double werte[100];
int i;

for (i = 0; i < 99; i++){
  werte[i] = ((double)rand() / RAND_MAX)*(9.99-19.98)+4.99;   // Fließkomma Zahlen von
  printf("%.2lf\n", werte[i] );
}

srand(time(NULL));
fp = fopen("aufgabe3.txt", "w");

if(fp == NULL) {
	printf("Datei konnte nicht geoeffnet werden.\n");
}
else{

  for (i = 0; i < 49; i++){
    fprintf(fp, "%.2lf", werte[i]);
    if(i%2 == 0){
      fprintf(fp, "\t%.2lf", werte[i]);
    }
    fprintf(fp, "\n");
  }
  printf("Datei wurde erstellt.\n");
  fclose(fp);
}
  return 0;
}
