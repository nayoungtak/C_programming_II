/*
* ���ϸ�: Core C Programming 2nd Edition Chap07 Programming Assignment12 - 373p
* ���� : ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
* 		 ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ��븦 ����Ѵ�.
*		 O�̸� ���� ����, X�̸� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.07.28
* ���� : v1.0
*/

#include <stdio.h>
#define SEATNUM 10

void assign12(void);
void SeeSeat(char seat[]);
int  SeatReservation(char seat[], int numOfSeat, int reservedList[]);


int main(void)
{
	assign12();

	return 0;
}

void assign12(void)
{
	char seat[SEATNUM] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int reserved[SEATNUM] = { 0 };

	while (1)
	{
		int allReserved = 1;
		for (int i = 0; i < SEATNUM; i++) {
			if (seat[i] == 'O') {
				allReserved = 0;
				break;
			}
		}

		if (allReserved)
		{
			break;
		}
		int numOfSeat = 0;

		SeeSeat(seat);

		printf("������ �¼���? ");
		scanf_s("%d", &numOfSeat);


		int n = SeatReservation(seat, numOfSeat, reserved);
		if (n > 0) {
			for (int i = 0; i < n; i++)
			{
				printf("%d ", reserved[i]);
			}
			printf("�¼��� ����Ǿ����ϴ�!\n");
		}
	}
}

void SeeSeat(char seat[])
{
	printf("���� �¼�: [ ");
	for (int i = 0; i < SEATNUM; i++)
	{
		printf("%c ", seat[i]);
	}
	printf("]\n");
}

int  SeatReservation(char seat[], int numOfSeat, int reservedList[])
{
	int count = 0;

	for (int i = 0; i < SEATNUM && count < numOfSeat; i++)
	{
		if (seat[i] == 'O')
		{
			seat[i] = 'X';

			reservedList[count++] = i + 1;
		}
	}

	return count;
}