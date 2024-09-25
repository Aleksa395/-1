#include "stdio.h"
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>



int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	int i;
	int ch = 0;
	char eng[20];
	int ch1 = 0;

	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for (i = 0;i < 3;i++)
	{
		printf("Введите фамилию студента\n");
		scanf_s("%20s", stud[i].famil);
		printf("Введите имя студента %s\n", stud[i].famil);
		scanf_s("%20s", stud[i].name);
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%20s", stud[i].facult);
		printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name);
		scanf_s("%d", &stud[i].Nomzach);
	}
	for (i = 0; i < 3; i++)
	{
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}

	while (1) {
		printf("Введите одно из данный по которому будет проводиться поиск(Введите номер)\n1.Фамилия \n2.Имя \n3.Название факультета \n4.Номер зачётной книжки\n");
		scanf_s("%d", &ch);
		if (ch != 4)
		{
			printf("Введите значения параметра\n");
			scanf_s("%20s", &eng);
		}
		else
		{
			printf("Введите номер зачётной книжки\n");
			scanf_s("%d", &ch1);
		}

		int num = 0;
		for (i = 0; i < 3; i++)
		{
			if ((ch == 1 && strcmp(eng, stud[i].famil) == 0) ||
				(ch == 2 && strcmp(eng, stud[i].name) == 0) ||
				(ch == 3 && strcmp(eng, stud[i].facult) == 0) ||
				(ch == 4 && stud[i].Nomzach == ch1))
			{
				printf("Студент %s %s обучается на факультете %s, номер заётной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			}
		}
	}



	getchar();
}


