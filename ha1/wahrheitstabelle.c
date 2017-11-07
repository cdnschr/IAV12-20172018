#include <stdio.h>

int a, b, c, d, ergebnis;

int main(void){

// Aufgabe 1
// Formel 1
// a && b || c && d

printf("Wahrheitstabelle zur Formel a && b || c && d\n\n" );

a=b=c=d=0;
printf("-------------------------------------------------\n" );
printf("| Ergebnis\t| a\t| b\t| c\t| d\t|\n" );
printf("-------------------------------------------------\n" );
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=1;
b=c=d=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=1;
c=d=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=1;
d=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=0;
d=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=0;
d=c=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=d=1;
a=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=0;
d=a=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=d=1;
c=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=d=1;
b=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=d=c=0;
b=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=d=0;
c=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=1;
d=b=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=0;
d=b=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=1;
d=a=0;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=d=1;
ergebnis=a && b || c && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );


printf("\n\n\n");

// Formel 2
// a && (b||c) && d;

printf("Wahrheitstabelle zur Formel a && (b||c) && d\n\n" );

a=b=c=d=0;
printf("-------------------------------------------------\n" );
printf("| Ergebnis\t| a\t| b\t| c\t| d\t|\n" );
printf("-------------------------------------------------\n" );
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=1;
b=c=d=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=1;
c=d=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=1;
d=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=0;
d=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=0;
d=c=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=d=1;
a=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=0;
d=a=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=d=1;
c=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=d=1;
b=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=d=c=0;
b=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=d=0;
c=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=1;
d=b=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=c=0;
d=b=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

b=c=1;
d=a=0;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

a=b=c=d=1;
ergebnis=a && (b||c) && d;
printf("| %i\t\t| %i\t| %i\t| %i\t| %i\t|\n", ergebnis, a, b, c, d );
printf("-------------------------------------------------\n" );

printf("\n\n\n");
/*  Aufgabe 2
    Morgansche Logikgesetze

    nicht (a und b) = (nicht a) oder (nicht b)
    nicht (a oder b) = (nicht a) und (nicht b)
*/
printf("Beweis der De Morganschen Logikgesetze\n\n");

a=b=1;
c=d=0;

c=!(a&&b);
d=(!a)||(!b);
printf("Ergebnis von nicht (a und b) ist %i\n",c );
printf("Ergebnis von  (nicht a) oder (nicht b) ist %i\n",d );
if(c==d)
{
printf("Die Gleichung nicht (a und b) = (nicht a) oder (nicht b) geht auf!\n");
}

a=b=1;
c=d=0;

c=!(a||b);
d=(!a)&&(!b);
printf("Ergebnis von nicht (a oder b) ist %i\n",c );
printf("Ergebnis von  (nicht a) und (nicht b) ist %i\n",d );
if(c==d)
{
printf("Die Gleichung nicht (a oder b) = (nicht a) und (nicht b) geht auf!\n");
}



return 0;
}
