/*
* �й� : 202511216
* �̸� : ����Ź
* ���α׷� �� : 404p ���� 8-8.c
* ��¥ : 2023.09.30
*/

#include <stdio.h>
int exercise0808();


int main(void)
{
	exercise0808();

	return 0;
}

int exercise0808()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];					// arr[0]�� �ּҸ� p�� �����Ѵ�.
	int i;

	for (i = 0; i < 5; i++, p++)		// p�� &arr[0]~&arr[4]�� ���� �ȴ�.
	{
		printf("p = %p, ", p);			// p�� ����Ű�� ���Ұ� ��� �ٲ��.
		printf("*p = %d\n", *p);		// p�� �������ϴ� ���ҵ� ��� �ٲ��.
	}
	return 0;
}