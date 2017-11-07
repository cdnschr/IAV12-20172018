#include <stdio.h>

int erwachsen = 0;
int ticket = 1;
float eingeworfen = 10.40;
float kosten = 0;
float einzel_kind = 1.4;
float mehr_kind = 5.6;
float monat_kind = 31;
float einzel_erw = 2.6;
float mehr_erw = 11.8;
float monat_erw = 58;

int main(void) {

  printf("Sind sie Erwachsener oder Kind? Bitte Auswahl treffen\n");
    if(erwachsen == 0)
    {
      printf("Sie haben Kind gewählt\n");
    }
    else if(erwachsen == 1)
    {
      printf("Sie haben Erwachsener gewählt\n");
    }
    else{
    printf("Falsche Eingabe\n");
    }
  printf("Wählen sie den gewünschten Fahrschein:\n" );
    if (ticket == 1) {
      printf("Einzelfahrschein gewählt\n" );
    } else if (ticket == 2) {
      printf("Mehrfahrtenschein gewählt\n" );
    } else if (ticket == 3) {
      printf("Monatskarte gewählt\n" );
    } else {
      printf("Falsche Eingabe\n" );
    }
    if (erwachsen == 0 && ticket == 1) {
      printf("Einzelfahrschein Kind: %4.2f €\n", einzel_kind );
      kosten = einzel_kind;
    } else if (erwachsen == 0 && ticket == 2) {
      printf("Mehrfahrtenschein Kind: %4.2f €\n", mehr_kind );
      kosten = mehr_kind;
    } else if (erwachsen == 0 && ticket == 3) {
      printf("Monatskarte Kind: %4.2f €\n", monat_kind);
      kosten = monat_kind;
    } else if (erwachsen == 1 && ticket == 1) {
      printf("Einzelfahrschein Erwachsener: %4.2f €\n", einzel_erw );
      kosten = einzel_erw;
    } else if (erwachsen == 1 && ticket == 2) {
      printf("Mehrfahrtenschein Erwachsener: %4.2f €\n", mehr_erw );
      kosten = mehr_erw;
    } else if (erwachsen == 1 && ticket == 3) {
      printf("Monatskarte Erwachsener: %4.2f €\n", monat_erw );
      kosten = monat_erw;
    } else {
      printf("Fehler\n" );
    }
    printf("Bitte Geldbetrag einwerfen\n");
    eingeworfen -= kosten;
    if (eingeworfen > 0) {
      printf("Ihr Ticket wird gedruckt, bitte entnehmen sie das Restgeld von %5.2f €.\n", eingeworfen);
    } else if (eingeworfen < 0) {
      printf("Bitte werfen sie die Differenz von %5.2f € ein\n", eingeworfen );
    } else if(eingeworfen == 0){
      printf("Ihr Ticket wird gedruckt. Der Betrag war passend.\n");
    }
    else
    {printf("Fehler\n" );}

  return 0;
}
