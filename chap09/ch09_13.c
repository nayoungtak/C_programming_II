/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 482p ���� 9-13.c
* ��¥ : 2023.10.12
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0913();
int swap_string(char* lhs, char* rhs, int size);
#define MAX 5		// 2���� �迭�� �� ũ��
#define BUF_SZ 30	// 2���� �迭�� �� ũ��


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

	puts("<< ���� �� >>");
	for (i = 0; i < MAX; i++) {
		puts(books[i]);
	}

	for (i = 0; i < MAX - 1; i++) {
		index = i;
		for (j = i + 1; j < MAX; j++) {
			if (strcmp(books[index], books[j]) > 0) {		// ���ڿ��� ���Ѵ�
				index = j;
			}
		}
		if (i != index) {
			swap_string(books[index], books[i], BUF_SZ);	// ���ڿ��� �¹ٲ۴�.
		}
	}

	puts("<< ���� �� >>");
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
		return 0;	// swap_string ����
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;		// swap_string ����
}