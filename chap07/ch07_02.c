/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 333p 예제 7-2.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
#define ARR_SIZE 5					// 배열의 크기로 사용할 매크로 상수의 정의
int exercise0702();


int main()
{
	exercise0702();

	return 0;
}

int exercise0702()
{
	int arr[ARR_SIZE];				// 배열의 크기를 매크로 상수로 지정할 수 있다.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE를 이용
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)	// 배열의 크기가 필요하면 ARR_SIZE를 이용
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}