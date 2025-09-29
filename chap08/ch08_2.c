/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 385p 예제 8-2.c
* 날짜 : 2023.09.29
*/

#include <stdio.h>
int exercise0802();


int main(void)
{
	exercise0802();

	return 0;
}

int exercise0802()
{
	// int * p1 = 122345678;			// 컴파일 에러
	int* p2 = (int*)0x122345678;		// 실행 에러가 발생한다.

	int a = 10;
	int* p3 = &a;	// a의 주소를 구해서 p를 초기화한다.
	int* p4 = 0;	// 어떤 주소로 초기화할지 알 수 없으면 0으로 초기화 한다.
	int* p5 = NULL; // 0 대신 NULL을 사용할 수 있다.

	printf("p2 = %p\n", p2);
	printf("p3 = %p\n", p3);
	printf("p4 = %p\n", p4);
	printf("p4 = %p\n", p5);

	return 0;
}