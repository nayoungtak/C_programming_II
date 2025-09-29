/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 388p 예제 8-3.c
* 날짜 : 2023.09.29
*/

#include <stdio.h>
int exercise0803();


int main(void)
{
	exercise0803();

	return 0;
}

int exercise0803()
{
	int x = 10;
	int* p = &x;				// p는 a의 주소를 초기화 한다.

	printf(" x = %d\n", x);
	printf("&x = %p\n", &x);	// &x는 주소값이므로 %p로 출력

	printf(" p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", &p);

	*p = 20;
	printf("*p = %d\n", *p);	// printf("*p = %d\n", x);로 수행된다.

	return 0;
}