/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 408p 예제 8-9.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0809();


int main(void)
{
	exercise0809();

	return 0;
}

int exercise0809()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr;		// 배열의 이름, 배열의 시작 주소, &arr[0] 모두 같다.
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("p[%d] = %d\n", i, p[i]);		// p를 배열 이름인 것처럼 사용한다.
	}

	return 0;
}