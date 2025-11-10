/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment12 - 705p
* 내용 : 11번 프로그램에 연락처 검색이 실패하는 경우 새로운 연락처를 추가하는 기능을 구현하시오.
*        또한, 프로그램이 종료될 때 CONTACT 구조체의 내용을 텍스트 파일로 저장하도록 처리하시오.
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

typedef struct {
    CONTACT* data;
    int size;
    int capacity;
} ContactVec;

void die(const char* msg) {
    puts(msg);
    exit(1);
}

void init_vec(ContactVec* v, int cap) {
    v->data = (CONTACT*)malloc(sizeof(CONTACT) * cap);
    if (!v->data) die("메모리 할당 실패");
    v->size = 0;
    v->capacity = cap;
}

void ensure_capacity(ContactVec* v) {
    if (v->size >= v->capacity) {
        int newcap = (v->capacity < 1) ? 1 : v->capacity * 2;
        CONTACT* nd = (CONTACT*)realloc(v->data, sizeof(CONTACT) * newcap);
        if (!nd) die("메모리 재할당 실패");
        v->data = nd;
        v->capacity = newcap;
    }
}

void push_contact(ContactVec* v, const char* name, const char* phone) {
    ensure_capacity(v);
    strncpy(v->data[v->size].name, name, sizeof(v->data[v->size].name) - 1);
    v->data[v->size].name[sizeof(v->data[v->size].name) - 1] = '\0';
    strncpy(v->data[v->size].phone, phone, sizeof(v->data[v->size].phone) - 1);
    v->data[v->size].phone[sizeof(v->data[v->size].phone) - 1] = '\0';
    v->size++;
}

int find_index_by_name(const ContactVec* v, const char* name) {
    for (int i = 0; i < v->size; i++) {
        if (strcmp(v->data[i].name, name) == 0) return i;
    }
    return -1;
}

int load_contacts(const char* filename, ContactVec* v) {
    FILE* fp = fopen(filename, "r");
    if (!fp) return -1;

    char nm[64], ph[64];
    while (fscanf(fp, "%63s %63s", nm, ph) == 2) {
        push_contact(v, nm, ph);
    }
    fclose(fp);
    return 0;
}

int save_contacts(const char* filename, const ContactVec* v) {
    FILE* fp = fopen(filename, "w");
    if (!fp) return -1;
    for (int i = 0; i < v->size; i++) {
        fprintf(fp, "%s %s\n", v->data[i].name, v->data[i].phone);
    }
    fclose(fp);
    return 0;
}

void run_prompt(ContactVec* v) {
    while (1) {
        char query[64];
        printf("이름(. 입력 시 종료)? ");
        if (scanf("%63s", query) != 1) {
            puts("입력 오류");
            return;
        }
        if (strcmp(query, ".") == 0) break;

        int idx = find_index_by_name(v, query);
        if (idx >= 0) {
            printf("%s의 전화번호 %s로 전화를 겁니다...\n",
                v->data[idx].name, v->data[idx].phone);
        }
        else {
            printf("%s은(는) 등록되지 않은 이름입니다. 추가하시겠습니까? (y/n) ", query);
            char yn[8];
            if (scanf("%7s", yn) != 1) { puts("입력 오류"); return; }
            if (yn[0] == 'y' || yn[0] == 'Y') {
                char ph[64];
                printf("전화번호? ");
                if (scanf("%63s", ph) != 1) { puts("입력 오류"); return; }
                push_contact(v, query, ph);
                printf("추가 완료: %s %s\n", query, ph);
            }
            else {
                puts("추가하지 않았습니다.");
            }
        }
    }
}

int main(void) {
    char filename[128];
    ContactVec contacts;

    init_vec(&contacts, 8);

    printf("연락처 파일명? ");
    if (scanf("%127s", filename) != 1) die("파일명 입력 오류");

    int lr = load_contacts(filename, &contacts);
    if (lr == -1) {
        puts("기존 파일이 없어 새로 시작합니다.");
    }
    printf("%d개의 연락처를 로딩했습니다.\n", contacts.size);

    run_prompt(&contacts);

    if (save_contacts(filename, &contacts) == 0) {
        printf("총 %d개의 연락처를 \"%s\"에 저장했습니다.\n", contacts.size, filename);
    }
    else {
        puts("파일 저장에 실패했습니다.");
    }

    free(contacts.data);
    return 0;
}