#include <stdio.h>

int main(void){

  FILE *fp;
  char text[100];

  printf("Bitte Text eingeben (maximal 100 Zeichen!)\n");
  scanf("%s", &text);
  printf("Der eingegebene Text lautet:\n");
  printf("%s\n", text);

  fp = fopen("aufgabe2.txt","w");

  if(fp == NULL){
    printf("Datei konnte nicht erstellt werden\n");
  }
  else{
    fprintf(fp, "%s\n", text);
    printf("Datei wurde erstellt\n");
    fclose(fp);
  }

  return 0;
}
