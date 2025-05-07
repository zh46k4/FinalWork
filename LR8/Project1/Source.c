#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Rus");
	int al[20];
	int i;
	int m1, m2;

	srand(42);
	srand(time(NULL));

	printf("������ ������ :\n");

	for (int i = 0; i < 20; i++) {
		al[i] = rand() % 1000 - 500;
		printf("%d\n", al[i]);
	}

	getchar();

	printf("���������� ������ :\n");

	m1 = al[0];
	m2 = al[1];

	for (i = 0; i < 20; i++) {
		if (al[i] > 0)
			printf("%d\n", al[i] + m1);
		else
			printf("%d\n", al[i] + m2);
	}

	return 0;
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{

	setlocale(LC_ALL, "Rus");
	srand(42);
	srand(time(NULL));

	const int m = 10;
	const int n = 10;
	int arr[m][n];
	int al = rand() % 9 + 2;
	int b = rand() % 9 + 2;
	int count[n];

	printf("��� ��������� ����� :\n");

	printf("%d\n", al);
	printf("%d\n", b);

	getchar();

	printf("��������� ������ :\n");

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 1000 - 500;
		}
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	getchar();
	printf("���������� ��������� � ������ �������, ������� ������������� ������� : ");

	for (int j = 0; j < n; j++)
	{
		count[j] = 0;
		for (int i = 0; i < m; i++)
		{
			if ((arr[i][j] % al == 0) || (arr[i][j] % b == 0))
			{
				count[j] += 1;
			}
		}
		printf("%d\t", count[j]);
	}

	printf("\n");

	return 0;
}
