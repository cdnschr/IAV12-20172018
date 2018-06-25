#include <stdio.h>
#include <string.h>

#define ANZAHL 5

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

void fillstruct(struct daten schueler[]);
void ausgabe_normal(struct daten schueler[]);
void vornamen(struct daten schueler[]);
void postlz(struct daten schueler[]);

int main(void){

  struct daten schueler[ANZAHL];

  fillstruct(schueler);
  vornamen(schueler);
  postlz(schueler);
//  ausgabe_normal(schueler);

  return 0;
}

void fillstruct(struct daten schueler[]){

  strcpy(schueler[0].vorname,"Hans");
  strcpy(schueler[0].nachname,"Maulwurf");
  strcpy(schueler[0].adresse.strasse,"Fantasieweg");
  schueler[0].adresse.hausnummer = 1;
  schueler[0].adresse.plz = 12345;
  strcpy(schueler[0].adresse.wohnort,"Bitterfeld");

  strcpy(schueler[1].vorname,"Herbert");
  strcpy(schueler[1].nachname,"Maulwurf");
  strcpy(schueler[1].adresse.strasse,"Fantasieweg");
  schueler[1].adresse.hausnummer = 2;
  schueler[1].adresse.plz = 23456;
  strcpy(schueler[1].adresse.wohnort,"Erfurt");

  strcpy(schueler[2].vorname,"Hedwig");
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

  return ;
}; // Datensatz in die Struktur füllen

void ausgabe_normal(struct daten schueler[]){
  int i;
  for(i = 0; i < ANZAHL; i++){
  printf("%s\n", schueler[i].vorname );
  printf("%s\n", schueler[i].nachname );
  printf("%s\n", schueler[i].adresse.strasse );
  printf("%d\n", schueler[i].adresse.hausnummer );
  printf("%d\n", schueler[i].adresse.plz );
  printf("%s\n", schueler[i].adresse.wohnort );
  printf("\n");
  }
  return ;
};

void vornamen(struct daten schueler[]){   //Vornamen sortieren
  struct daten vergleich[ANZAHL];         //Zum Vergleich gebraucht, da die dann durch sortiert und die Originaldaten nicht verändert werden sollen.
  int i;
  int tauschen = 0;
  char temp[30];

  for(i = 0; i < ANZAHL; i++){
  strcpy(vergleich[i].vorname, schueler[i].vorname);
  }

  do {
    for(i = 0; i < ANZAHL; i++){
      if(strcmp(vergleich[i].vorname, vergleich[i+1].vorname) > 0){
          strcpy(temp, vergleich[i].vorname);
          strcpy(vergleich[i].vorname, vergleich[i+1].vorname);
          strcpy(vergleich[i+1].vorname, temp);
          tauschen = 1;
      }
      else
      tauschen = 0;
    }
  } while(tauschen == 1);

  for(i = 0; i < ANZAHL; i++){
  printf("%s\n", vergleich[i].vorname);
  }
};

void postlz(struct daten schueler[]){   //
  struct daten vergleich[ANZAHL];
  int i;
  int tauschen = 0;
  int temp;

  for(i = 0; i < ANZAHL; i++){
  vergleich[i].adresse.plz = schueler[i].adresse.plz;
  }

  do {
    for(i = 0; i < ANZAHL; i++){
      if(vergleich[i].adresse.plz > vergleich[i+1].adresse.plz){
          temp = vergleich[i].adresse.plz;
          vergleich[i].adresse.plz = vergleich[i+1].adresse.plz;
          vergleich[i+1].adresse.plz = temp;
          tauschen = 1;
      }
      else
      tauschen = 0;
    }
  } while(tauschen == 1);

  for(i = 0; i < ANZAHL; i++){
  printf("%s\n", vergleich[i].adresse.plz);
  }
};
