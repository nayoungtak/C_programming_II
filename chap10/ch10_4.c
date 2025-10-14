/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 516p 예제 10-4.c
* 날짜 : 2023.10.14
*/


#include <stdio.h>
#include <string.h>

struct contact
{
    char name[20];
    char phone[20];
    int ringtone;
};


int main(void)
{
    struct contact ct1 = { "전정국", "01012345678", 1 };
    struct contact ct2 = ct1;

    if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
        && ct1.ringtone == ct2.ringtone)
        printf("ct1과 ct2의 값이 같습니다.\n");
    else
        printf("ct1과 ct2의 값이 같지 않습니다.\n");

    return 0;
}
