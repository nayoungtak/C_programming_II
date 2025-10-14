/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 511p 예제 10-2.c
* 날짜 : 2023.10.12
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};

int main()
{
	struct contact ct = { "김석진", "01011112222",0 };
	struct contact ct1 = { "전정국", "01012345678",1 };
	struct contact ct2 = ct1;
	printf("ct1으로 초기화 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	ct2 = ct;
	printf("ct를 대입한 후의 ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

	return 0;
}
