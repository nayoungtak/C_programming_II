/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 459p ���� 9-5.c
* ��¥ : 2023.10.8
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
		printf("�ܾ�? ");
		scanf("%s", word);
		strcat(sentence, word);			// �Է¹��� �ܾ ���� ���� ���δ�.
		strcat(sentence, " ");			// �ܾ ������ �� �ֵ��� " "�� ���δ�.
	} while (strcmp(word, ".") != 0);	// "."�� �Էµ� ������ �ݺ��Ѵ�.

	printf("%s\n", sentence);

	return 0;
}