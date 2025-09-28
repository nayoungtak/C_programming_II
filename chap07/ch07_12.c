/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 355p 예제 7-12.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
#define ROW 3
#define COL 2
int exercise0712();


int main()
{
	exercise0712();
	return 0;
}

int exercise0712()
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++)		// 행 인덱스를 증가시킨다.
	{
		for (j = 0; j < COL; j++)			// 열 인덱스를 증가시킨다.
		{
			data[i][j] = ++k;				// 배열의 원소에 0부터 1씩 커지는 값을 저장한다.
		}
	}

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%3d ", data[i][j]);
		}
		printf("\n");						// 행마다 줄바꿈 문자를 출력한다.
	}

	printf("sizeof(data) = %d\n", sizeof(data));
	printf("sizeof(data[0]) = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));

	return 0;
}