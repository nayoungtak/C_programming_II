/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 446p ���� 9-1.c
* ��¥ : 2023.10.1
*/

#include <stdio.h>
int exercise0901();


int main(void)
{
	exercise0901();

	return 0;
}

int exercise0901()
{
	char str1[10] = { 'a', 'b', 'c' };
	char str2[10] = "abc";
	char str3[] = "abc";					// str3�� ũ�Ⱑ 4�� �迭
	char str4[10] = "very long string";		// ������ ���
	int size = sizeof(str1) / sizeof(str1[0]);
	int i;

	printf("str1 = ");
	for (i = 0; i < size; i++)
	{
		printf("%c", str1[i]);
	} printf("\n");

	printf("str2 = %s\n", str2);

	printf("str3 = ");
	printf(str3);
	printf("\n");

	printf("str4 = %s\n", str4);

	return 0;
}