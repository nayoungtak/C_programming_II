/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 402p ���� 8-7.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0807();


int main(void)
{
	exercise0807();

	return 0;
}

int exercise0807()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p + %d = %p, ", i, p + i);			// arr[i]�� �ּҸ� ���
		printf("*(p + %d) = %d\n", i, *(p + i));	// arr[i]�� ���
	}

	return 0;
}