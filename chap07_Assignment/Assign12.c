/*
* 파일명: Core C Programming 2nd Edition Chap07 Programming Assignment12 - 373p
* 내용 : 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
* 		 예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상대를 출력한다.
*		 O이면 예매 가능, X이면 예매 불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.07.28
* 버전 : v1.0
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

		printf("예매할 좌석수? ");
		scanf_s("%d", &numOfSeat);


		int n = SeatReservation(seat, numOfSeat, reserved);
		if (n > 0) {
			for (int i = 0; i < n; i++)
			{
				printf("%d ", reserved[i]);
			}
			printf("좌석이 예약되었습니다!\n");
		}
	}
}

void SeeSeat(char seat[])
{
	printf("현재 좌석: [ ");
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