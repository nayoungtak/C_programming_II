/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 550p ���� 10-14.c
* ��¥ : 2023.10.17
*/


#include <stdio.h>

enum dircetion { NORTH, SOUTH, EAST, WEST };


int main()
{
	enum dircetion d1 = NORTH;			// ����ü ���� ����

	d1 = EAST;							// ����ü ������ ���� ����� �����Ѵ�.
	printf("d1 = %d\n", d1);			// 2�� ��µȴ�.

	switch (d1)
	{
	case NORTH:							// ���� ����� case���� ����� �� �ִ�.
		printf("�������� �̵��մϴ�.\n");
		break;
	case SOUTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case EAST:
		printf("�������� �̵��մϴ�.\n");
		break;
	case WEST:
		printf("�������� �̵��մϴ�.\n");
		break;
	}

	return 0;
}