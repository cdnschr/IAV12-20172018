#include <stdio.h>

#define HOEHE 5

void bewege(int i, char start, char auf, char mit);

int main (void){
  bewege(10, 'A', 'B', 'C');
  printf("\n");
  return 0;
}

void bewege(int n, char start, char auf, char mit){
 int Staebe [3][HOEHE];
 if(n==1){

 }
  else{
    bewege(n-1, start, mit, auf);
    printf("(%c -> %c) ", start, auf);
    bewege(n-1, mit, auf, start);
  }
}
