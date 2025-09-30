
#include <stdio.h>
#include "point.h"


int main()
{
	test_point();

	return 0;
}

int test_point()
{
	Point p1 = { 1,2 };
	Point p2 = { 3,4 };

	Point p3 = { 0 };
	p3 = mul10(p1);
	// swap(&p1, &p2);

	return 0;
}

void* swap(Point* pa, Point* pb)
{
	if (pa == NULL || pb == NULL) {
		return NULL;
	}
	Point temp = *pa;
	*pa = *pb;
	*pb = temp;

	return pa;
}

Point mul10(Point pt)
{
	Point pr = { 0 };
	pr.x *= 10;
	pr.y += 10;
	
	return pr;
}
