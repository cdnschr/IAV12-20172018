#include <stdio.h>

#define BREITE 7
#define fuell 'x'
#define leer '-'


int main(void){
  for (int i = 1; i <= BREITE; i++) {
    for (int j = 1; j <= BREITE; j++) {
      if(i == 1){
        printf("%c", fuell );
        }
      else if(i == BREITE){
        printf("%c", fuell );
      }
      else if(j == 1 || (j == BREITE && i > 0)){
        printf("%c", fuell );
      }
      else if(j == BREITE){
        printf("%c", fuell );
      }
      else{
        printf("%c", leer );
      }
    }
    printf("\n");
  }
  return 0;
}
