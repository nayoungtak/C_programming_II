/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 422p ���� 8-14.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0814();
void get_sum_product(int x, int y, int* sum, int* product);


int main(void)
{
	exercise0814();

	return 0;
}

int exercise0814()
{
	int result1, result2;

	// 2. �Լ��� ȣ���� �� ó�� ����� �޾ƿ� ������ �ּҸ� �����Ѵ�.
	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

// 1. ó�� ����� ������ ������ ����Ű�� ������������ �Ű������� �����Ѵ�.
void get_sum_product(int x, int y, int* sum, int* product)
{
	// 3. ���������� �Ű������� ����Ű�� ���� ó�� ����� �����Ѵ�.
	*sum = x + y;
	*product = x * y;
}