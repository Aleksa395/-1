#include "stdio.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int** a;
	int n = 5;
	int m = 5;
	int maxx = 1000;
	int minn = -1000;
	int sum = 0;

	printf("Введите размер столбца\n");
	scanf_s("%d", &n);
	printf("Введите размер строки\n");
	scanf_s("%d", &m);

	a = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(m * sizeof(int));
	}

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			a[i][j] = minn + rand() % (maxx - minn + 1);
			printf("%d ", a[i][j]);
			sum += a[i][j];

		}

		printf("|  %d\n", sum);

	}

	for (int i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;

}

