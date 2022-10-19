#include <stdio.h>
#include <math.h>


int main()
{
	int* x, * y, k = 0, n = 0, q = 0;


	printf("Enter massive size (x). \n");
	scanf_s(" %d", &k);
	printf("\n");


	printf("Enter massive size (y). \n");
	scanf_s(" %d", &n);
	printf("\n");


	printf("Enter number (q). \n");
	scanf_s(" %d", &q);
	printf("\n");


	printf("Input numbers in massive (x). \n");
	x = new int[k];
	for (int i = 0; i < k; i++)
	{
		scanf_s(" %d", &x[i]);
	}


	printf("Input numbers in massive (y). \n");
	y = new int[n];
	for (int i = 0; i < k; i++)
	{
		scanf_s(" %d", &y[i]);
	}



	int diff = 0;
	for (int i(0); i < k; i++)
	{
		for (int j(0); j < n; j++)
		{
			int dif = abs(x[i] + y[j] - q);
			if (i == 0 && j == 0 || dif < diff)
			{
				diff = dif;
			}
		}
	}
	printf("Minimal diff is: %d", diff);


	delete[] x, y;
	return 0;
}