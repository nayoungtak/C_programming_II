/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 516p ���� 10-4.c
* ��¥ : 2023.10.14
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
    struct contact ct1 = { "������", "01012345678", 1 };
    struct contact ct2 = ct1;

    if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
        && ct1.ringtone == ct2.ringtone)
        printf("ct1�� ct2�� ���� �����ϴ�.\n");
    else
        printf("ct1�� ct2�� ���� ���� �ʽ��ϴ�.\n");

    return 0;
}
