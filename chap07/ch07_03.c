/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 334p 예제 7-3.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
int exercise0703();


int main()
{
	exercise0703();

	return 0;
}

int exercise0703()
{
	int arr[5] = { 1, 2, 3, 4, 5 };		// 배열의 크기만큼 초기값을 지정한다.
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}