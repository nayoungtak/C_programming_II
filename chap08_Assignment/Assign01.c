/*
* 파일명: Core C Programming 2nd Edition Chap08 Programming Assignment01 - 434p
* 내용 : 크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하시오.
*		 단, 주소 구하기 연산자를 사용하지 마시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.09.30
* 버전 : v1.0
*/

#include <stdio.h>
int assign01();


int main()
{
	assign01();
	return 0;
}

int assign01()
{
	double x[3] = { 1.1, 2.2, 3.3 };
	double* p = x;
	for (int i = 0; i < 3; i++)
	{
		printf("x[%d]의 주소 %p\n", i, p + i);
	}
	return 0;
}