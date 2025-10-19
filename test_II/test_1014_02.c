/*
* 2)���̵��� ���� ���� ������ �ϳ� ����, ���⿡ ���� �ڵ带 ����, �����Ͻÿ�.
���̵��� ���� <����> ������ �ϳ� ����� ����, ���⿡ ���� �ڵ带 ����, �����Ͻÿ�.

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

// ���� : �л��� �̸�, ���� ����, ���� ����, ���� ������ �����ϰ� ����� ���, ����ϴ� STUDENT ����ü ���� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 21

// STUDENT ����ü ���� �� typedef
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

	// �л� ���� �Է� �ޱ�
	printf("--- �л� ���� ���� �Է� ---\n");
	printf("�̸� (�ִ� 20����)? ");
	scanf_s("%s", s1.name, (unsigned)NAME_SIZE);

	printf("���� ����(����)? ");
	scanf_s("%d", &s1.kor_score);

	printf("���� ����(����)? ");
	scanf_s("%d", &s1.math_score);

	printf("���� ����(����)? ");
	scanf_s("%d", &s1.eng_score);

	// �Է¹��� ���� �� ��� ��� �Լ� ȣ��
	print_student(&s1);

	return 0;
}

// �л� ������ ����ϰ� ����� ����ϴ� �Լ�
void print_student(const Student* s)
{
	printf("\n--- �л� ���� ���� ��� ---\n");
	printf("�̸�: %s\n", s->name);
	printf("���� ����: %d��\n", s->kor_score);
	printf("���� ����: %d��\n", s->math_score);
	printf("���� ����: %d��\n", s->eng_score);
	// �Ҽ��� ù° �ڸ����� ��� ���
	printf("��� ����: %.1f��\n", get_average(s));
	printf("---------------------------\n");
}

double get_average(const Student* s)	// ��� ���
{
	return (double)(s->kor_score + s->math_score + s->eng_score) / 3.0;
}

/*
* ������
--- �л� ���� ���� �Է� ---
�̸� (�ִ� 20����)? ����Ź
���� ����(����)? 70
���� ����(����)? 90
���� ����(����)? 80

--- �л� ���� ���� ��� ---
�̸�: ����Ź
���� ����: 70��
���� ����: 90��
���� ����: 80��
��� ����: 80.0��
---------------------------
*/