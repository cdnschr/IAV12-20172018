#include <stdio.h>
#include <string.h>

struct daten {
  char vorname[30];
  char nachname[30];
  struct adr {
    char strasse[100];
    int hausnummer;
    int plz;
    char wohnort[50];
  }adresse;
}schueler;

struct fillstruct(struct daten schueler);

int main(void){
  struct daten schueler[5];

  fillstruct(schueler);

  return 0;
}

struct fillstruct(struct daten schuler){

  strcpy(schueler[0].vorname,"Hans");
  strcpy(schueler[0].nachname,"Maulwurf");
  strcpy(schueler[0].adresse.strasse,"Fantasieweg");
  schueler[0].adresse.hausnummer = 1;
  schueler[0].adresse.plz = 12345;
  strcpy(schueler[0].adresse.wohnort,"Bitterfeld");

  strcpy(schueler[1].vorname,"Klaus");
  strcpy(schueler[1].nachname,"Maulwurf");
  strcpy(schueler[1].adresse.strasse,"Fantasieweg");
  schueler[1].adresse.hausnummer = 2;
  schueler[1].adresse.plz = 23456;
  strcpy(schueler[1].adresse.wohnort,"Erfurt");

  strcpy(schueler[2].vorname,"Dieter");
  strcpy(schueler[2].nachname,"Sacknase");
  strcpy(schueler[2].adresse.strasse,"Gallenstein");
  schueler[2].adresse.hausnummer = 6;
  schueler[2].adresse.plz = 34567;
  strcpy(schueler[2].adresse.wohnort,"Jena");

  strcpy(schueler[3].vorname,"Ronnie");
  strcpy(schueler[3].nachname,"Reinschiss");
  strcpy(schueler[3].adresse.strasse,"Kackspur");
  schueler[3].adresse.hausnummer = 8;
  schueler[3].adresse.plz = 45678;
  strcpy(schueler[3].adresse.wohnort,"Chemnitz");

  strcpy(schueler[4].vorname,"Maik");
  strcpy(schueler[4].nachname,"Mega");
  strcpy(schueler[4].adresse.strasse,"Dunstkreis");
  schueler[4].adresse.hausnummer = 9;
  schueler[4].adresse.plz = 56789;
  strcpy(schueler[4].adresse.wohnort,"Bierschiss");

  return 0;
};


/*
  printf("%s\n", schueler[0].vorname );
  printf("%s\n", schueler[0].nachname );
  printf("%s\n", schueler[0].adresse.strasse );
  printf("%d\n", schueler[0].adresse.hausnummer );
  printf("%d\n", schueler[0].adresse.plz );
  printf("%s\n", schueler[0].adresse.wohnort );
*/
