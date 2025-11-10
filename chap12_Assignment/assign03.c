/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment03 - 701p
* 내용 : 텍스트 파일의 이름을 입력받아서 파일 내의 문자들에 대하여 영문자의 개수를 문자별로 세서 출력하는 프로그램을 작성하시오.
*		 문자의 개수를 셀 때는 대소문자를 구분하지 않는다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void get_filename(char* name);
FILE* open_file(const char* filename);
void count_alphabet(FILE* fp, int* counts);
void print_counts(const int* counts);


int main() {
    char filename[100];
    FILE* fp;
    int alpha_count[26] = { 0 };

    // 파일명 입력받기
    get_filename(filename);

    // 파일 열기 (및 오류 처리)
    fp = open_file(filename);
    if (fp == NULL) {
        return 1; // 오류 종료
    }

    // 파일 처리 (알파벳 개수 세기)
    count_alphabet(fp, alpha_count);

    // 파일 닫기
    fclose(fp);

    // 결과 출력
    // print_counts 함수에게 개수가 저장된 배열(alpha_count)을 전달합니다.
    print_counts(alpha_count);

    return 0; // 정상 종료
}

void get_filename(char* name) {
    printf("파일명? ");
    scanf("%s", name);
}

FILE* open_file(const char* filename) {
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("'%s' 파일을 열 수 없습니다.\n", filename);
    }

    return fp; // 성공 시 포인터, 실패 시 NULL 반환
}

void count_alphabet(FILE* fp, int* counts) {
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }
    }
}

void print_counts(const int* counts) {
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c:%d ", 'a' + i, counts[i]);
        }
    }
    printf("\n");
}