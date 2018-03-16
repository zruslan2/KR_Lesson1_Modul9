#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Structs.h"

using namespace std;
unsigned short int nz;

enum city {Almaty,Astana};

struct address
{
	city city;
	char region[50];
	char streetName[50];
};

struct student
{
	char fname[50];
	char lname[50];
	char dateOfBerth[15];
	int Age;
	struct address adress;
};

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода "; cin >> nz; cin.get();
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
#define MAX50 50;
#define MAX12 12;
			struct student students[2];

			int count = 0;
			int index;

			printf("Введите имя студента\n");
			while (count < 2 && gets_s(students[count].fname) != NULL && gets_s(students[count].fname) != '\0')
			{				
				printf("Введите фамилию студениа\n");
				gets_s(students[count].lname);

				printf("Введите возраст\n");
				scanf("%d",&students[count].Age);

				while (getchar() != '\n')
					continue;
				count++;
				if(count<10)
					printf("Введите имя студента\n");
				
			}

			printf("\n\n---------------------------------\n\n");
			if (count > 0)
			{
				printf("Список поступающих: \n");
				for (int i = 0; i < 2; i++)
				{
					printf("--> #%d. %s %s \n", i, students[i].fname, students[i].lname);
				}
				printf("\n------------------------\n");
				printf("Итого: %d поступающих \n", count);
			}
			else
			{
				printf("Увы и ах! \n");
			}

			//struct student ruslan
			//{
			//	"Ruslan","Zemlikhanov","28.02.1981",37,NULL
			//};
			//printf("Student #1 %s %s - %d\n", ruslan.fname, ruslan.lname, ruslan.Age);
			//printf("Student #1 %s %c - %d\n", ruslan.fname, ruslan.lname[0], ruslan.Age);
			//struct student ivan;
			///*ivan.dateOfBerth = "20.2.1988";*/

		}
		else if (nz == 2)
		{
			struct footbol footbols[5];

			strcpy(footbols[0].lname, "Петров");
			footbols[0].age = 20;
			footbols[0].amplua=forvard;
			footbols[0].countGames = 1 + rand() % 30;
			footbols[0].countGols = 5 + rand() % 40;

			strcpy(footbols[1].lname, "Иванов");
			footbols[1].age = 23;
			footbols[1].amplua = forvard;
			footbols[1].countGames = 1 + rand() % 30;
			footbols[1].countGols = 5 + rand() % 40;

			strcpy(footbols[2].lname, "Пеле");
			footbols[2].age = 25;
			footbols[2].amplua = vratar;
			footbols[2].countGames = 1 + rand() % 30;
			footbols[2].countGols = 5 + rand() % 40;

			strcpy(footbols[3].lname, "Роналдо");
			footbols[3].age = 30;
			footbols[3].amplua = forvard;
			footbols[3].countGames = 1 + rand() % 30;
			footbols[3].countGols = 5 + rand() % 40;
			
			bestFor(footbols, 4);
		}
		else if (nz == 3)
		{
			struct Student students[3];
						
			strcpy(students[0].lname, "Васичкин");
			strcpy(students[1].lname, "Петров");
			strcpy(students[2].lname, "Ильф");
			strcpy(students[0].group, "172");
			strcpy(students[1].group, "172");
			strcpy(students[3].group, "172");
			students[0].fizic = 3;
			students[1].fizic = 4;
			students[2].fizic = 5;
			students[0].inform = 4;
			students[1].inform = 5;
			students[2].inform = 5;
			students[0].histor = 3;
			students[1].histor = 5;
			students[2].histor = 5;

			int srB[3],sum;
			for (int i = 0;i < 3;i++)
			{
				srB[i] = students[i].inform + students[i].fizic + students[i].histor;
				if (srB[i] > 4)
				{
					printf("Cтудент %s имеет ");
				}
			}

			
		}
		else
		{
			cout << "Такого задания не существует \n";			
		}
	}
}