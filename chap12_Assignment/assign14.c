/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment13 - 705p
* 내용 : 13번 프로그램을 실행해서 크기가 다른 2진 파일을 2개 생성한 다음 두 파일을 읽어서 하나의 int배열을 생성한 다음 정렬 후에
*        다시 2진 파일로 저장하는 프로그램을 작성하시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 공용 유틸
static void die(const char* msg) {
    puts(msg);
    exit(1);
}

// 이진 파일 읽기: [int N][int 값 N개] 형식 성공 시 *out_arr 에 동적 할당한 배열 주소, *out_n 에 개수 반환
static void read_bin(const char* path, int** out_arr, int* out_n) {
    FILE* fp = fopen(path, "rb");
    if (!fp) die("파일을 열 수 없습니다.");
    int n = 0;
    if (fread(&n, sizeof(int), 1, fp) != 1) {
        fclose(fp);
        die("파일에서 N을 읽는 데 실패했습니다.");
    }
    if (n < 0) {
        fclose(fp);
        die("잘못된 N 값입니다.");
    }
    int* arr = NULL;
    if (n > 0) {
        arr = (int*)malloc(sizeof(int) * n);
        if (!arr) {
            fclose(fp);
            die("메모리 할당 실패");
        }
        size_t got = fread(arr, sizeof(int), n, fp);
        if (got != (size_t)n) {
            free(arr);
            fclose(fp);
            die("정수 데이터를 모두 읽지 못했습니다.");
        }
    }
    fclose(fp);
    *out_arr = arr;
    *out_n = n;
}

// 이진 파일 쓰기: [int N][int 값 N개]
static void write_bin(const char* path, const int* arr, int n) {
    FILE* fp = fopen(path, "wb");
    if (!fp) die("출력 파일을 생성할 수 없습니다.");
    if (fwrite(&n, sizeof(int), 1, fp) != 1) {
        fclose(fp);
        die("N 저장 실패");
    }
    if (n > 0 && fwrite(arr, sizeof(int), n, fp) != (size_t)n) {
        fclose(fp);
        die("정수 배열 저장 실패");
    }
    fclose(fp);
}

// qsort 비교함수 (오름차순)
static int cmp_int_asc(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x > y) - (x < y);
}

int main(void) {
    char f1[256], f2[256], fout[256];
    int* a = NULL, * b = NULL, * all = NULL;
    int n1 = 0, n2 = 0, nt = 0;

    printf("첫 번째 파일명? ");
    if (scanf("%255s", f1) != 1) die("파일명 입력 오류");
    read_bin(f1, &a, &n1);
    printf("정수 %d개를 읽었습니다.\n", n1);

    printf("두 번째 파일명? ");
    if (scanf("%255s", f2) != 1) {
        free(a);
        die("파일명 입력 오류");
    }
    read_bin(f2, &b, &n2);
    printf("정수 %d개를 읽었습니다.\n", n2);

    nt = n1 + n2;
    all = (int*)malloc(sizeof(int) * (size_t)nt);
    if (!all) {
        free(a); free(b);
        die("메모리 할당 실패");
    }
    if (n1 > 0) memcpy(all, a, sizeof(int) * (size_t)n1);
    if (n2 > 0) memcpy(all + n1, b, sizeof(int) * (size_t)n2);

    // 정렬
    if (nt > 1) qsort(all, (size_t)nt, sizeof(int), cmp_int_asc);

    printf("저장할 파일명? ");
    if (scanf("%255s", fout) != 1) {
        free(a); free(b); free(all);
        die("파일명 입력 오류");
    }
    write_bin(fout, all, nt);
    printf("정수 %d개를 저장했습니다.\n", nt);

    free(a); free(b); free(all);
    return 0;
}