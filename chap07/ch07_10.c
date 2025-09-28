/*
* 학번 : 202511216
* 이름 : 나영탁
* 프로그램 명 : 347p 예제 7-10.c
* 날짜 : 2023.09.27
*/

#include <stdio.h>
int exercise0710();


int main()
{
	exercise0710();
	return 0;
}

int exercise0710()
{
	int data[] = { 78,34,52,15,63,15,25 };
	int size;
	int key, i;
	int found;			// 탐색이 성공하면 1, 실패하면 0

	size = sizeof(data) / sizeof(data[0]);
	printf("arr = ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");

	printf("찾을 값(키)? ");
	scanf_s("%d", &key);
	found = 0;
	for (i = 0; i < size; i++)
	{
		if (data[i] == key)
		{
			found = 1;
			break;		// 탐색 성공시 for 탈출
		}
	}

	if (found == 1)
	{
		printf("찾은 원소의 인덱스: %d\n", i);
	}
	else
	{
		printf("탐색 실패.\n");
	}

	return 0;
}