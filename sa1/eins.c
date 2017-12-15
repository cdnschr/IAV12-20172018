// Aufgabe a)
#include <stdio.h>

int main (void){

  int counter = 0;
  int truth = 0;
  char text1[] = "DAs isT Ein TExt";
  char text2[] = "NocH So eIn Text";
  char text3[200] = "";
  char text4[] = "Hartamtauschen";
  char text5[] = "12345678901234567890";
  char text6[] = "Orangutan";
  char text7[] = "gut";
  int len = 0;
  int len2 = 0;
  char temp;

  while(text1[len] != '\0'){
    len++;
  }

  for (int i = 0; i < len; i++) {
    text3[i]=text1[i];
    counter++;
  }
  len = 0;

  while(text2[len] != '\0'){
    len++;
  }

  for (int i = 0; i < len; i++) {
    text3[counter]=text2[i];
    counter++;
  }
  printf("%s\n",text3 );

// Aufgabe b)
  len = 0;

  while(text4[len] != '\0'){
    len++;
  }
  temp = text4[0];
  text4[len-2] = text4[len-1];
  text4[len-1] = temp;
  text4[0] = text4[1];

  printf("%s\n",text4 );

// Aufgabe c)
  len = 0;

  while(text5[len] != '\0'){
    len++;
  }
  for (int i = 0; i < len - 3; i = i + 6) {
    temp = text5[i];
    text5[i] = text5[i+3];
    text5[i+3] = temp;
  }
  printf("%s\n", text5 );

// Aufgabe d)
  len = 0;
  while( text3[len] != '\0' ) {
    len++;
  }

  for (int i = 0; i < len; i++) {
    if(text3[i] >= '\x41' && text3[i] <= '\x5A'){
      text3[i] += '\x20';
    }
  }
  printf("%s\n", text3 );
// Aufgabe e)
  counter = 0;
  len = 0;
  while( text7[len] != '\0' ){
    len++;
  }
  while ( text6[len2] != '\0') {
    len2++;
  }

  for (int i = 0; i < len2-len+1; i++) {
    if ( text6[i] == text7[0]){
      counter = i;
      for (int j = 0; j < len; j++) {
       if (text6[i+j] == text7[j]) {
         truth = 1;
       }
       else if (text6[i+j] != text7[j]) {
         truth = 0;
       }
      }
    }
  }
  if (truth == 1) {
    printf("Das gesuchte Wort %s kommt im Array %s an der %i. Stelle vor.\n", text7, text6, counter+1 );
  }
  else
  printf("Das Wort %s kommt nicht im Array %s vor.\n", text7, text6 );

  return 0;
}
