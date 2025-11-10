/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment01 - 701p
* 내용 : 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램을 작성하시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_filename(char* name);
FILE* open_file(const char* filename);
void print_file_with_lines(FILE* fp);


int main()
{
    char filename[100];
    FILE* fp = NULL;

    // 파일명 입력받기
    get_filename(filename);

    // 파일 열기 (및 오류 처리)
    fp = open_file(filename);

    if (fp == NULL) {
        return 1; // 비정상 종료
    }

    // 파일 내용 출력하기
    print_file_with_lines(fp);

    // 파일 닫기
    fclose(fp);

    return 0; // 정상 종료
}

/*
 * 함수이름: get_filename
 * 기능: 사용자에게 "파일명? "을 출력하고, 파일 이름을 입력받아 main 함수로부터 전달받은 배열(name)에 저장합니다.
 * 매개변수: char *name (파일명을 저장할 배열의 주소)
 * 반환값: 없음
 */
void get_filename(char* name) {
    printf("파일명? ");
    scanf("%s", name);
}

/*
 * 함수이름: open_file
 * 기능: 주어진 파일명(filename)으로 파일을 읽기 모드("r")로 엽니다.
 * 매개변수: const char *filename (열어야 할 파일의 이름)
 * 반환값: 성공 시: 파일을 가리키는 FILE 포인터 실패 시: NULL을 반환하고, 오류 메시지를 직접 출력
 */
FILE* open_file(const char* filename) {
    FILE* fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("'%s' 파일을 열 수 없습니다.\n", filename);
    }

    return fp; // 성공 시 포인터, 실패 시 NULL이 반환됨
}

/*
 * 함수이름: print_file_with_lines
 * 기능: 파일 포인터(fp)를 받아, 파일의 끝까지 한 줄씩 읽으면서
 * "줄번호: 내용" 형식으로 화면에 출력합니다.
 * 매개변수: FILE *fp (읽어올 파일의 포인터)
 * 반환값: 없음 (void)
 */
void print_file_with_lines(FILE* fp) {
    char buffer[1024];
    int num = 1;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%d: %s", num, buffer);
        num++;
    }
}