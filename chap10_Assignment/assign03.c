/*
* ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment03 - 565p
* ���� : LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
*		 ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
*		 LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
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
int check_login(const Login* logins, const Login* lt);


int main()
{
	assign01();
	return 0;
}

int assign01()
{
	Login logins[SIZE] = {
	{"guest", "idontknow"},
	{"mirjam4", "147852km**"},
	{"youngtak", "na"},
	{"id1", "pw1"},
	{"id2", "pw2"}
	};
	static Login lt;

	while (1)
	{
		printf("ID? ");
		scanf_s("%s", lt.id, (unsigned)SIZE);
		printf("Password? ");
		scanf_s("%s", lt.password, (unsigned)SIZE);
		
		int success = 0;

		for (int i = 0; i < sizeof(logins); i++) {
			if (check_login(&logins[i], &lt)) {
				success = 1;
				break;
			}
		}

		if (success)
			printf("�α��� ����\n");
		else
			printf("�α��� ����\n");
	}


	return 0;
}

int check_login(const Login* logins, const Login* lt)
{
	if (strcmp(logins->id, lt->id) == 0 && strcmp(logins->password, lt->password) == 0)
		return 1;
	else
		return 0;
}
