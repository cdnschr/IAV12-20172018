#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DATEILAENGE 50

int main(void){

FILE *fp;
double werte[100];
double fliess;
int i, tmp;

for (i = 0; i < 99; i++){
  werte[i] = ((double)rand() / RAND_MAX)*(9.99-19.98)+4.99;
  printf("%.2lf\n", werte[i] );
}

srand(time(NULL));
fp = fopen("aufgabe3.txt", "w");  // Datei wird erstellt

if(fp == NULL) {
	printf("Datei konnte nicht geoeffnet werden.\n");
  exit(1);
}
else{
  tmp = 0;
  for (i = 0; i < DATEILAENGE; i++){
    fprintf(fp, "%.2lf", werte[i]);
    if(tmp == 0){
      fprintf(fp, "\t%.2lf", werte[i]);
      tmp = 1;
    }
    if(tmp == 1){
      tmp = 0;
    }
    fprintf(fp, "\n");
  }
  printf("Datei wurde erstellt.\n");
  fclose(fp);
}

fp = fopen("aufgabe3.txt", "r"); //Datei wird ausgelesen

if(fp == NULL) {
	printf("Datei konnte nicht geoeffnet werden.\n");
  exit(2);
}
else{
  for (i = 0; i < DATEILAENGE*2; i++){
    fscanf(fp, "%lf\n", &fliess);
    printf("Ausgelesener Wert %d: %.2lf\n", i+1, fliess);
  }
  printf("Datei wurde ausgelesen.\n");
  fclose(fp);
}
  return 0;
}
