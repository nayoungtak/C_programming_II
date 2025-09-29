/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment09 - 372p
* ���� : 1~12�������� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 12������ �ڵ��� ����� ����ִ� �迭�� Ư�� ������ �ʱ�ȭ�ؼ� ����ϰ�, �ڵ��� ��� 2000�� �� '*'�� �ϳ��� ���� �׷����� ����Ѵ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.07.28
* ���� : v1.0
*/

#include <stdio.h>
#define SIZE 12
void print_graph(int* arr);
int assign09();

int main()
{
	assign09();
	return 0;
}

int assign09()
{
	int arr[SIZE] = { 36000, 42000, 38000, 8000, 15000, 20000, 30000, 25000, 40000, 5000, 7000, 65000 };
	int* p = arr;
	print_graph(p);
	return 0;
}

void print_graph(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d�� %5d: ", i + 1, arr[i]);
		for (int j = 0; j < arr[i] / 2000; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
