/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 527p 예제 10-7.c
* 날짜 : 2023.10.14
*/


#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT ct = { "김석진", "01011112222", 0 };
    CONTACT* p = &ct;           // p는 CONTACT 구조체 변수 ct를 가리킨다.

    p->ringtone = 5;            // p가 가리키는 구조체의 멤버에 접근한다.
    strcpy(p->phone, "01011112223");

    printf("이    름: %s\n", p->name);
    printf("전화번호: %s\n", p->phone);
    printf("벨 소 리: %d\n", p->ringtone);

    return 0;
}
