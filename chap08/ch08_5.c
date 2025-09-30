/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 398p 예제 8-5.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0805();


int main(void)
{
	exercise0805();

	return 0;
}

int exercise0805()
{
	int a = 10, b = 20;

	const int* p1 = &a;			// p1는 a에 읽기 전용으로 접근한다.
	int* const p2 = &a;			// p2는 a 전용 포인터이다.
	const int* const p3 = &a;	// p3는 읽기 전용 + a 전용 포인터

	printf("*p1 = %d\n", *p1);	// p1으로 a를 일어온다.
	// *p1 = 100;				// *p1은 const 변수로 간주되므로 컴파일 에러
	p1 = &b;					// p1이 다른 변수를 가리킬 수는 있다. 이제 p1은 b를 가리킨다.
	printf("*p1 = %d\n", *p1);	// p1으로 b를 읽어온다.

	//*p2 = &b;					// p2가 다른 변수를 가리키게 할 수 없으므로 컴파일 에러
	*p2 = 100;					// p2가 가리키는 변수의 값을 변경할 수 있다.
	printf("*p2 = %d\n", *p2);

	//*p3 = 100;				// compile error
	//p3 = &b;					// compile error
	printf("*p3 = %d\n", *p3);	// p3이 가리키는 변수의 값을 읽어온다.

	return 0;
}