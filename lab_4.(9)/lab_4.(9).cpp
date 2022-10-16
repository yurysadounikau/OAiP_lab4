#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 25

int main()
{
	srand(time(NULL));


	int a[SIZE];
	for (int i(0); i < SIZE; i++)
	{
		a[i] = SIZE - rand() % (SIZE * 2);
	}
	printf("Massive: \n");
	for (int i(0); i < SIZE; i++)
	{
		printf("%d ", *(a + i));
	}
	printf("\n\n");


	int first_number_above_zero = 0, index_first_number_above_zero = 0;
	for (int i(0); i < SIZE; i++)
	{
		if (a[i] > 0)
		{
			first_number_above_zero = a[i];
			index_first_number_above_zero = i;
			break;
		}
	}


	int first_number_below_zero = 0, index_first_number_below_zero = 0;
	for (int i(0); i < SIZE; i++)
	{
		if (a[i] < 0)
		{
			first_number_below_zero = a[i];
			index_first_number_below_zero = i;
			break;
		}
	}


	printf("First number below zero: %d, it's index: %d\n", first_number_below_zero, index_first_number_below_zero);
	printf("First number above zero: %d, it's index: %d\n\n", first_number_above_zero, index_first_number_above_zero);
	
	
	a[index_first_number_below_zero] = first_number_above_zero * first_number_below_zero;
	a[index_first_number_above_zero] = first_number_below_zero + first_number_above_zero;

	printf("Massive: \n");
	for (int i(0); i < SIZE; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");



	return 0;
}