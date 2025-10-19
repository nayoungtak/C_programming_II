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

// ���� : ���� ������ �Է¹ް�, �ְ� ������ ã�� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5 // �ִ� ������ �� �ִ� ���� ��
#define TITLE_SIZE 51 // ���� ���� �ִ� 50��
#define AUTHOR_SIZE 31 // ���� �̸� �ִ� 30��

// ������ ����ü ����
struct book {
	char title[TITLE_SIZE];   // ���� ����
	char author[AUTHOR_SIZE]; // ���� �̸�
	int price;                // ���� ����
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

	printf("----- ���� ��� ���� �ý��� (�ְ� Ž��) -----\n");
	printf("- �ִ� %d���� ���� ������ �Է��� �� �ֽ��ϴ�. -\n", MAX_BOOKS);
	printf("(���� ���� 'stop' �Է� �� �Է��� �����մϴ�.)\n");

	// ���� ���� �Է� �ޱ�
	actual_count = input_books(library, MAX_BOOKS);

	if (actual_count == 0) {
		printf("\n�Էµ� ������ �����ϴ�. ���α׷��� �����մϴ�.\n");
		return 0;
	}

	printf("\n--- �м� ���� (�� %d���� ����) ---\n", actual_count);

	// ���� ��� ���� ã�� �� ���
	find_most_expensive(library, actual_count);

	return 0;
}

// ���� ������ �Է¹޴� �Լ�
int input_books(Book books[], int max_count)
{
	int i;
	for (i = 0; i < max_count; i++) {
		printf("\n[%d�� ����] ���� (����:'stop')? ", i + 1);
		scanf_s("%s", books[i].title, (unsigned)TITLE_SIZE);

		// �Է� ���� ���� Ȯ��
		if (strcmp(books[i].title, "stop") == 0) {
			break;
		}

		printf("[%d�� ����] ����? ", i + 1);
		scanf_s("%s", books[i].author, (unsigned)AUTHOR_SIZE);

		printf("[%d�� ����] ���� (����)? ", i + 1);
		if (scanf_s("%d", &books[i].price) != 1) {
			printf("[����] ���� �Է��� �߸��Ǿ����ϴ�. �ش� ���� �Է��� �ǳʶݴϴ�.\n");
			while (getchar() != '\n');
			continue;
		}
	}
	// ������ �Էµ� ������ �� ������ ��ȯ�մϴ�.
	return i;
}

// ���� ��� ������ ������ ã�� ����ϴ� �Լ�
void find_most_expensive(const Book books[], int count)
{
	int max_price = -1;
	int max_index = -1;

	// �ְ� ���� �ε��� ã��
	for (int i = 0; i < count; i++) {
		if (books[i].price > max_price) {
			max_price = books[i].price;
			max_index = i;
		}
	}

	printf("\n--------------------------------------------------\n");
	printf("1. ���� ��� ���� (%d��)\n", max_price);
	if (max_index != -1) {
		printf("   - ����: %s (����: %s)\n",
			books[max_index].title, books[max_index].author);
	}
	else {
		printf("   - (���� ������ ã�� �� �����ϴ�.)\n");
	}
	printf("--------------------------------------------------\n");
}

/*
* ������
----- ���� ��� ���� �ý��� (�ְ� Ž��) -----
- �ִ� 5���� ���� ������ �Է��� �� �ֽ��ϴ�. -
(���� ���� 'stop' �Է� �� �Է��� �����մϴ�.)

[1�� ����] ���� (����:'stop')? �����
[1�� ����] ����? �������丮
[1�� ����] ���� (����)? 5500

[2�� ����] ���� (����:'stop')? coreC
[2�� ����] ����? õ����
[2�� ����] ���� (����)? 29000

[3�� ����] ���� (����:'stop')? stop

--- �м� ���� (�� 2���� ����) ---

--------------------------------------------------
1. ���� ��� ���� (29000��)
   - ����: coreC (����: õ����)
--------------------------------------------------
*/
