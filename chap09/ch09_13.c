/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 482p 예제 9-13.c
* 날짜 : 2023.10.12
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0913();
int swap_string(char* lhs, char* rhs, int size);
#define MAX 5		// 2차원 배열의 행 크기
#define BUF_SZ 30	// 2차원 배열의 열 크기


int main()
{
	exercise0913();

	return 0;
}

int exercise0913()
{
	char books[MAX][BUF_SZ] = {
		"Wonder",
		"Me before you",
		"The hunger games",
		"Twilight",
		"Harry potter",
	};
	int i, j;
	int index;

	puts("<< 정렬 전 >>");
	for (i = 0; i < MAX; i++) {
		puts(books[i]);
	}

	for (i = 0; i < MAX - 1; i++) {
		index = i;
		for (j = i + 1; j < MAX; j++) {
			if (strcmp(books[index], books[j]) > 0) {		// 문자열을 비교한다
				index = j;
			}
		}
		if (i != index) {
			swap_string(books[index], books[i], BUF_SZ);	// 문자열을 맞바꾼다.
		}
	}

	puts("<< 정렬 후 >>");
	for (i = 0; i < MAX; i++) {
		puts(books[i]);
	}

	return 0;
}

int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[BUF_SZ] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size) {
		return 0;	// swap_string 실패
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;		// swap_string 성공
}