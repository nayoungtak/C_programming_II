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

int main() {
    char filename[100];
    FILE* fp;
    int ch;
    int alpha_count[26] = { 0 };

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("'%s' 파일을 열 수 없습니다.\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            alpha_count[ch - 'a']++;
        }
    }

    fclose(fp);

    for (int i = 0; i < 26; i++) {
        if (alpha_count[i] > 0) {
            printf("%c:%d ", 'a' + i, alpha_count[i]);
        }
    }
    printf("\n");

    return 0;
}