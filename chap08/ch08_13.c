/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 420p ���� 8-13.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0813();
void swap(int* x, int* y);


int main(void)
{
	exercise0813();

	return 0;
}

int exercise0813()
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);			// �����Ϳ� ���� ����
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int* x, int* y)	// x, y�� ������ �ּ��̴�.
{
	int temp = *x;			// x�� ����Ű�� ������ ���� temp�� �����Ѵ�.
	*x = *y;				// y�� ����Ű�� ������ ���� x�� ����Ű�� ������ �����Ѵ�.
	*y = temp;				// temp�� y�� ����Ű�� ������ �����Ѵ�.
}