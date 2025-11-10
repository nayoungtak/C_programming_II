/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment13 - 705p
* 내용 : 정수의 개수 N을 입력받아 int가 N개 들어갈 수 있는 동적 메모리를 할당받는다.
*        이 배열에 임의의 정수를 N개 생성해서 채운 다음 텍스트 파일과 2진 파일로 각각 저장하는 프로그램을 작성하시오.
*        2진 파일로 저장할 때는 N을 먼저 저장하고, 배열의 내용을 저장하시오.
*        저장된 파일을 문서편집기에서 열어서 내용을 확인해보고 파일의 크기도 비교해본다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static int* alloc_ints(int n) {
    int* p = (int*)malloc(sizeof(int) * n);
    if (!p) {
        puts("메모리 할당 실패");
        exit(1);
    }
    return p;
}

static void fill_random(int* arr, int n, int lo, int hi) {
    // [lo, hi] 범위의 난수
    for (int i = 0; i < n; i++) {
        arr[i] = lo + rand() % (hi - lo + 1);
    }
}

static int save_text(const char* base, const int* arr, int n) {
    char path[256];
    snprintf(path, sizeof(path), "%s.txt", base);
    FILE* fp = fopen(path, "w");
    if (!fp) return -1;

    // 한 줄에 20개씩 출력(가독성)
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d", arr[i]);
        if (i + 1 < n) {
            fputc(' ', fp);
            if ((i + 1) % 20 == 0) fputc('\n', fp);
        }
    }
    fputc('\n', fp);
    fclose(fp);
    return 0;
}

static int save_binary(const char* base, const int* arr, int n) {
    char path[256];
    snprintf(path, sizeof(path), "%s.dat", base);
    FILE* fp = fopen(path, "wb");
    if (!fp) return -1;

    // 먼저 N 저장, 그 다음 배열 저장
    if (fwrite(&n, sizeof(int), 1, fp) != 1) { fclose(fp); return -1; }
    if (n > 0 && fwrite(arr, sizeof(int), n, fp) != (size_t)n) { fclose(fp); return -1; }
    fclose(fp);
    return 0;
}

static long long file_size_bytes(const char* path) {
    FILE* fp = fopen(path, "rb");
    if (!fp) return -1;
    if (fseek(fp, 0, SEEK_END) != 0) { fclose(fp); return -1; }
    long long sz = ftell(fp);
    fclose(fp);
    return sz;
}

int main(void) {
    int N;
    char base[128];

    srand((unsigned)time(NULL));

    printf("정수의 개수? ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        puts("N은 양의 정수여야 합니다.");
        return 1;
    }
    printf("파일명? ");
    if (scanf("%127s", base) != 1) {
        puts("파일명 입력 오류");
        return 1;
    }

    int* arr = alloc_ints(N);
    // 임의 정수 범위: [-100000, 100000]
    fill_random(arr, N, -100000, 100000);

    if (save_text(base, arr, N) != 0) {
        puts("텍스트 파일 저장 실패");
        free(arr);
        return 1;
    }
    if (save_binary(base, arr, N) != 0) {
        puts("이진 파일 저장 실패");
        free(arr);
        return 1;
    }

    printf("%s.txt와 %s.dat를 생성했습니다.\n", base, base);

    // (옵션) 크기 비교 안내 출력
    char txtpath[256], datpath[256];
    snprintf(txtpath, sizeof(txtpath), "%s.txt", base);
    snprintf(datpath, sizeof(datpath), "%s.dat", base);
    long long txtsz = file_size_bytes(txtpath);
    long long datsz = file_size_bytes(datpath);
    if (txtsz >= 0 && datsz >= 0) {
        printf("파일 크기: %s.txt = %lld bytes, %s.dat = %lld bytes\n",
            txtpath, txtsz, datpath, datsz);
        // 이진 파일 이론 크기(참고): 4 + 4*N (int를 4바이트로 가정)
        long long theoretical_bin = 4LL + 4LL * N;
        printf("(참고) 이진 파일 이론상 최소 크기(플랫폼 int 4바이트 가정): %lld bytes\n", theoretical_bin);
    }

    free(arr);
    return 0;
}