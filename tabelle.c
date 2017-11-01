#include<stdio.h>

int main (void)
{
	int a=3;
	int b=1;
	printf("\n Startwert der Variable a: %i", a);
	printf("\n Startwert der Variable b: %i", b);

	printf("\n\n a = b = 2");
	a=b=2;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Inhalt der Variable b: %i", a);
	printf("\n Erklärung: b wird mit 2 gleich gesetzt und a dann mit b.");

	printf("\n\n a = 5 * 3 + 2");
	a=5*3+2;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Erklärung: Punkt vor Strich.");

	printf("\n\n a = 5 * (3 + 2)");
	a=5*(3+2);
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Erklärung: Erst wird die Klammer abgearbeitet und dann das Ergebnis multipliziert.");

	printf("\n\n a *= 5 + 5");
	a=3;
	b=1;
	a*=5+5;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Erklärung: Erst wird die Summe gebildet, dann mit A multipliziert und gleich gesetzt. (a hatte den Wert 25 vor der Rechnung)");

	printf("\n\n a %%= 2 * 3");
	a=3;
	a%=2*3;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Erklärung: Erst wird 2 mit 3 multipliziert, dann 250 durch 6 geteilt (modulo) der Rest 4 wird dann in a gespeichert.");

	printf("\n\n a = !(--b == 0)");
	a=!(--b==0);
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Inhalt der Variable b: %i", b);
	printf("\n Erklärung: Erst wird die Klammer abgearbeitet -> --b ist NICHT Null, somit ist das Ergebnis aber Null. Dies wird im Anschluss negiert.");

	printf("\n\n a = 0 && 0 +2");
	a= 0 && 0 +2;
	a=3;
	b=1;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Erklärung: Warnungsmeldung wegen dem logischen && in Verbindung mit Konstanten. Null mit zwei logisch verknüpft ergibt 0.");

	printf("\n\n a = b++ * 2");
	a=b++*2;
	printf("\n Inhalt der Variable a: %i", a);
	printf("\n Inhalt der Variable b: %i", b);
	printf("\n Erklärung: b wird mit 2 multipliziert, 2 wird in a geschrieben und dann wird erst b inkrementiert.");

	printf("\n\n a = ++b * 2");

	printf("\n Inhalt der Variable a: %i", a);

	printf("\n");
	return 0;
}
