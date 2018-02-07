#include <stdio.h>

// Deklaration der Funktion (Prototyp)
void berechneMwst(void);
void AnfangsDialog(void);
double Eingabe(char *text);
double BerechneBrutto(double MwstSatz, double Netto);
void AusgabeErgebnis(char *text, double ergebnis);

int main(void){

  //Aufruf
  berechneMwst();

  return 0;
}

//Definition der Funktion
void berechneMwst(void){
  double MwstSatz, Netto, Brutto;

  AnfangsDialog();
  MwstSatz = Eingabe("Geben Sie den Mehrwertsteuersatz in Prozent ein: ");
  Netto = Eingabe("Geben Sie den Nettobetrag ein: ");
  Brutto = BerechneBrutto(MwstSatz, Netto);
  AusgabeErgebnis("Der Betrag inkl. Mehrwertsteuer betraegt Euro ", Brutto);
}

void AnfangsDialog(void){

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

double BerechneBrutto(double MwstSatz, double Netto){

  double erg;

  erg = Netto + MwstSatz/100.0*Netto;

  return erg;
}

void AusgabeErgebnis(char *text, double ergebnis){
  printf("%s %.2lf\n", text, ergebnis);
}
