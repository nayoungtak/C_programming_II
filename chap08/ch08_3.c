/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 388p ���� 8-3.c
* ��¥ : 2023.09.29
*/

#include <stdio.h>
int exercise0803();


int main(void)
{
	exercise0803();

	return 0;
}

int exercise0803()
{
	int x = 10;
	int* p = &x;				// p�� a�� �ּҸ� �ʱ�ȭ �Ѵ�.

	printf(" x = %d\n", x);
	printf("&x = %p\n", &x);	// &x�� �ּҰ��̹Ƿ� %p�� ���

	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);

	*p = 20;
	printf("*p = %d\n", *p);	// printf("*p = %d\n", x);�� ����ȴ�.

	return 0;
}