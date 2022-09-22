#include <stdio.h>
#include <math.h>


int main()
{
	int* x, * y, k = 0, n = 0, q = 0;


	printf("Enter massive size (õ). \n");
	scanf(" %d", &k);
	printf("\n");


	printf("Enter massive size (y). \n");
	scanf(" %d", &n);
	printf("\n");


	printf("Enter number (q). \n");
	scanf(" %d", &q);
	printf("\n");


	printf("Input numbers in massive (x). \n");
	x = new int[k];
	for (int i = 0; i < k; i++)
	{
		scanf(" %d", &x[i]);
	}


	printf("Input numbers in massive (y). \n");
	y = new int[n];
	for (int i = 0; i < k; i++)
	{
		scanf(" %d", &x[i]);
	}


	int diff_min = 0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; i++)
		{
			int diff = abs(x[i] + y[j] - q);
			if ((i == 0 && j == 0) || diff < diff_min)
			{
				diff_min = diff;
			}
		}
	}


	printf("The maximum exact value is: %d", diff_min);

	delete[] x, y;
	return 0;
}