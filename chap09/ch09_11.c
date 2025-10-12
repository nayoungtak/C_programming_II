/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 475p ���� 9-11.c
* ��¥ : 2023.10.12
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128
int exercise0911();
int swap_string(char* lhs, char* rhs, int size);


int main()
{
	exercise0911();

	return 0;
}

int exercise0911()
{
	char str1[SIZE] = "";
	char str2[SIZE] = "";
	
	printf("���ڿ� 2��? ");
	scanf("%s %s", str1, str2);

	printf("str1=%s,str2=%s\n", str1, str2);
	swap_string(str1, str2, SIZE);
	printf("str1=%s,str2=%s\n", str1, str2);

	return 0;
}


int swap_string(char* lhs, char* rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size) {
		return 0;		// swap_string ����
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	
	return 1;			// swap_string ����
}