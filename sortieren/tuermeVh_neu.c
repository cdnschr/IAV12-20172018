/* main.c */

#include <stdio.h>

void bewege(int n, char start, char auf, char mit);
int summeIterativ(int N);
int summeRekursiv(int N);
int potenzIterativ(int a, int b, int N);
int potenzRekursiv(int a, int b, int N);

int main(void)
{
	printf("Aufgabe 1 :\n");
	printf("Summe iterativ: %d\n",summeIterativ(25));
	printf("Summe rekursiv: %d\n",summeRekursiv(25));

	printf("Aufgabe 2 :\n");
	printf("Potenz iterativ: %d\n",potenzIterativ(3,5,5));
	printf("Potenz rekursiv: %d\n",potenzRekursiv(3,5,5));

	printf("Aufgabe 3 :\n");
	bewege(3,'A','C','B');
	printf("\n");

	return 0;
}

void bewege(int n, char start, char auf, char mit)
{
	if(n==1)
	{
		printf("(%c->%c) ",start,auf);
	}
	else
	{
		bewege(n-1, start, mit, auf);
		printf("(%c->%c) ",start,auf);
		bewege(n-1,mit,auf,start);
	}
}

int summeIterativ(int N)
{
	int i;
	int count = 0;

	for(i=1;i<=N;i++)
	{
		count += i;
	}

	return count;
}

int summeRekursiv(int N)   
{
	int count = N;

	if(N==1)
	{
		return count;
	}
	else
	{
		count += summeRekursiv(N-1);  // summe(n) = n + summe(n-1)

		return count;
	}
}

int potenzIterativ(int a, int b, int N)
{
	int i;

	int erg = 1;

	for(i=1;i<=N;i++)
	{
		erg *= (a+b);
	}

	return erg;
}

int potenzRekursiv(int a, int b, int N)
{			
	if(N==0)
	{
		return 1;
	}
	else
	{
		return (a+b) * potenzRekursiv(a,b,N-1); // (a+b)^n = (a+b) * (a+b)^(n-1)
	}
}