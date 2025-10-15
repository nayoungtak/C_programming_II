/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 538p 예제 10-11.c
* 날짜 : 2023.10.14
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point
{
    int x, y;
} POINT;

void print_point(const POINT* pt);
void set_point(POINT* pt, int x, int y);

int main(void)
{
    POINT arr[5] = { 0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    srand((unsigned int)time(NULL));       // 난수의 시드를 지정한다.

    for (i = 0; i < sz; i++)
    {
        int x = rand() % 100;              // 0~99 사이의 임의의 정수를 생성한다.
        int y = rand() % 100;
        set_point(&arr[i], x, y);          // arr[i]를 임의의 좌표로 설정한다.
    }

    for (i = 0; i < sz; i++)
    {
        print_point(&arr[i]);
        printf(" ");
    }

    printf("\n");

    return 0;
}

// 점의 좌표를 출력하는 함수 (pt는 입력 매개변수)
void print_point(const POINT* pt)
{
    printf("(%d, %d)", pt->x, pt->y);
}

// 점의 좌표를 변경하는 함수 (pt는 출력 매개변수)
void set_point(POINT* pt, int x, int y)
{
    pt->x = x;
    pt->y = y;        // pt가 가리키는 구조체의 멤버를 변경한다.
}
