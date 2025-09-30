/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment02 - 370p
* 내용 : 등비수열은 앞의 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다.
* 		 크기가 10인 정수형 배열에 대하여 등비수열로 값을 채우려고 한다.
* 		 첫 번째 항의 값과 공비를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.09.28
* 버전 : v1.0
*/

#include <stdio.h>
#define SIZE 10
void filling_ES(int* arr);
void print_ES(int* arr);
int assign02();


int main()
{
	assign02();
	return 0;
}

int assign02()
{
	double arr[SIZE];
	double* p = arr;
	filling_ES(p);
	print_ES(p);
	return 0;
}

void filling_ES(double* arr)
{
	double a = 0, r = 0;
	printf("첫 번째 항? ");
	scanf_s("%lf", &a);
	printf("공비? ");
	scanf_s("%lf", &r);
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = a;
		a *= r;
	}
}

void print_ES(double* arr)
{
	printf("등비수열: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
}