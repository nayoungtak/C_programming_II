/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 339p 예제 7-5.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
#define ARR_SIZE 5
int exercise0705();
int add(int a, int b);


int main()
{
	exercise0705();
	return 0;
}

int exercise0705()
{
	int arr[ARR_SIZE] = { 0 };				// 배열 전체를 0으로 초기화
	int i;
	
	arr[0] = 5;
	arr[1] = arr[0] + 10;					// 배열의 원소를 수식에 이용할 수 있다.
	arr[2] = add(arr[0], arr[1]);			// 함수의 인자로 전달할 수 있다.
	printf("정수를 2개 입력하세요 : ");
	scanf_s("%d %d", &arr[3], &arr[4]);		// 배열의 원소에 값을 입력받을 수 있다.

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");

	return 0;
}

int add(int a, int b) 						// int형의 매개변수를 갖는 함수
{
	return a + b;
}