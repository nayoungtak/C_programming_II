/*
* ���ϸ�: Core C Programming 2nd Edition Chap08 Programming Assignment11 - 437p
* ���� : ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info() �Լ��� �ۼ��Ͻÿ�.
*		 ���簢���� ����, ������ ���̸� �Է¹޾� ���� get_rect_info() �Լ��� �̿��ؼ� ���簢���� ���̿� �ѷ��� ���ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.09.30
* ���� : v1.0
*/

#include <stdio.h>
int assign11();
int get_rect_info(int* width, int* height, int AC[]);

int main()
{
	assign11();
	return 0;
}

int assign11()
{
	int width = 0, height = 0;
	int AC[2] = { 0,0 };

	int* w = &width;
	int* h = &height;

	printf("����? ");
	scanf_s("%d", &width);
	printf("����? ");
	scanf_s("%d", &height);

	get_rect_info(w, h, AC);
	
	printf("���� : %d, �ѷ� : %d\n", AC[0], AC[1]);

	return 0;
}

int get_rect_info(int* width, int* height,int AC[])
{
	AC[0] = (*width) * (*height);
	AC[1] = 2 * ((*width) + (*height));
	return 0;
}