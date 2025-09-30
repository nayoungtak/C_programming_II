/*
* 파일명: Core C Programming 2nd Edition Chap08 Programming Assignment11 - 437p
* 내용 : 직사각형의 넓이와 둘레를 구하는 get_rect_info() 함수를 작성하시오.
*		 직사각형의 가로, 세로의 길이를 입력받아 다음 get_rect_info() 함수를 이용해서 직사각형의 넓이와 둘레를 구하고 출력하는 프로그램을 작성하시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.09.30
* 버전 : v1.0
*/

#include <stdio.h>
int assign11();
int get_rect_info(int* width, int* height, int AC[]);

int main()
{
	assign11();
	return 0;
}

int assign11()
{
	int width = 0, height = 0;
	int AC[2] = { 0,0 };

	int* w = &width;
	int* h = &height;

	printf("가로? ");
	scanf_s("%d", &width);
	printf("세로? ");
	scanf_s("%d", &height);

	get_rect_info(w, h, AC);
	
	printf("넓이 : %d, 둘레 : %d\n", AC[0], AC[1]);

	return 0;
}

int get_rect_info(int* width, int* height,int AC[])
{
	AC[0] = (*width) * (*height);
	AC[1] = 2 * ((*width) + (*height));
	return 0;
}