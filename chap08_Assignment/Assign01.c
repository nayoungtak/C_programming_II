/*
* ���ϸ�: Core C Programming 2nd Edition Chap08 Programming Assignment01 - 434p
* ���� : ũ�Ⱑ 3�� double�� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*		 ��, �ּ� ���ϱ� �����ڸ� ������� ���ÿ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.30
* ���� : v1.0
*/

#include <stdio.h>
int assign01();


int main()
{
	assign01();
	return 0;
}

int assign01()
{
	double x[3] = { 1.1, 2.2, 3.3 };
	double* p = x;
	for (int i = 0; i < 3; i++)
	{
		printf("x[%d]�� �ּ� %p\n", i, p + i);
	}
	return 0;
}