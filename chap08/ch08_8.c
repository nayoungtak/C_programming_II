/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 404p 예제 8-8.c
* 날짜 : 2023.09.30
*/

#include <stdio.h>
int exercise0808();


int main(void)
{
	exercise0808();

	return 0;
}

int exercise0808()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];					// arr[0]의 주소를 p에 저장한다.
	int i;

	for (i = 0; i < 5; i++, p++)		// p는 &arr[0]~&arr[4]의 값이 된다.
	{
		printf("p = %p, ", p);			// p가 가리키는 원소가 계속 바뀐다.
		printf("*p = %d\n", *p);		// p가 역참조하는 원소도 계속 바뀐다.
	}
	return 0;
}