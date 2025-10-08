/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 463p 예제 9-7.c
* 날짜 : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0907();


int main()
{
	exercise0907();

	return 0;
}

int exercise0907()
{
	char phone[] = "02-123-4567";
	char* p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line number: %s", p);

	return 0;
}