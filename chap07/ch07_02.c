/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 333p ���� 7-2.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
#define ARR_SIZE 5					// �迭�� ũ��� ����� ��ũ�� ����� ����
int exercise0702();


int main()
{
	exercise0702();

	return 0;
}

int exercise0702()
{
	int arr[ARR_SIZE];				// �迭�� ũ�⸦ ��ũ�� ����� ������ �� �ִ�.
	int i;

	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE�� �̿�
	{
		arr[i] = 0;
	}

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)	// �迭�� ũ�Ⱑ �ʿ��ϸ� ARR_SIZE�� �̿�
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}