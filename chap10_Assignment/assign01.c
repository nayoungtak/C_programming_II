/*
* 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment01 - 565p
* 내용 : 인터넷 사이트에서 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
*		 아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
*		 LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
*		 패스워드를 출력할 때는 패스워드 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
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