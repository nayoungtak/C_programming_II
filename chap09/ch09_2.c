/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 451p ���� 9-2.c
* ��¥ : 2023.10.6
*/

#include <stdio.h>
#include <string.h>								// ���ڿ� ó�� �Լ� ��� �� ����
int exercise0902();


int main(void)
{
	exercise0902();

	return 0;
}

// 
int exercise0902()
{
	char s1[] = "hello";
	char s2[] = "";								// �� ���ڿ�
	int len = 0;

	printf("s1�� ����: %d\n", strlen(s1));		// �� ���ڸ� ������ ���ڿ��� ����
	printf("s2�� ����: %d;\n", strlen(s2));		// �� ���ڿ��� ����
	printf("����: %d\n", strlen("bye bye"));	// ���ڿ� ���ͷ��� ����
	printf("s1�� ũ��: %d\n", sizeof(s1));		// ���� �迭�� ����Ʈ ũ��

	len = strlen(s1);
	if (len > 0)
	{
		s1[len - 1] = '\0';						// ������ �� ���ڸ� �����Ѵ�.
	}
	printf("s1 = %s\n", s1);

	return 0;
}