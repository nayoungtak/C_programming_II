/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 511p ���� 10-2.c
* ��¥ : 2023.10.12
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct contact                              // ����ó ����ü
{
    char name[20];                          // �̸�
    char phone[20];                         // ��ȭ��ȣ(01012345678 ������ ���ڿ��� ����)
    int ringtone;                           // �� �Ҹ�(0~9 ����)
};

int main(void)
{
    struct contact ct = { "�輮��", "01011112222", 0 };
    struct contact ct1 = { 0 }, ct2 = { 0 };

    ct.ringtone = 5;                        // ringtone ����� int ������ ����Ѵ�.
    strcpy(ct.phone, "01011112222");        // phone ����� ���� �迭�� ����Ѵ�.
    printf("��    ��: %s\n", ct.name);
    printf("��ȭ��ȣ: %s\n", ct.phone);
    printf("�� �� ��: %d\n", ct.ringtone);

    strcpy(ct1.name, "������");             // ����ü ���� �̸����� ������ ������� �����Ѵ�.
    strcpy(ct1.phone, "01012345678");
    ct1.ringtone = 1;
    printf("��    ��: %s\n", ct1.name);
    printf("��ȭ��ȣ: %s\n", ct1.phone);
    printf("�� �� ��: %d\n", ct1.ringtone);

    // ct2�� ����ó ������ �Է¹޴´�.
    printf("�̸�? ");                       // ����ü ���� �̸����� ������ ������� �����Ѵ�.
    scanf("%s", ct2.name);
    printf("��ȭ��ȣ? ");
    scanf("%s", ct2.phone);
    printf("�� �Ҹ�? ");
    scanf("%d", &ct2.ringtone);
    printf("��    ��: %s\n", ct2.name);
    printf("��ȭ��ȣ: %s\n", ct2.phone);
    printf("�� �� ��: %d\n", ct2.ringtone);

    return 0;
}