/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 355p ���� 7-12.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
#define ROW 3
#define COL 2
int exercise0712();


int main()
{
	exercise0712();
	return 0;
}

int exercise0712()
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++)		// �� �ε����� ������Ų��.
	{
		for (j = 0; j < COL; j++)			// �� �ε����� ������Ų��.
		{
			data[i][j] = ++k;				// �迭�� ���ҿ� 0���� 1�� Ŀ���� ���� �����Ѵ�.
		}
	}

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d ", data[i][j]);
		}
		printf("\n");						// �ึ�� �ٹٲ� ���ڸ� ����Ѵ�.
	}

	printf("sizeof(data) = %d\n", sizeof(data));
	printf("sizeof(data[0]) = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));

	return 0;
}