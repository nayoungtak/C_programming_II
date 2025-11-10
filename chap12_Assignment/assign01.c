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


int main()
{
    char filename[100];
    char buffer[1024];
    int num = 1;
	FILE* fp = NULL;

    printf("파일명? ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("'%s' 파일을 열 수 없습니다.\n", filename);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%d: %s", num, buffer);
        num++;
    }
    fclose(fp);

	return 0;
}
