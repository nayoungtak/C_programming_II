/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 472p ���� 9-9.c
* ��¥ : 2023.10.12
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>				// ���� ó�� ���̺귯��
int exercise0909();


int main()
{
	exercise0909();
	
	return 0;
}

int exercise0909()
{
	char str[64] = "";
	char* p = str;				// p�� str �迭�� ����Ų��.

	strcpy(p, "test string");	// p�� ����Ű�� ���� �迭�� �����Ѵ�.
	
	if (islower(p[0]))			// �ܾ��� ù ���ڸ� �빮�ڷ� �ٲ۴�.
	{
		p[0] = toupper(p[0]);	// p�� ����Ű�� str[0]�� �����Ѵ�.
	}

	p = strchr(p, ' ');			// str�� ' ' ������ �ּҸ� ������ p�� �����Ѵ�.

	if (islower(p[1]))
	{
		p[1] = toupper(p[1]);	// ' ' ���� ���ڸ� �빮�ڷ� �ٲ۴�.
	}
	puts(str);

	return 0;
}