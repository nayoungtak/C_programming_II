/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 391p ���� 8-4.c
* ��¥ : 2023.09.29
*/

#include <stdio.h>
int exercise0804();


int main(void)
{
	exercise0804();

	return 0;
}

int exercise0804()
{
	int x = 10;
	test1(x);		// main�� x�� �Լ��� �Ű����� x�� �����ؼ� �����Ѵ�.
	printf("test1 ȣ�� �� x = %d\n", x);		// x�� ���� ������� �ʴ´�.

	test2(&x);		// test2 �Լ��� ȣ���� �� x�� �ּҸ� �Ѱ��ش�.
	printf("test2 ȣ�� �� x = %d\n", x);		// x�� ���� ����ȴ�.

	return 0;
}

void test1(int x)	// �Ű����� x�� main�� x�� �ʱ�ȭ�� ���� ����
{
	x = 20;			// x��test1�� ���� �����̹Ƿ� test1�� ������ �� �Ҹ�ȴ�.
}

void test2(int* p)	// p�� main�� x�� �ּҷ� �ʱ�ȭ�� �������̴�.
{
	*p = 20;		// p�� ����Ű�� ����, �� main�� x�� 20�� �����Ѵ�.
}