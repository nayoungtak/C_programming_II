/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 334p ���� 7-3.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
int exercise0703();


int main()
{
	exercise0703();

	return 0;
}

int exercise0703()
{
	int arr[5] = { 1, 2, 3, 4, 5 };		// �迭�� ũ�⸸ŭ �ʱⰪ�� �����Ѵ�.
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}