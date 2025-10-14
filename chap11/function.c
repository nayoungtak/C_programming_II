
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inc_id(int n);


// 함수명: get_id()
// 기  능: 1001번부터 차례대로 유일한 번호를 증가하면서 반환하는 기능
// 입  력: 없음
// 반환값: 1001부터 시작해서 1씩 증가하는 유일한 값
// 오  류: 없음

int get_id()
{
	static int last_id = 1000;

	last_id = inc_id(last_id);

	return  last_id;
}

static int inc_id(int n)
{
	return n + 1;
}