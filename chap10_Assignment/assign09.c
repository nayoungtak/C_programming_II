/*
* 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment09 - 567p
* 내용 : 
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.10.19
* 버전 : v1.0
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

	printf("제품명? ");
	scanf("%s", p1.name);
	printf("가격? ");
	scanf("%d", &p1.price);
	printf("재고? ");
	scanf("%d", &p1.stock);

	print_product(p1);

	return 0;
}


void print_product(Product p)
{
	printf("{%s %d원 재고:%d]\n", p.name, p.price, p.stock);
}