#include "stdio.h"
#include <locale.h>
#include <stdlib.h>


int main()
{
	int mass[10] = { 110, 1290, 9012, 12390, 3345, 545, 45 };
	int maxx = 0;
	int minn = 1000;

	for (int i = 0; i < 6; i++)
	{
		if (mass[i] > maxx)
		{
			maxx = mass[i];
		}
		if (mass[i] < minn)
		{
			minn = mass[i];
		}
	}

	printf("%d", maxx - minn);

	getchar();
}