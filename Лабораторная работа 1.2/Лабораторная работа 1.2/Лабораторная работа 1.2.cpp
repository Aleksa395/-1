#include "stdio.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));
	int mass[10] = { 0 };
	int maxx = 1000;
	int minn = -1000;

	for (int i = 0; i < 10; i++)
	{
		mass[i] = minn + rand() % (maxx - minn + 1);
		printf("%d ", mass[i]);
	}

	getchar();
}

