// Mathematische Funktionen
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void AnfangsAusgabe(void);
double Eingabe(char *text);
void Ausgabe(double start,double end, int part);

int main(void){
double start, end;
int part;

AnfangsAusgabe();
start = Eingabe("Bitte geben Sie den Startwert ein:");
end = Eingabe("Bitte geben sie den Endwert ein:");
part = Eingabe("Bitte geben sie an aus wievielen Teilen die Wertetabelle bestehen soll:");
Ausgabe(start, end, part);

  return 0;
}

void AnfangsAusgabe(void){
  printf("**********************************************\n");
  printf("* Programm zur Ausgabe von Sinus und Kosinus *\n");
  printf("**********************************************\n");
}
double Eingabe(char *text){
  double eingabe;

  printf("%s\n", text);
  scanf("%lf", &eingabe);

  return eingabe;
}
void Ausgabe(double start,double end, int part){
  double step;
  double temp = start;

  step = (end - start) / part;

  printf("Sinuswerte\n");
  for (int i = 0; i < part; i++){
    printf("%.2f°\t", (temp+=step) );
    }
  printf("\n");

  temp = start;

  for (int i = 0; i < part; i++){
    printf("%.2f\t", sin(temp+=step) * M_PI / 180  );
    }
  printf("\n");

  temp = start;

  printf("Kosinuswerte\n");
  for (int i = 0; i < part; i++){
    printf("%.2f°\t", (temp+=step) );
    }
  printf("\n");

  temp = start;

  for (int i = 0; i < part; i++){
    printf("%.2f\t", cos(temp+=step) * M_PI );
    }
  printf("\n");
}
