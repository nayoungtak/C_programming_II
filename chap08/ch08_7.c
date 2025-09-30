/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 402p 예제 8-7.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0807();


int main(void)
{
	exercise0807();

	return 0;
}

int exercise0807()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p + %d = %p, ", i, p + i);			// arr[i]의 주소를 출력
		printf("*(p + %d) = %d\n", i, *(p + i));	// arr[i]를 출력
	}

	return 0;
}