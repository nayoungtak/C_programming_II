/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 336p ���� 7-4.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
int exercise0704();


int main()
{
	exercise0704();
	return 0;
}

int exercise0704()
{
	int amount[5] = { 1, 1, 5 };		// 1, 1, 5, 0, 0���� �ʱ�ȭ
	int price[5] = { 0 };				// �迭 ��ü�� 0���� �ʱ�ȭ
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", amount[i]);
	}
	printf("\n");

	printf("price  = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", price[i]);
	}
	printf("\n");

	return 0;
}