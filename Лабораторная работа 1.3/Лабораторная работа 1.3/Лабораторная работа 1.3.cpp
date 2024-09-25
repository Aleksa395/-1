#
#include "stdio.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int* a;
	int n = 0;
	int maxx = 1000;
	int minn = -1000;

	printf("Введите размер массива\n");
	scanf_s("%d", &n);

	a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		a[i] = minn + rand() % (maxx - minn + 1);
		printf("%d\n", a[i]);
	}
	getchar();
	free(a);
	return 0;

}

