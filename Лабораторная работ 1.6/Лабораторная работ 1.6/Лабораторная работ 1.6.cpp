#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int** a;
	int n = 0;
	int maxx = 1000;
	int minn = -1000;
	int sum = 0;
	int y = 0;
	int ch = 0;

	printf("Введите длинну одной стороны квадратного массива\n");
	scanf("%d", &n);


	a = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(n * sizeof(int));
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			a[i][j] = minn + rand() % (maxx - minn + 1);
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i][j] % 3 == 0)
			{
				ch += 1;
			}
		}
	}

	printf("Сумма элементов ниже главной диагонали %d\n", sum);
	printf("Кол-во элементов кратных трём %d", ch);
	for (int i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	scanf("%d", y);
	return 0;


}

