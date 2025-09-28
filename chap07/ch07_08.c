/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 344p 예제 7-8.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
int exercise0708();


int main()
{
	exercise0708();
	return 0;
}

int exercise0708()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[5] = { 10, 20, 30, 40, 50 };
	int i;
	int is_equal;

	if (x == y)				// x와 y의 주소가 같은지 비교한다.
	{
		printf("두 배열의 주소가 같습니다.\n");
	}

	is_equal = 1;			// 배열의 내용이 같은지를 나타내는 변수
	for (i = 0; i < 5; i++)
	{
		if (x[i] != y[i])	// 배열의 원소를 비교한다.
		{
			is_equal = 0;	// 서로 다른 원소가 있으면 더이상 비교할 필요가 없다.
			break;
		}
	}
	if (is_equal == 1)		// 모든 원소가 같으면 is_equal은 1이다.
	{
		printf("두 배열의 내용이 같습니다.\n");
	}

	return 0;
}