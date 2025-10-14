/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 529p ���� 10-8.c
* ��¥ : 2023.10.14
*/


#define _CRT_SECURE_NO_WARNINGS
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
    CONTACT arr[] = {
    {"�輮��", "01011112222", 0},
    {"������", "01012345678", 1},
    {"������", "01077778888", 2},
    {"�賲��", "01098765432", 9},
    {"������", "01011335577", 5},
    {"��ȣ��", "01024682468", 7},
    {"������", "01099991111", 3}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    char name[STR_SIZE];
    int index;
    CONTACT* recent = NULL;

    while (1)
    {
        printf("�̸�(. �Է� �� ����)? ");
        scanf("%s", name);
        if (strcmp(name, ".") == 0)
            break;

        index = -1;
        for (i = 0; i < size; i++) {
            if (strcmp(arr[i].name, name) == 0) {
                index = i;
                break;
            }
        }
        if (index >= 0) {
            printf("%s�� ��ȭ��ȣ %s�� ��ȭ�� �̴ϴ�....\n", arr[index].name, arr[index].phone);
            recent = &arr[index];
        }
        else {
            printf("����ó�� ã�� �� �����ϴ�.\n");
        }
    }
    if (recent) {
        printf("�ֱ� ��ȭ: %s %s\n", recent->name, recent->phone);
    }

    return 0;
}