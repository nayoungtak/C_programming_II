/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 461p ���� 9-6.c
* ��¥ : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0906();


int main()
{
	exercise0906();

	return 0;
}

int exercise0906()
{
	char filename[] = "readme.txt";
	char* p = NULL;

	p = strchr(filename, '.');
	if (p != NULL) {
		printf("file extension: %s\n", p + 1);
	}

	p = strstr(filename, ".txt");
	if (p != NULL) {
		printf("file type: TEXT file\n");
	}

	return 0;
}