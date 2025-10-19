/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 542p 예제 10-12.c
* 날짜 : 2023.10.17
*/


#include <stdio.h>


typedef struct date {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
								// unsigned short the_day_of_week : 3;
} DATE;


int main()
{
	DATE dday;
	dday.year = 22;				// 연도를 0~99사이의 값으로 저장한다.
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 + %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}