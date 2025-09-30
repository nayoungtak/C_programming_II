#pragma once
typedef struct point {
	int x;
	int y;
} Point;

int test_point();
void* swap(Point* pa, Point* pb);
Point mul10(Point pt);