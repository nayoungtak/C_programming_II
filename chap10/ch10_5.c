/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 523p 예제 10-5.c
* 날짜 : 2023.10.14
*/


#include <stdio.h>
#include <string.h>

typedef struct contact
{
    char name[20];
    char phone[20];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT arr[] = {              // 초기화하는 경우에는 배열의 크기를 생략할 수 있다.
        {"김석진", "01011112222", 0},
        {"전정국", "01012345678", 1},
        {"박지민", "01077778888", 2}
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("이름\t전화번호\t벨\n");
    for (i = 0; i < size; i++) {
        printf("%s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
    }

    return 0;
}
