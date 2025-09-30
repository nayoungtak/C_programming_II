/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment10 - 372p
* 내용 : 3 X 3 행렬의 합을 구하는 프로그램을 작성하시오.
*		 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.09.28
* 버전 : v1.0
*/

#include <stdio.h>
#define SIZE 3
void matrix_sum(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int result[SIZE][SIZE]);
int assign10();
void print_matrix(int arr[SIZE][SIZE]);

int main()
{
	assign10();
	return 0;
}

int assign10()
{
	int x[SIZE][SIZE] = { {10,20,30}, {40,50,60}, {70,80,90} };
	int y[SIZE][SIZE] = { {9,8,7}, {6,5,4}, {3,2,1} };
	int xy[SIZE][SIZE] = { 0 };
	
	matrix_sum(x, y, xy);
	
	printf("x 행렬:\n");
	print_matrix(x);
	printf("y 행렬 2:\n");
	print_matrix(y);
	printf("x + y 행렬:\n");
	print_matrix(xy);
	return 0;
}

void matrix_sum(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int result[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void print_matrix(int arr[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}