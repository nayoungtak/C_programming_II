/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 467p 예제 9-8.c
* 날짜 : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0908();


int main()
{
	exercise0908();

	return 0;
}

int exercise0908()
{
	char in_str[128];
	char out_shr[128];
	int hour = 12, min = 30, sec = 45;

	printf("문자열? ");
	gets_s(in_str, sizeof(in_str));
	puts(in_str)
}