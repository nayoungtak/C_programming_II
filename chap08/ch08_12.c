/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 415p ���� 8-12.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0812();


int main(void)
{
	exercise0812();

	return 0;
}

int exercise0812()
{
	int data[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	int(*p)[5] = data;					// int[5] �迭�� ���� ������
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", p[i][j]);	// 2���� �迭�� ��ó�� ����Ѵ�.
		} printf("\n");
	}

	return 0;
}