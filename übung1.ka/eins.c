#include <stdio.h>
#include <string.h>

int main(void){
  int erwachsen = 0;
  int auswahl = 0;
  char ausgabe[30];
  float einwurf = 1;
  float betrag = 0;
  float einzelK = 1.40;
  float einzelE = 2.60;
  float streifenK = 5.60;
  float streifenE = 11.80;
  float monatK = 31;
  float monatE = 58;
  printf("\nFahrkartenautomat\n\n");
  printf("Sind sie Kind(1) oder Erwachsener(2)? Bitte Auswahl treffen:\n\n");
  erwachsen = 1; // An dieser Stelle würde normalerweise Interaktion stattfinden
  printf("Auswahl:%i\n\n", erwachsen);
  printf("Möchten sie eine Einzelfahrt(1), Streifenkarte(2) oder Monatskarte(3)?\n");
  printf("Bitte Auswahl treffen:\n\n");
  auswahl = 1; //Auch hier wird die Auswahl per Variable festgelegt
  printf("Auswahl:%i\n\n", auswahl );
  if (auswahl == 1 && erwachsen == 1) {
    printf("Eine Einzelfahrt für Kinder kostet: %2.2f €\n",einzelK );
    betrag = einzelK;
    strcpy(ausgabe, "Einzelfahrt Kind");
  }
  else if (auswahl == 1 && erwachsen == 2) {
    printf("Eine Einzelfahrt für Erwachsene kostet: %2.2f €\n",einzelE );
    betrag = einzelE;
    strcpy(ausgabe, "Einzelfahrt Erwachsener");
  }
  else if (auswahl == 2 && erwachsen == 2) {
    printf("Eine Streifenkarte für Erwachsene kostet: %2.2f €\n",streifenE );
    betrag = streifenE;
    strcpy(ausgabe, "Streifenkarte Erwachsener");
  }
  else if (auswahl == 2 && erwachsen == 1) {
    printf("Eine Streifenkarte für Kinder kostet: %2.2f €\n",streifenK );
    betrag = streifenK;
    strcpy(ausgabe, "Streifenkarte Kind");
  }
  else if (auswahl == 3 && erwachsen == 1) {
    printf("Eine Monatskarte für Kinder kostet: %2.2f €\n",monatK );
    betrag = monatK;
    strcpy(ausgabe, "Monatskarte Kind");
  }
  else if (auswahl == 3 && erwachsen == 2) {
    printf("Eine Monatskarte für Erwachsene kostet: %2.2f €\n",monatE );
    betrag = monatE;
    strcpy(ausgabe, "Monatskarte Erwachsener");
  }
  else{
    printf("Fehler in der Auswahl!\n");
  }
  printf("\nBitte werfen sie den benötigten Betrag ein\n");
  printf("Eingeworfener Betrag: %4.2f\n\n", einwurf);
  if (einwurf == betrag) {
  printf("Herzlichen Glückwunsch, sie haben eine %s gewählt und den passenden Betrag eingeworfen!\n", ausgabe );
  }
  if (einwurf < betrag) {
    printf("Ihre %s kostet %4.2f € mehr als sie eingeworfen haben\n", ausgabe, betrag - einwurf );
  }
  if (einwurf > betrag){
    printf("Vielen Dank für den Kauf einer %s! Das Restgeld von %4.2f € behalten wir, weil sie ein Idiot sind!\n", ausgabe, einwurf - betrag );
  }

  return 0;
}
