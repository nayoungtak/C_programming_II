/*
* ���ϸ�: Core C Programming 2nd Edition Chap10 Programming Assignment09 - 567p
* ���� : 
* �й� : 202511216
* �ۼ��� : ����Ź
* ��¥ : 2025.10.19
* ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct product
{
	char name[21];
	int price;
	int stock;
};
typedef struct product Product;

void print_product(Product p);
int assign09(void);


int main()
{
	assign09();

	return 0;
}

int assign09(void)
{
	Product p1 = { "0", 0, 0 };

	printf("��ǰ��? ");
	scanf("%s", p1.name);
	printf("����? ");
	scanf("%d", &p1.price);
	printf("���? ");
	scanf("%d", &p1.stock);

	print_product(p1);

	return 0;
}


void print_product(Product p)
{
	printf("{%s %d�� ���:%d]\n", p.name, p.price, p.stock);
}