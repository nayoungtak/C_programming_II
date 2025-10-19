/*
* 2)���̵��� ���� �߰��� ������ �ϳ� ����, ���⿡ ���� �ڵ带 ����, �����Ͻÿ�.
���̵��� ���� <�߰�> ������ �ϳ� ����� ����, ���⿡ ���� �ڵ带 ����, �����Ͻÿ�.

���� : ���� + �ڵ� + ������

<���� : �ڵ� ���� ���� ���� ����>
1. ���� �ۼ��ϱ�
	- ������ ������ ����, ��������, ���α׷� ���� ��� �����Ͽ� ������ ������ ������ �����
2. ������ �м�
	- ������ �м��Ͽ� ���� ������ �ɰ���
	- �� ���������� �Լ�(�ڵ�) �ۼ� ��
	- �־��� ������ �ذ��ϴ� �ڵ� �ۼ�
3. ���� �ڵ� �ۼ�
	- ������ �Լ��� ����Ͽ� �����ϰ� ������ �ְ� �ڵ带 �ۼ��ϱ�
4. �׽�Ʈ �ڵ� �ۼ�
	- �׽�Ʈ �Լ��� ¥�� �Լ��� �� �����ϴ��� Ȯ���ϴ� �ڵ� �ۼ�
5. ����
	- ���� ����� �����Ͽ� ���̱�
*/

// ���� : 3�� �л� ���� �Է�, ��� ���� �������� ����, ���� �ο� ��� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 21
#define NUM_STUDENTS 3 // ������ �л� ��

struct student {
	char name[NAME_SIZE];
	int kor_score;
	int math_score;
	int eng_score;
}; typedef struct student Student;

// �Լ� ������Ÿ��
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

	printf("--- �л� ���� ���� �Է� ---\n");
	printf("�� %d���� �л� ������ �Է��մϴ�.\n", NUM_STUDENTS);

	// �л� ���� �Է� �ޱ�
	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("\n[%d�� �л�] �̸�? ", i + 1);
		scanf_s("%s", class_list[i].name, (unsigned)NAME_SIZE);

		printf("[%d�� �л�] ���� ����(����)? ", i + 1);
		scanf_s("%d", &class_list[i].kor_score);

		printf("[%d�� �л�] ���� ����(����)? ", i + 1);
		scanf_s("%d", &class_list[i].math_score);

		printf("[%d�� �л�] ���� ����(����)? ", i + 1);
		scanf_s("%d", &class_list[i].eng_score);
	}

	// ��� ���� ���� ����
	sort_students(class_list, NUM_STUDENTS);

	// ���� ���� ���� ���
	print_report(class_list, NUM_STUDENTS);

	printf("--- ���� ó���� �Ϸ��߽��ϴ�. ---\n");
	return 0;
}

// ������ ����� ���ϴ� �Լ�
double get_average(const Student* s)
{
	return (double)(s->kor_score + s->math_score + s->eng_score) / 3.0;
}

// ��� ������ �������� ������ �ο��ϴ� �Լ�
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

//��� ����(get_average)�� �������� ����ü �迭�� �������� �����ϴ� �Լ�.
void sort_students(Student students[], int count)
{
	Student temp;
	// ��� ���� ���� �������� ����
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

// ���ĵ� �л� ��ϰ� ���� ������ ����ϴ� �Լ�.
void print_report(const Student students[], int count)
{
	printf("\n======================================================\n");
	printf("         [ �л� ���� ���� ���� (��� ��) ]\n");
	printf("======================================================\n");
	printf("%-5s %-15s %5s %5s %5s %7s %7s\n", "����", "�̸�", "����", "����", "����", "���", "����");
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
*������
--- �л� ���� ���� �Է� ---
�� 3���� �л� ������ �Է��մϴ�.

[1�� �л�] �̸�? ����Ź
[1�� �л�] ���� ����(����)? 80
[1�� �л�] ���� ����(����)? 90
[1�� �л�] ���� ����(����)? 95

[2�� �л�] �̸�? ��Ź��
[2�� �л�] ���� ����(����)? 89
[2�� �л�] ���� ����(����)? 97
[2�� �л�] ���� ����(����)? 87

[3�� �л�] �̸�? ��Ź��
[3�� �л�] ���� ����(����)? 60
[3�� �л�] ���� ����(����)? 80
[3�� �л�] ���� ����(����)? 46

======================================================
         [ �л� ���� ���� ���� (��� ��) ]
======================================================
����  �̸�             ����  ����  ����    ���    ����
------------------------------------------------------
1     ��Ź��             89    97    87    91.0       A
2     ����Ź             80    90    95    88.3      B+
3     ��Ź��             60    80    46    62.0       D
======================================================

--- ���� ó���� �Ϸ��߽��ϴ�. ---
*/