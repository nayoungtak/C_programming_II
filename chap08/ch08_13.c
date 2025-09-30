/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 420p 예제 8-13.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0813();
void swap(int* x, int* y);


int main(void)
{
	exercise0813();

	return 0;
}

int exercise0813()
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);			// 포인터에 의한 전달
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int* x, int* y)	// x, y는 인자의 주소이다.
{
	int temp = *x;			// x가 가리키는 변수의 값을 temp에 저장한다.
	*x = *y;				// y가 가리키는 변수의 값을 x가 가리키는 변수에 저장한다.
	*y = temp;				// temp를 y가 가리키는 변수에 저장한다.
}