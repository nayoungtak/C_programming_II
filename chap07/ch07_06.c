/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 341p ���� 7-6.c
* ��¥ : 2023.09.27
*/

#include <stdio.h>
int exercise0706();


int main()
{
	exercise0706();
	return 0;
}

int exercise0706()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	//printf("arr[5] = %d\n", arr[5]);		// �Ҵ���� ���� �޸𸮸� �о�´�.
	//arr[5] = 100;							// �Ҵ���� ���� �޸𸮸� �����Ѵ�. (���� ����)

	return 0;
}