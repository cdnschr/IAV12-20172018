#include <stdio.h>

int main(void){

  char text[] = "Das ist irgendein Text";
  int len = 0;
  char tmp;

  while(text[len] != '\0'){
    len++;
  }
  printf("%s\n", text );
  printf("Das Array ist %i lang.\n", len );

  for (int i = 0; i < len/2; i++) {
    tmp = text[i];
    text[i] = text[len-1-i];
    text[len-1-i] = tmp;
  }

  printf("%s\n", text );

  return 0;
}
