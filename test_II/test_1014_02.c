/*
* 2)난이도가 비교적 낮은 문제를 하나 적고, 여기에 대한 코드를 설계, 구현하시오.
난이도가 비교적 <낮은> 문제를 하나 만들어 적고, 여기에 대한 코드를 설계, 구현하시오.

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

// 문제 : 학생의 이름, 국어 점수, 수학 점수, 영어 점수를 저장하고 평균을 계산, 출력하는 STUDENT 구조체 관리 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 21

// STUDENT 구조체 정의 및 typedef
struct student {
	char name[NAME_SIZE];
	int kor_score;
	int math_score;
	int eng_score;
}; typedef struct student Student;

int test02();
void print_student(const Student* s);
double get_average(const Student* s);


int main()
{
	test02();
	return 0;
}

int test02()
{
	Student s1;

	// 학생 정보 입력 받기
	printf("--- 학생 성적 정보 입력 ---\n");
	printf("이름 (최대 20글자)? ");
	scanf_s("%s", s1.name, (unsigned)NAME_SIZE);

	printf("국어 점수(정수)? ");
	scanf_s("%d", &s1.kor_score);

	printf("수학 점수(정수)? ");
	scanf_s("%d", &s1.math_score);

	printf("영어 점수(정수)? ");
	scanf_s("%d", &s1.eng_score);

	// 입력받은 정보 및 평균 출력 함수 호출
	print_student(&s1);

	return 0;
}

// 학생 정보를 출력하고 평균을 계산하는 함수
void print_student(const Student* s)
{
	printf("\n--- 학생 성적 정보 출력 ---\n");
	printf("이름: %s\n", s->name);
	printf("국어 점수: %d점\n", s->kor_score);
	printf("수학 점수: %d점\n", s->math_score);
	printf("영어 점수: %d점\n", s->eng_score);
	// 소수점 첫째 자리까지 평균 출력
	printf("평균 점수: %.1f점\n", get_average(s));
	printf("---------------------------\n");
}

double get_average(const Student* s)	// 평균 계산
{
	return (double)(s->kor_score + s->math_score + s->eng_score) / 3.0;
}

/*
* 실행결과
--- 학생 성적 정보 입력 ---
이름 (최대 20글자)? 나영탁
국어 점수(정수)? 70
수학 점수(정수)? 90
영어 점수(정수)? 80

--- 학생 성적 정보 출력 ---
이름: 나영탁
국어 점수: 70점
수학 점수: 90점
영어 점수: 80점
평균 점수: 80.0점
---------------------------
*/