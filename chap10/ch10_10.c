/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 536p 예제 10-10.c
* 날짜 : 2023.10.14
*/


#include <stdio.h>

typedef struct point
{
    int x, y;        // 점의 좌표
} POINT;

void print_point(POINT* pt);

int main(void)
{
    POINT arr[] = {
        {0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++){
        print_point(&arr[i]);     // 구조체 변수의 주소를 전달한다.
        printf(" ");
    }
    printf("\n");

    return 0;
}

void print_point(POINT* pt)        // 포인터에 의한 전달
{
    printf("(%d, %d)", pt->x, pt->y);
}
