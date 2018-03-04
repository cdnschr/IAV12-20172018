//Funktion die bestimmtes Zeichen sucht und Stelle im Array bestimmen soll.

#include <stdio.h>

int string_index(char *string, char zeichen);

int main(void){

  char string[] = "DasiseinTex";
  char zeichen = 't';
  int ergebnis = string_index(string, zeichen);
  printf("%d\n", ergebnis);
  return 0;
}

int string_index(char *string, char zeichen){
  int index = -1;
  int len = 0;
  while (string[len] != '\0' ){
    len++;
  }
  for (int i = 0; i < len; i++) {
    if (string[i] == zeichen){
    index = i+1;
    break;
    }
  }
  return index;
}
