/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment02 - 370p
* ���� : �������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�.
* 		 ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� �������� ���� ä����� �Ѵ�.
* 		 ù ��° ���� ���� ���� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.28
* ���� : v1.0
*/

#include <stdio.h>
#define SIZE 10
void filling_ES(int* arr);
void print_ES(int* arr);
int assign02();


int main()
{
	assign02();
	return 0;
}

int assign02()
{
	double arr[SIZE];
	double* p = arr;
	filling_ES(p);
	print_ES(p);
	return 0;
}

void filling_ES(double* arr)
{
	double a = 0, r = 0;
	printf("ù ��° ��? ");
	scanf_s("%lf", &a);
	printf("����? ");
	scanf_s("%lf", &r);
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = a;
		a *= r;
	}
}

void print_ES(double* arr)
{
	printf("������: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
}