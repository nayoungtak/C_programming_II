/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 542p ���� 10-12.c
* ��¥ : 2023.10.17
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
	dday.year = 22;				// ������ 0~99������ ������ �����Ѵ�.
	dday.month = 11;
	dday.day = 30;

	printf("DATE�� ũ�� + %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}