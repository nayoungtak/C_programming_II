/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 459p 예제 9-5.c
* 날짜 : 2023.10.8
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int exercise0905();


int main()
{
	exercise0905();

	return 0;
}

int exercise0905()
{
	char sentence[100] = "";
	char word[20];

	do {
		printf("단어? ");
		scanf("%s", word);
		strcat(sentence, word);			// 입력받은 단어를 문장 끝에 붙인다.
		strcat(sentence, " ");			// 단어를 구분할 수 있도록 " "을 붙인다.
	} while (strcmp(word, ".") != 0);	// "."이 입력될 때까지 반복한다.

	printf("%s\n", sentence);

	return 0;
}