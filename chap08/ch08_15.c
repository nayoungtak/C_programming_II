/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 425p ���� 8-15.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
#define SIZE 10
int exercise0814();
void copy_array(const int source[], int target[], int size);
void print_array(const int arr[], int size);


int main(void)
{
	exercise0814();

	return 0;
}

int exercise0814()
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE];

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, SIZE);
	printf("y = ");
	print_array(y, SIZE);

	return 0;
}

void copy_array(const int source[], int target[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		target[i] = source[i];
	}
}

void print_array(const int arr[], int size)		// arr�� �Է� �Ű�����
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	} printf("\n");
}