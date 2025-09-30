/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 422p 예제 8-14.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0814();
void get_sum_product(int x, int y, int* sum, int* product);


int main(void)
{
	exercise0814();

	return 0;
}

int exercise0814()
{
	int result1, result2;

	// 2. 함수를 호출할 때 처리 결과를 받아올 변수의 주소를 전달한다.
	get_sum_product(10, 20, &result1, &result2);
	printf("sum = %d, product = %d\n", result1, result2);
	return 0;
}

// 1. 처리 결과를 저장할 변수를 가리키는 포인터형으로 매개변수를 선언한다.
void get_sum_product(int x, int y, int* sum, int* product)
{
	// 3. 포인터형의 매개변수가 가리키는 곳에 처리 결과를 저장한다.
	*sum = x + y;
	*product = x * y;
}