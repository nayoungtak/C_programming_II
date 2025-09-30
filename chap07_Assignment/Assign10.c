/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment10 - 372p
* ���� : 3 X 3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.28
* ���� : v1.0
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
	
	printf("x ���:\n");
	print_matrix(x);
	printf("y ��� 2:\n");
	print_matrix(y);
	printf("x + y ���:\n");
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