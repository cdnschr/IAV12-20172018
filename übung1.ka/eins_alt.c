// switch-case variante ohne strings, dafür mit Konstanten und verschachtelten Abfragen!
#include <stdio.h>

#define einzelK 1.40
#define streifenK 4.50
#define monatsK 32
#define einzelE 2.1
#define streifenE 8
#define monatsE 55.8


int main(void)
{
  int erwachsen = 1;
  int karte = 1;
  int einwurf = 2.40;
  int fehler = 0;

  switch (erwachsen) {

    case 0:
          if (karte == 1) {
            printf("Einzelkarte Kind gewählt. Preis %4.2f\n", einzelK);
          }
          else if (karte == 2) {
            printf("Streifenkarte Kind gewählt. Preis %4.2f\n", streifenK);
          }
          else if (karte == 3){
            printf("Monatskarte Kind gewählt. Preis %4.2f\n", monatsK);
          }
          else{
            fehler = 1;
            printf("Fehlercode: %i\n", fehler);
          }
    break;

    case 1:
          if (karte == 1) {
            printf("Einzelkarte Erwachsener gewählt. Preis %4.2f\n", einzelE);
          }
          else if (karte == 2) {
            printf("Streifenkarte Erwachsener gewählt. Preis %4.2f\n", streifenE);
          }
          else if (karte == 3){
            printf("Monatskarte Erwachsener gewählt. Preis %4.2f\n", monatsE);
          }
          else{
            fehler = 2;
            printf("Fehlercode: %i\n", fehler);
          }
    break;
  }

  if(fehler == 0){
        printf("Bitte bezahlen sie nun ihre ausgewählte Karte. \n");
        switch (karte) {
          case 1:
            if(erwachsen == 0){
                if(einwurf - einzelK == 0){
                  printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
                }
                else if(einwurf - einzelK < 0){
                  printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - einzelK );
                }
                else if(einwurf - einzelK > 0){
                  printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - einzelK );
                }
                else{
                  fehler = 3;
                  printf("Fehlercode: %i\n", fehler );
                }
            }
            else if(erwachsen == 1){
                if(einwurf - einzelE == 0){
                  printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
                }
                else if(einwurf - einzelE < 0){
                  printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - einzelE );
                }
                else if(einwurf - einzelE > 0){
                  printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - einzelE );
                }
                else{
                  fehler = 4;
                  printf("Fehlercode: %i\n", fehler );
                }
            }
        break;

        case 2:
          if(erwachsen == 0){
            if(einwurf - streifenK == 0){
              printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
            }
            else if(einwurf - streifenK < 0){
              printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - streifenK );
            }
            else if(einwurf - streifenK > 0){
              printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - streifenK );
            }
            else{
              fehler = 5;
              printf("Fehlercode: %i\n", fehler );
            }
            }
          else if(erwachsen == 1){
            if(einwurf - streifenE == 0){
              printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
            }
            else if(einwurf - streifenE < 0){
              printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - streifenE );
            }
            else if(einwurf - streifenE > 0){
              printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - streifenE );
            }
            else{
              fehler = 6;
              printf("Fehlercode: %i\n", fehler );
            }
        }

        break;

        case 3:

          if(erwachsen == 0){
            if(einwurf - monatsK == 0){
            printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
            }
            else if(einwurf - monatsK < 0){
            printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - monatsK );
            }
            else if(einwurf - monatsK > 0){
            printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - monatsK );
            }
            else{
            fehler = 7;
            printf("Fehlercode: %i\n", fehler );
            }
            }
          else if(erwachsen == 1){
            if(einwurf - monatsE == 0){
            printf("Herzlichen Glückwunsch, sie haben passend eingeworfen, bitte entnehmen sie die Karte!\n");
            }
            else if(einwurf - monatsE < 0){
            printf("Entschuldigung, aber da fehlen noch %4.2f€. Bitte werfen sie den Differenzbetrag ein.\n", einwurf - monatsE );
            }
            else if(einwurf - monatsE > 0){
            printf("Bitte entnehmen sie ihre Karte und den Restbetrag von %4.2f€\n", einwurf - monatsE );
            }
            else{
            fehler = 8;
            printf("Fehlercode: %i\n", fehler );
            }
          }

       break;
      }
  }

  return 0;
}
