/*
* 2)난이도가 비교적 중간인 문제를 하나 적고, 여기에 대한 코드를 설계, 구현하시오.
난이도가 비교적 <중간> 문제를 하나 만들어 적고, 여기에 대한 코드를 설계, 구현하시오.

제출 : 문제 + 코드 + 실행결과

<참조 : 코드 설계 구현 시험 과정>
1. 문제 작성하기
	- 문제는 교재의 예제, 연습문제, 프로그램 과제 등에서 참조하여 유사한 문제를 스스로 만들기
2. 문제를 분석
	- 문제를 분석하여 단위 문제로 쪼개기
	- 각 단위문제별 함수(코드) 작성 후
	- 주어진 문제를 해결하는 코드 작성
3. 구현 코드 작성
	- 가급적 함수를 사용하여 간결하고 가독성 있게 코드를 작성하기
4. 테스트 코드 작성
	- 테스트 함수를 짜서 함수가 잘 동작하는지 확인하는 코드 작성
5. 실행
	- 실행 결과를 복사하여 붙이기
*/

// 문제 : 도서 정보를 입력받고, 최고가 도서를 찾아 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5 // 최대 관리할 수 있는 도서 수
#define TITLE_SIZE 51 // 도서 제목 최대 50자
#define AUTHOR_SIZE 31 // 저자 이름 최대 30자

// 데이터 구조체 정의
struct book {
	char title[TITLE_SIZE];   // 도서 제목
	char author[AUTHOR_SIZE]; // 저자 이름
	int price;                // 도서 가격
}; typedef struct book Book;

int input_books(Book books[], int max_count);
void find_most_expensive(const Book books[], int count);
int test03();


int main()
{
	test03();
	return 0;
}

int test03()
{
	Book library[MAX_BOOKS];
	int actual_count;

	printf("----- 도서 목록 관리 시스템 (최고가 탐색) -----\n");
	printf("- 최대 %d권의 도서 정보를 입력할 수 있습니다. -\n", MAX_BOOKS);
	printf("(도서 제목에 'stop' 입력 시 입력을 종료합니다.)\n");

	// 도서 정보 입력 받기
	actual_count = input_books(library, MAX_BOOKS);

	if (actual_count == 0) {
		printf("\n입력된 도서가 없습니다. 프로그램을 종료합니다.\n");
		return 0;
	}

	printf("\n--- 분석 시작 (총 %d권의 도서) ---\n", actual_count);

	// 가장 비싼 도서 찾기 및 출력
	find_most_expensive(library, actual_count);

	return 0;
}

// 도서 정보를 입력받는 함수
int input_books(Book books[], int max_count)
{
	int i;
	for (i = 0; i < max_count; i++) {
		printf("\n[%d번 도서] 제목 (종료:'stop')? ", i + 1);
		scanf_s("%s", books[i].title, (unsigned)TITLE_SIZE);

		// 입력 종료 조건 확인
		if (strcmp(books[i].title, "stop") == 0) {
			break;
		}


		printf("[%d번 도서] 저자? ", i + 1);
		scanf_s("%s", books[i].author, (unsigned)AUTHOR_SIZE);

		printf("[%d번 도서] 가격 (정수)? ", i + 1);
		if (scanf_s("%d", &books[i].price) != 1) {
			printf("[오류] 가격 입력이 잘못되었습니다. 해당 도서 입력을 건너뜁니다.\n");
			while (getchar() != '\n');
			continue;
		}
	}
	// 실제로 입력된 도서의 총 개수를 반환합니다.
	return i;
}

// 가장 비싼 도서의 정보를 찾아 출력하는 함수
void find_most_expensive(const Book books[], int count)
{
	int max_price = -1;
	int max_index = -1;

	// 최고가 도서 인덱스 찾기
	for (int i = 0; i < count; i++) {
		if (books[i].price > max_price) {
			max_price = books[i].price;
			max_index = i;
		}
	}

	printf("\n--------------------------------------------------\n");
	printf("1. 가장 비싼 도서 (%d원)\n", max_price);
	if (max_index != -1) {
		printf("   - 제목: %s (저자: %s)\n",
			books[max_index].title, books[max_index].author);
	}
	else {
		printf("   - (도서 정보를 찾을 수 없습니다.)\n");
	}
	printf("--------------------------------------------------\n");
}

/*
* 실행결과
----- 도서 목록 관리 시스템 (최고가 탐색) -----
- 최대 5권의 도서 정보를 입력할 수 있습니다. -
(도서 제목에 'stop' 입력 시 입력을 종료합니다.)

[1번 도서] 제목 (종료:'stop')? 어린왕자
[1번 도서] 저자? 생텍쥐페리
[1번 도서] 가격 (정수)? 5500

[2번 도서] 제목 (종료:'stop')? coreC
[2번 도서] 저자? 천정아
[2번 도서] 가격 (정수)? 29000

[3번 도서] 제목 (종료:'stop')? stop

--- 분석 시작 (총 2권의 도서) ---

--------------------------------------------------
1. 가장 비싼 도서 (29000원)
   - 제목: coreC (저자: 천정아)
--------------------------------------------------
*/
