/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 383p ���� 8-1.c
* ��¥ : 2023.09.29
*/

#include <stdio.h>
int exercise0801();


int main(void)
{
	exercise0801();

	return 0;
}

int exercise0801()
{
	int* pi;
	double* pd;
	char* pc;
	
	printf("sizeof(pi) = %zd\n", sizeof(pi));		// 4����Ʈ (32��Ʈ �÷���)
	printf("sizeof(pd) = %zd\n", sizeof(pd));		// 4����Ʈ
	printf("sizeof(pc) = %zd\n", sizeof(pc));		// 4����Ʈ

	printf("sizeof(int*) = %zd\n", sizeof(int*));			// 4����Ʈ
	printf("sizeof(double*) = %zd\n", sizeof(double*));		// 4����Ʈ
	printf("sizeof(char*) = %zd\n", sizeof(char*));			// 4����Ʈ

	return 0;
}