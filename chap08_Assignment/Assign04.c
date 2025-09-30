/*
* 파일명: Core C Programming 2nd Edition Chap08 Programming Assignment04 - 434p
* 내용 : 배열 원소를 가리키는 포인터를 이용해서 실수형 배열의 평균을 구하는 프로그램을 작성하시오.
*		 실수형 배열은 크기가 10이고 마음대로 초기화해서 사용한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.09.30
* 버전 : v1.0
*/

#include <stdio.h>
#define SIZE 10
int assign04();


int main()
{
	assign04();
	return 0;
}

int assign04()
{
	double arr[SIZE] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = arr;
	double sum = 0.0;

	printf("배열 :");
	for (int i = 0; i < SIZE; i++)
	{
		sum += *(p + i);
		printf(" %.2lf ", *(p + i));
	} printf("\n");

	printf("평균 : %lf\n", sum / SIZE);
	
	return 0;
}