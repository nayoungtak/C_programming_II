/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 383p 예제 8-1.c
* 날짜 : 2023.09.29
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
	
	printf("sizeof(pi) = %zd\n", sizeof(pi));		// 4바이트 (32비트 플랫폼)
	printf("sizeof(pd) = %zd\n", sizeof(pd));		// 4바이트
	printf("sizeof(pc) = %zd\n", sizeof(pc));		// 4바이트

	printf("sizeof(int*) = %zd\n", sizeof(int*));			// 4바이트
	printf("sizeof(double*) = %zd\n", sizeof(double*));		// 4바이트
	printf("sizeof(char*) = %zd\n", sizeof(char*));			// 4바이트

	return 0;
}