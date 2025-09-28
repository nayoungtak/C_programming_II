/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 341p 예제 7-6.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
int exercise0706();


int main()
{
	exercise0706();
	return 0;
}

int exercise0706()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//printf("arr[5] = %d\n", arr[5]);		// 할당되지 않은 메모리를 읽어온다.
	//arr[5] = 100;							// 할당되지 않은 메모리를 변경한다. (실행 에러)

	return 0;
}