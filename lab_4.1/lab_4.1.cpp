#include <stdio.h>			À¿¡¿ 4.1


int main()
{
	int* a;

	
	int size = 0;
	printf("Enter size. \n");
	scanf_s("%d", &size);
	printf("\n");


	a = new int[size];


	printf("Input numbers. \n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("\n");


	int min = 0, n_min = 0, max = 0, n_max = 0, p = 1, sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			n_min = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			n_max = i;
		}
		sum += a[i];
		p *= a[i];
	}

	int swap = a[n_min];
	a[n_min] = a[n_max];
	a[n_max] = swap;


	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("\n");


	printf("The sum of massive = %d", sum);
	printf("\n");
	printf("\n");
	printf("Massive op = %d", p);


	delete[] a;
	return 0;
}