/*
* ���ϸ�: Core C Programming 2nd Edition Chap08 Programming Assignment04 - 434p
* ���� : �迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �Ǽ��� �迭�� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 �Ǽ��� �迭�� ũ�Ⱑ 10�̰� ������� �ʱ�ȭ�ؼ� ����Ѵ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.30
* ���� : v1.0
*/

#include <stdio.h>
#define SIZE 10
int assign04();


int main()
{
	assign04();
	return 0;
}

int assign04()
{
	double arr[SIZE] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* p = arr;
	double sum = 0.0;

	printf("�迭 :");
	for (int i = 0; i < SIZE; i++)
	{
		sum += *(p + i);
		printf(" %.2lf ", *(p + i));
	} printf("\n");

	printf("��� : %lf\n", sum / SIZE);
	
	return 0;
}