/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 457p ���� 9-4.c
* ��¥ : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS				// ���̺귯�� ��� �տ� �����Ѵ�.
#include <stdio.h>
#include <string.h>							// ���ڿ� ó�� �Լ� ��� �� ����
#define SIZE 10
int exercise0904();


int main()
{
	exercise0904();

	return 0;
}

int exercise0904()
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE];

	if (s1 == s2){							// s1�� �ּҿ� s2�� �ּҸ� ���ϸ� �ȵȴ�.
		printf("same address\n");
	}
	if (strcmp(s1, s2) == 0){				// s1�� s2�� ������ ���Ѵ�.
		printf("same string\n");
	}

	printf("�н�����? ");
	scanf_s("%s", password, SIZE);						// �н����带 �Է¹޴´�.
	if (strcmp(password,"abcd1234") == 0){	// ��ϵ� �н������ ���Ѵ�.
		printf("Login succeeded\n");
	}
	else {
		printf("login failed\n");
	}

	return 0;
}