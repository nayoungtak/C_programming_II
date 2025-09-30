/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment01 - 370p
* ���� : ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
*		 ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
*		 ù ��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.28
* ���� : v1.0
*/

#include <stdio.h>
#define SIZE 10
int assign01();
void filling_ES(int* arr);
void print_ES(int* arr);


int main()
{
	assign01();
	return 0;
}

int assign01()
{
	int arr[SIZE];
	int* p = arr;
	filling_ES(p);
	print_ES(p);

	return 0;
}

void filling_ES(int* arr)
{
	int a = 0, d = 0;
	printf("ù ��° ��? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &d);
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = a + (i * d);
	}
}

void print_ES(int* arr)
{
	printf("��������: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}