// Funktion mit dem Prototyp int check(char* str1, char* str2);

#include <stdio.h>

int check(char* str1, char* str2);
int laenge(char *str);

int main (void){
  char str1[] = "Dahabichjetztbock";
  char str2[] = "Da";

  printf("%d\n", check(str1, str2));

  return 0;
}

int check(char* str1, char* str2){
 int index = -1;
 int len1 = laenge(str1);
 int len2 = laenge(str2);

 for(int i = 0; i < len1; i++){
   if(str1[i] == str2[0]){
     for(int j = 0; j < len2; j++){
     if (str1[i+j] != str2[j]){
       break;
      }
     if(str1[i+j] == str2[len2-1]){
       index = i+1;
      }
     }
   }
 }
 return index;
}

int laenge(char *str){
  int len = 0;
  while ( str[len] != '\0'){
    len++;
  }
  return len;
}
