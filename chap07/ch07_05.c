/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 339p ���� 7-5.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
#define ARR_SIZE 5
int exercise0705();
int add(int a, int b);


int main()
{
	exercise0705();
	return 0;
}

int exercise0705()
{
	int arr[ARR_SIZE] = { 0 };				// �迭 ��ü�� 0���� �ʱ�ȭ
	int i;
	
	arr[0] = 5;
	arr[1] = arr[0] + 10;					// �迭�� ���Ҹ� ���Ŀ� �̿��� �� �ִ�.
	arr[2] = add(arr[0], arr[1]);			// �Լ��� ���ڷ� ������ �� �ִ�.
	printf("������ 2�� �Է��ϼ��� : ");
	scanf_s("%d %d", &arr[3], &arr[4]);		// �迭�� ���ҿ� ���� �Է¹��� �� �ִ�.

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");

	return 0;
}

int add(int a, int b) 						// int���� �Ű������� ���� �Լ�
{
	return a + b;
}