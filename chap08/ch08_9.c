/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 408p ���� 8-9.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0809();


int main(void)
{
	exercise0809();

	return 0;
}

int exercise0809()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;		// �迭�� �̸�, �迭�� ���� �ּ�, &arr[0] ��� ����.
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);		// p�� �迭 �̸��� ��ó�� ����Ѵ�.
	}

	return 0;
}