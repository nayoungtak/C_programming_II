/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 506p ���� 10-1.c
* ��¥ : 2023.10.12
*/

#include <stdio.h>

// ����ü�� �Լ� �ۿ� �����ϸ�, �ҽ� ������ ���� �κп� ���ش�.
struct contact              // ����ó ����ü
{
    char name[20];          // �̸�
    char phone[20];         // ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
    int ringtone;           // �� �Ҹ�(0~9 ����)
};

int main(void)
{
    printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));
    //printf("contact ����ü�� ũ�� = %d\n", sizeof(contact));   // ������ ����

    return 0;
}

void test()
{
    struct contact c1;      // ���� �Լ����� ����ü�� ����� �� �ִ�.
}