#define _CRT_SECURE_NO_WARNINGS
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
	int count = 0;
	char choice;

	struct student
	{
		int n;
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
		struct student* next;
	};

	struct student* head = NULL;
	struct student* tail = NULL;

	do {
		struct student* new_student = (struct student*)malloc(sizeof(struct student));
		new_student->n = count + 1;
		printf("Введите фамилию %d студента\n", count + 1);
		scanf("%s", new_student->famil);
		printf("Введите имя %d студента\n", count + 1);
		scanf("%20s", new_student->name);
		printf("Введите название факультета %d студента\n", count + 1);
		scanf("%20s", new_student->facult);
		printf("Введите номер зачётной книжки %d студента\n", count + 1);
		scanf("%d", &new_student->Nomzach);

		new_student->next = NULL;

		if (head == NULL) {
			head = new_student;
			tail = new_student;
		}
		else {
			tail->next = new_student;
			tail = new_student;
		}
		count++;
		printf("Если хотите закончить, введите *, иначе (1) \n");
		scanf(" %c", &choice);
	} while (choice != '*');

	struct student* q = head;

	while (q!= NULL)
	{
		printf("%d | Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", q->n, q->famil, q->name, q->facult, q->Nomzach);
		q = q->next;
	}

	while (1) {
		printf("\nВведите одно из данный по которому будет проводиться поиск(Введите номер)\n1.Фамилия \n2.Имя \n3.Название факультета \n4.Номер зачётной книжки\n");
		scanf_s("%d", &ch);
		if (ch != 4)
		{
			printf("Введите значения параметра\n");
			scanf("%20s", &eng);
		}
		else
		{
			printf("Введите номер зачётной книжки\n");
			scanf_s("%d", &ch1);
		}

		struct student* r = head;
		while(r!= NULL)
		{
			if ((ch == 1 && strcmp(eng, r->famil) == 0) ||
				(ch == 2 && strcmp(eng, r->name) == 0) ||
				(ch == 3 && strcmp(eng, r->facult) == 0) ||
				(ch == 4 && r->Nomzach == ch1))
			{
				printf("\nСтудент %s %s обучается на факультете %s, номер заётной книжки %d\n", r->famil, r->name, r->facult, r->Nomzach);
				
			}
			r = r->next;
		}
	}



	getchar();
}


