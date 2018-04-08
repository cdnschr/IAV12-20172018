/* Quicksort */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 100000

void quicksort(int *arr, int start, int ende);
int teile(int *arr, int start, int ende);
void init(int *arr, int len);
void ausgabe(int* arr, int len);
void insertSort(int *arr, int len);
void kopieren(int* ziel, int *quelle, int len);

int main(void)
{
	int i;

	int zahlen1[DIM];
	int zahlen2[DIM];
	clock_t start1, ende1, start2, ende2;
	double zeit1, zeit2;

	for(i=100; i<=DIM; i*=10)
	{
		init(zahlen1,i);
		kopieren(zahlen2, zahlen1, i);

		start1 = clock();
		quicksort(zahlen1,0,i-1);
		ende1 = clock();

		start2 = clock();
		insertSort(zahlen2,i);
		ende2 = clock();

		zeit1 = (double)(ende1-start1) / (double) CLOCKS_PER_SEC;
		zeit2 = (double)(ende2-start2) / (double) CLOCKS_PER_SEC;

		printf("N=%d: Quicksort: %.5lf Insertsort: %lf\n",i,zeit1,zeit2);
	}

	return 0;
}

void quicksort(int *arr, int start, int ende)
{
	int index;
	if(ende-start == 0)
	{
		return;
	}
	else
	{
		index = teile(arr,start,ende);
		quicksort(arr,start,index);
		quicksort(arr,index+1,ende);
	}
}

int teile(int *arr, int start, int ende)
{
	int index = (start + ende)/2;
	int pivot = arr[index];
	int links,rechts;
	int tmp;

	links = start;
	rechts = ende;

	while(1)
	{
		while(arr[rechts]>pivot){rechts--;}
		while(arr[links]<pivot){links++;}

		if(links<rechts)
		{
			tmp = arr[links];
			arr[links] = arr[rechts];
			arr[rechts] = tmp;
		}
		else
		{
			return rechts;
		}
	}
}

void init(int *arr, int len)
{
	int i;

	srand(time(NULL));

	for(i=0;i<len;i++)
	{
		arr[i] = rand();
	}
}

void ausgabe(int* arr, int len)
{
	int i;

	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
}

void insertSort(int* arr, int anz)
{
	int i, j, tmp;
	for (i = 1; i < anz; i++)
	{
		j = i;
		while (0 < j && arr[j] < arr[j - 1])
		{
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}

}

void kopieren(int* ziel, int *quelle, int len)
{
	int i;

	for(i=0;i<len;i++)
	{
		ziel[i] = quelle[i];
	}
}
