/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 362p ���� 7-15.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
#define SIZE 7
int exercise0715();
void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);


int main()
{
	exercise0715();
	return 0;
}

int exercise0715()
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);

	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];			// �迭�� ���Ҹ� �����Ѵ�.
	}
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}