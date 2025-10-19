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

// 내용 : 3명 학생 정보 입력, 평균 기준 내림차순 정렬, 학점 부여 기능 포함

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 21
#define NUM_STUDENTS 3 // 관리할 학생 수

struct student {
	char name[NAME_SIZE];
	int kor_score;
	int math_score;
	int eng_score;
}; typedef struct student Student;

// 함수 프로토타입
int test03();
double get_average(const Student* s);
const char* get_grade(double average);
void sort_students(Student students[], int count);
void print_report(const Student students[], int count);


int main()
{
	test03();
	return 0;
}

int test03()
{
	Student class_list[NUM_STUDENTS] = "";

	printf("--- 학생 성적 정보 입력 ---\n");
	printf("총 %d명의 학생 정보를 입력합니다.\n", NUM_STUDENTS);

	// 학생 정보 입력 받기
	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("\n[%d번 학생] 이름? ", i + 1);
		scanf_s("%s", class_list[i].name, (unsigned)NAME_SIZE);

		printf("[%d번 학생] 국어 점수(정수)? ", i + 1);
		scanf_s("%d", &class_list[i].kor_score);

		printf("[%d번 학생] 수학 점수(정수)? ", i + 1);
		scanf_s("%d", &class_list[i].math_score);

		printf("[%d번 학생] 영어 점수(정수)? ", i + 1);
		scanf_s("%d", &class_list[i].eng_score);
	}

	// 평균 점수 기준 정렬
	sort_students(class_list, NUM_STUDENTS);

	// 최종 성적 보고서 출력
	print_report(class_list, NUM_STUDENTS);

	printf("--- 성적 처리를 완료했습니다. ---\n");
	return 0;
}

// 점수의 평균을 구하는 함수
double get_average(const Student* s)
{
	return (double)(s->kor_score + s->math_score + s->eng_score) / 3.0;
}

// 평균 점수를 기준으로 학점을 부여하는 함수
const char* get_grade(double average)
{
	if (average >= 90.0) return "A";
	else if (average >= 85.0) return "B+";
	else if (average >= 80.0) return "B";
	else if (average >= 75.0) return "C+";
	else if (average >= 70.0) return "C";
	else if (average >= 65.0) return "D+";
	else if (average >= 60.0) return "D";
	else return "F";
}

//평균 점수(get_average)를 기준으로 구조체 배열을 내림차순 정렬하는 함수.
void sort_students(Student students[], int count)
{
	Student temp;
	// 평균 점수 기준 내림차순 정렬
	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - 1 - i; j++) {
			if (get_average(&students[j]) < get_average(&students[j + 1])) {
				temp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temp;
			}
		}
	}
}

// 정렬된 학생 목록과 성적 보고서를 출력하는 함수.
void print_report(const Student students[], int count)
{
	printf("\n======================================================\n");
	printf("         [ 학생 성적 최종 보고서 (평균 순) ]\n");
	printf("======================================================\n");
	printf("%-5s %-15s %5s %5s %5s %7s %7s\n", "순위", "이름", "국어", "수학", "영어", "평균", "학점");
	printf("------------------------------------------------------\n");

	for (int i = 0; i < count; i++) {
		double avg = get_average(&students[i]);
		const char* grade = get_grade(avg);

		printf("%-5d %-15s %5d %5d %5d %7.1f %7s\n",
			i + 1,
			students[i].name,
			students[i].kor_score,
			students[i].math_score,
			students[i].eng_score,
			avg,
			grade);
	}
	printf("======================================================\n");
}

/*
*실행결과
--- 학생 성적 정보 입력 ---
총 3명의 학생 정보를 입력합니다.

[1번 학생] 이름? 나영탁
[1번 학생] 국어 점수(정수)? 80
[1번 학생] 수학 점수(정수)? 90
[1번 학생] 영어 점수(정수)? 95

[2번 학생] 이름? 영탁이
[2번 학생] 국어 점수(정수)? 89
[2번 학생] 수학 점수(정수)? 97
[2번 학생] 영어 점수(정수)? 87

[3번 학생] 이름? 영탁임
[3번 학생] 국어 점수(정수)? 60
[3번 학생] 수학 점수(정수)? 80
[3번 학생] 영어 점수(정수)? 46

======================================================
         [ 학생 성적 최종 보고서 (평균 순) ]
======================================================
순위  이름             국어  수학  영어    평균    학점
------------------------------------------------------
1     영탁이             89    97    87    91.0       A
2     나영탁             80    90    95    88.3      B+
3     영탁임             60    80    46    62.0       D
======================================================

--- 성적 처리를 완료했습니다. ---
*/