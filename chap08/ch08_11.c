/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 413p 예제 8-11.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0811();


int main(void)
{
	exercise0811();

	return 0;
}

int exercise0811()
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };	// 포인터 배열
	int i;

	for (i = 0; i < 5; i++)
	{
		*arr[i] = i;
		printf("%d ", *arr[i]);				// arr[i]는 포인터이다.
	} printf("\n");

	return 0;
}