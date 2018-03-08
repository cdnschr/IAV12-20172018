#include "mwst.h"

void ermittle_Mwst(void);
void Benutzerdialog(void);
double Eingabe(char *text);
double BerechneMwst(double MwstSatz, double Netto);
void AusgabeErgebnis(char *text, double ergebnis);

void ermittle_Mwst(void){
  double MwstSatz, Netto, Brutto;

  Benutzerdialog();
  MwstSatz = Eingabe("Geben Sie den Mehrwertsteuersatz in Prozent ein: ");
  Netto = Eingabe("Geben Sie den Nettobetrag ein: ");
  Brutto = BerechneMwst(MwstSatz, Netto);
  AusgabeErgebnis("Der Betrag inkl. Mehrwertsteuer betraegt Euro ", Brutto);
}
void Benutzerdialog(void){

  printf("*********************************************\n");
  printf("* Programm zur Berechnung der Mehrwertsteuer*\n");
  printf("*********************************************\n");
}
double Eingabe(char *text){

  double eingabe;

  printf("%s", text);
  scanf("%lf", &eingabe);

  return eingabe;
}
double BerechneMwst(double MwstSatz, double Netto){

  double erg;

  erg = Netto + MwstSatz/100.0*Netto;

  return erg;
}
void AusgabeErgebnis(char *text, double ergebnis){
  printf("%s %.2lf\n", text, ergebnis);
}
