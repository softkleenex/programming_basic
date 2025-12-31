/*******************************************************************
 * Lab 10. 구조체
 * - 이메일을 표현할 수 있는 구조체 정의
 *
 ******************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct 
{
    char title[50];
    char receiver[50];
    char sender[50];
    char content[100];
    char date[20];
    int priority;
}Email;

void print_email(Email e)
{
    printf("---------------------------------\n");
    printf("Title: %s\n", e.title);
    printf("Receiver: %s\n", e.receiver);
    printf("Sender: %s\n", e.sender);
    printf("Contents: %s\n", e.content);
    printf("Date: %s\n", e.date);
    printf("Priority: %d\n", e.priority);
    printf("---------------------------------\n");
}

int main(void)
{
    Email email;
    char *domain = "@knu.ac.kr";

    memset(&email, 0, sizeof(Email)); // 구조체 변수 메모리 초기화 

    printf("Input email data \n");
    printf("Title: "); // fgets()로 입력 받음
    fgets(email.title, sizeof(email.title), stdin);
    email.title[strlen(email.title) - 1] = '\0';

    printf("Receiver: ");
    scanf("%s", email.receiver);
    strncat(email.receiver, domain, strlen(domain));

    printf("Sender: ");
    scanf("%s", email.sender);  // @knu.ac.kr을 자동으로 추가
    strncat(email.sender, domain, strlen(domain));
    getchar(); // 다음 화면 입력은 fgets()로 받기 때문에 '\n' 미리 제거함 

    printf("Contents: ");
    fgets(email.content, sizeof(email.content), stdin);
    email.content[strlen(email.content) - 1] = '\0';

    printf("Date: ");
    scanf("%s", email.date);

    printf("Priority(0: Urgent, 1: Normal): ");
    scanf("%d", &email.priority);
    
    print_email(email);
    return 0;
}