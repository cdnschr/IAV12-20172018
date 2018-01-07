#include <stdio.h>

#define MAXLEN 32

int zahl1[] = {1,0,1,1,0,0,0,0,0,0,0,0};
int zahl2[] = {1,0,0,0,1,1,0,1,0,1,1,0};
int len, len2, klein;

int main(void){
  len = sizeof(zahl1) /sizeof(int);
  len2 = sizeof(zahl2) / sizeof(int);
  if (len && len2 < MAXLEN) {
    if (len > len2) {
      klein = len2;
      for (int i = len-1; i >= len-len2-1; i--) {
        zahl1[i]+=zahl2[klein-1];
        if (zahl1[i] > 1) {
          zahl1[i-1] += 1;
          zahl1[i] = 0;
        }
        klein--;
      }
      for (int i = 0; i < len; i++) {
        printf("%i", zahl1[i] );
      }
      printf("\n");
    }
    else if (len < len2) {
      klein = len;
      for (int i = len2-1; i >= len2-len-1; i--) {
        zahl2[i]+=zahl1[klein-1];
        if (zahl2[i] > 1) {
          zahl2[i-1] += 1;
          zahl2[i] = 0;
        }
        klein--;
      }
      for (int i = 0; i < len2; i++) {
        printf("%i", zahl2[i] );
      }
      printf("\n");
    }
    else if (len == len2) {
      klein = len;
      for (int i = len2-1; i >= 0; i--) {
        zahl2[i]+=zahl1[i];
        if (zahl2[i] > 1) {
          if (i == 0) {
            printf("1");
          }
          else{
          zahl2[i-1] += 1;
          }
          zahl2[i] = 0;
        }
        klein--;
      }
      for (int i = 0; i < len2; i++) {
        printf("%i", zahl2[i] );
      }
      printf("\n");
    }
  }

  else
  printf("Mindestens ein Array ist zu lang.\n");


  return 0;
}
