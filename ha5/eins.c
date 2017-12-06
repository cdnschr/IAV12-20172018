#include <stdio.h>

#define BREITE 10         //Konstante für die Breite
#define fuell 'x'         //Symbol zum Füllen
#define leer '-'          //Symbol um leere Stellen darzustellen


int main(void){
  for (int i = 1; i <= BREITE; i++) {           //Zwei Schleifen um das Quadrat zu erstellen
    for (int j = 1; j <= BREITE; j++) {         //Die Zählervariablen i und j sind meine Koordinaten
      if(i == 1){                               //Hier wird der obere Rand wird mit x gefüllt
        printf("%c", fuell );
        }
      else if(i == BREITE){                     //Der Untere Rand wird mit x gefüllt
        printf("%c", fuell );
        }
      else if(j == 1 || (j == BREITE && i > 0)){ // Der linke und rechte Rand wird mit x gefüllt
        printf("%c", fuell );                    // Nur als Beispiel... Man kann sicher alles mit einem if else lösen,
      }                                       // aber ich mag es lieber übersichtlich.
      else if(i == j){                        // Wenn die Koordinaten sich gleichen, wird ein x gesetzt. -> Diagonale 1
        printf("%c", fuell );
        }
      else if(i+j == BREITE+1){               // Wenn die Summe beider Koordinaten 1 höher als die Breite ist wird ein x gesetzt.
        printf("%c", fuell );                 // -> Diagonale 2
        }
      else{                                   // Alle Punkte auf die oben genanntes nicht zu trifft sind leer.
        printf("%c", leer );
        }
      }
    printf("\n");
  }
  return 0;
}
