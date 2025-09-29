/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment09 - 372p
* 내용 : 1~12월까지의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.
*		 12개월의 핸드폰 요금이 들어있는 배열을 특정 값으로 초기화해서 사용하고, 핸드폰 요금 2000원 당 '*'를 하나씩 막대 그래프로 출력한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.07.28
* 버전 : v1.0
*/

#include <stdio.h>
#define SIZE 12
void print_graph(int* arr);
int assign09();

int main()
{
	assign09();
	return 0;
}

int assign09()
{
	int arr[SIZE] = { 36000, 42000, 38000, 8000, 15000, 20000, 30000, 25000, 40000, 5000, 7000, 65000 };
	int* p = arr;
	print_graph(p);
	return 0;
}

void print_graph(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d월 %5d: ", i + 1, arr[i]);
		for (int j = 0; j < arr[i] / 2000; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
