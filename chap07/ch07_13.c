/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 358p ���� 7-13.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
#define ROW 3
#define COL 2
int exercise0713();


int main()
{
	exercise0713();
	return 0;
}

int exercise0713()
{
	int data[ROW][COL] = {
		{10, 20},
		{30, 40},
		{50, 60}
	};
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}