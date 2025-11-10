/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment11 - 704p
* 내용 : CONTACT 구조체를 이용한 연락처 관리 프로그램에 텍스트 파일에서 연락처를 로딩하는 기능을 추가한다.
*        텍스트 파일에 정해진 형식으로 연락처를 저장하고 이 파일을 읽어서 COTACT 구조체 배열을 생성하도록 프로그램을 작성하시오.
*        CONTACT 구조체 배열은 동적 메모리에 생성한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char phone[20];
} CONTACT;

int main() {
    FILE* fp;
    char filename[50];
    int count = 0;
    char temp_name[20], temp_phone[20];

    printf("연락처 파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fscanf(fp, "%s %s", temp_name, temp_phone) == 2) {
        count++;
    }

    CONTACT* list = (CONTACT*)malloc(sizeof(CONTACT) * count);
    if (list == NULL) {
        printf("메모리 할당 실패\n");
        fclose(fp);
        return 1;
    }

    rewind(fp);

    for (int i = 0; i < count; i++) {
        fscanf(fp, "%s %s", list[i].name, list[i].phone);
    }
    fclose(fp);

    printf("%d개의 연락처를 로딩했습니다.\n", count);

    while (1) {
        char search[20];
        printf("이름(. 입력 시 종료)? ");
        scanf("%s", search);

        if (strcmp(search, ".") == 0)
            break;

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(list[i].name, search) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다...\n",
                    list[i].name, list[i].phone);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%s의 연락처를 찾을 수 없습니다.\n", search);
        }
    }

    free(list);
    return 0;
}