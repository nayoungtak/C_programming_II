/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 467p ���� 9-8.c
* ��¥ : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0908();


int main()
{
	exercise0908();

	return 0;
}

int exercise0908()
{
	char in_str[128];
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("���ڿ�? ");
	gets_s(in_str, sizeof(in_str));						// ��ĭ�� ������ ���ڿ� �Է�
	puts(in_str);										// ���ڿ��� �ٹٲ� ���ڸ� �Բ� ����Ѵ�.
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);	// ���ڿ��� �����.
	puts(out_str);
	return 0;
}