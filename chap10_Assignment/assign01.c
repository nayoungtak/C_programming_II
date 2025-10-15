/*
* ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment01 - 565p
* ���� : ���ͳ� ����Ʈ���� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
*		 ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
*		 LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 �н����带 ����� ���� �н����� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.10.15
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 21

struct login {
	char id[SIZE];
	char password[SIZE];
}; typedef struct login Login;

int assign01();
void print_login(const Login* l1);


int main()
{
	assign01();
	return 0;
}

int assign01()
{
	Login l1;

	printf("ID? ");
	scanf_s("%s", l1.id, (unsigned)SIZE);
	printf("Password? ");
	scanf_s("%s", l1.password, (unsigned)SIZE);

	print_login(&l1);

	return 0;
}

void print_login(const Login* l1)
{
	printf("ID: %s\n", l1->id);
	printf("PW: ");
	for (int i = 0; i < strlen(l1->password); i++) {
		printf("*");
	} printf("\n");
}