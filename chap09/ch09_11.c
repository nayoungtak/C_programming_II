/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 475p 예제 9-11.c
* 날짜 : 2023.10.12
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
	
	printf("문자열 2개? ");
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
		return 0;		// swap_string 실패
	}

	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);
	
	return 1;			// swap_string 성공
}