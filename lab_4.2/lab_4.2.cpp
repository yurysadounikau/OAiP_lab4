#include<stdio.h>					À¿¡¿ 4.2



int main()
{

	int* a, n = 0;
	printf("Enter massive size. \n");
	scanf_s(" %d", &n);
	printf("\n");

	a = new int[n];

	printf("Input numbers.\n");
	for (int i = 0; i < n; i++)
	{
		scanf_s(" %d", &a[i]);
	}


	int p = 1, min = 10000000000, n_min = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			p *= a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
			n_min = i;
		}
	}

	int sum = 0;
	for (int i = 0; i < n_min; i++)
	{
		sum += a[i];
	}



	printf("The op numbers under 0: %d\n", p);
	printf("\n");
	printf("The sum before min number:  %d\n", sum);




	return 0;
}