/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 385p ���� 8-2.c
* ��¥ : 2023.09.29
*/

#include <stdio.h>
int exercise0802();


int main(void)
{
	exercise0802();

	return 0;
}

int exercise0802()
{
	// int * p1 = 122345678;			// ������ ����
	int* p2 = (int*)0x122345678;		// ���� ������ �߻��Ѵ�.

	int a = 10;
	int* p3 = &a;	// a�� �ּҸ� ���ؼ� p�� �ʱ�ȭ�Ѵ�.
	int* p4 = 0;	// � �ּҷ� �ʱ�ȭ���� �� �� ������ 0���� �ʱ�ȭ �Ѵ�.
	int* p5 = NULL; // 0 ��� NULL�� ����� �� �ִ�.

	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p4 = %p\n", p5);

	return 0;
}