/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 413p ���� 8-11.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0811();


int main(void)
{
	exercise0811();

	return 0;
}

int exercise0811()
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };	// ������ �迭
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);				// arr[i]�� �������̴�.
	} printf("\n");

	return 0;
}