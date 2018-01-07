#include <stdio.h>
#define MAXLENGTH 80+1

void einlesen(int, char[]);
void verarbeiten(char[], char[]);
void ausgeben (char[]);

int main(void){

  char s1[MAXLENGTH];
  char s2[MAXLENGTH];

  einlesen(1,s1);
  einlesen(2,s2);
  verarbeiten(s1,s2);
  ausgeben(s1);

  return 0;
}

void einlesen(int nummer, char string[]){
  printf("Geben Sie eine maximal %d Zeichen lange Zeichenkette Nr. %d ein:\n", (MAXLENGTH)/2, nummer);
  scanf("%39s", &string[0]);
}

void verarbeiten(char string1[], char string2[]){
  int len1 = 0;
  int len2 = 0;

  while(string1[len1] != '\0'){
    len1++;
  }
  while(string2[len2] != '\0'){
    len2++;
  }

  for(int i = 0; i <= len2; i++){
    &s1[len1+1+i] = string2[i];
    if(i == len2)
    &s1[len1+2+i] = '\0';
  }
}

void ausgeben (char string[]){
  printf("%s\n", string);
}
