/*
* 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment03 - 565p
* 내용 : LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
*		 아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다.
*		 LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.10.15
* 버전 : v1.0
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
	Login lt;

	while (1)
	{
		printf("ID(exit 입력시 종료)? ");
		scanf_s("%s", lt.id, (unsigned)SIZE);
		if (strcmp(lt.id, "exit") == 0) {
			printf("시스템을 종료합니다.");
			break;
		}
		printf("Password? ");
		scanf_s("%s", lt.password, (unsigned)SIZE);
		
		int success = 0;

		int count = sizeof(logins) / sizeof(logins[0]);
		for (int i = 0; i < count; i++) {
			if (check_login(&logins[i], &lt)) {
				success = 1;
				break;
			}
		}

		if (success)
			printf("로그인 성공\n");
		else
			printf("로그인 실패\n");
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
