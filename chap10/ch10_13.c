/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 545p 예제 10-13.c
* 날짜 : 2023.10.17
*/


#include <stdio.h>
#include <math.h>

typedef struct point					// 점의 좌표
{
	int x, y;
} POINT;

typedef struct line						// 직선
{
	POINT start, end;					// 멤버로 다른 구조체의 변수를 선언한다.
} LINE;

double get_length(const LINE* ln);


int main()
{
	LINE ln1 = { {10,20}, {30,40} };

	printf("직선의 시작점: (%d, %d)\n", ln1.start.x, ln1.start.y);
	printf("직선의 끝점: (%d, %d)\n", ln1.end.x, ln1.end.y);

	printf("직선의 길이: %f\n", get_length(&ln1));
	
	return 0;
}

double get_length(const LINE* ln)		// 직선의 길이 구하는 함수
{
	int dx = ln->end.x - ln->start.x;
	int dy = ln->end.y - ln->start.y;
	
	return sqrt(dx * dx + dy * dy);
}