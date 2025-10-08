/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 451p 예제 9-2.c
* 날짜 : 2023.10.6
*/

#include <stdio.h>
#include <string.h>								// 문자열 처리 함수 사용 시 포함
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
	char s2[] = "";								// 널 문자열
	int len = 0;

	printf("s1의 길이: %d\n", strlen(s1));		// 널 문자를 제외한 문자열의 길이
	printf("s2의 길이: %d;\n", strlen(s2));		// 널 문자열의 길이
	printf("길이: %d\n", strlen("bye bye"));	// 문자열 리터럴의 길이
	printf("s1의 크기: %d\n", sizeof(s1));		// 문자 배열의 바이트 크기

	len = strlen(s1);
	if (len > 0)
	{
		s1[len - 1] = '\0';						// 마지막 한 글자를 삭제한다.
	}
	printf("s1 = %s\n", s1);

	return 0;
}