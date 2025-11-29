/*
* 파일명: Core C Programming 2nd Edition Chap12 Programming Assignment04 - 702p
* 내용 : 아이디와 패스워드가 저장된 텍스트 파일을 크기가 10인 LOGIN 구조체 배열로 읽어온 다음,
         입력 받은 아이디와 패스워드가 일치하면 "로그인 성공" 아니면 "로그인 실패"라고 출력하는 프로그램을 작성하시오.
* 학번 : 202511216
* 작성자 : 나영탁
* 날짜 : 2025.11.10
* 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_USERS 10
#define MAX_STR 100

typedef struct  {
    char ID[MAX_STR];
    char PW[MAX_STR];
} Login;

int load_users(Login* users, int max_users, const char* filename);
void process_logins(const Login* users, int user_count);
int find_user_index(const Login* users, int user_count, const char* id);


int main()
{
    Login users[MAX_USERS];
    int user_count = 0;

    user_count = load_users(users, MAX_USERS, "password.txt");

    if (user_count == -1) {
        return 1;
    }

    process_logins(users, user_count);

    return 0;
}

int load_users(Login* users, int max_users, const char* filename)
{
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("'%s' 파일을 열 수 없습니다.\n", filename);
        return -1;
    }

    int count = 0;

    while (count < max_users &&
        fscanf(fp, "%s %s", users[count].ID, users[count].PW) == 2) {
        count++;
    }

    fclose(fp);
    return count;
}

void process_logins(const Login* users, int user_count)
{
    char check_id[MAX_STR];
    char check_pw[MAX_STR];

    while (1) {
        printf("ID? ");
        scanf("%s", check_id);

        if (strcmp(check_id, ".") == 0) {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        int found_index = find_user_index(users, user_count, check_id);

        if (found_index == -1) {
            printf("아이디를 찾을 수 없습니다.\n");
        }
        else {
            printf("Password? ");
            scanf("%s", check_pw);

            if (strcmp(check_pw, users[found_index].PW) == 0) {
                printf("로그인 성공\n");
            }
            else {
                printf("로그인 실패\n");
            }
            printf("\n");
        }
    }
}

int find_user_index(const Login* users, int user_count, const char* id)
{
    for (int i = 0; i < user_count; i++) {
        if (strcmp(id, users[i].ID) == 0) {
            return i;
        }
    }
    return -1;
}
