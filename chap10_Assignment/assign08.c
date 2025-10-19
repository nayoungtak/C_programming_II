/*
* 파일명: Core C Programming 2nd Edition Chap10 Programming Assignment08 - 567p
* 내용 : 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
*		 각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다.
*		 PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오.
*		 PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
*		 참고로 제품명은 빈칸 없는 한 단어로 입력한다.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.10.15
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
int assign08(void);


int main(void)
{
	assign08();

	return 0;
}

int assign08(void)
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