/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 400p ���� 8-6.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0806();


int main(void)
{
	exercise0806();

	return 0;
}

int exercise0806()
{
	int* p = (int*)0x100;
	double* q = (double*)0x100;
	char* r = (char*)0x100;
	
	printf("int*   : %p, %p, %p\n", p, p + 1, p + 2);
	printf("double*: %p, %p, %p\n", q, q + 1, q + 2);
	printf("char*  : %p, %p, %p\n", r, r + 1, r + 2);

	return 0;
}