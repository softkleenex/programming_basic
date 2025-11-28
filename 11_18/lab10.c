// 2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

typedef struct
{
    char title[50];
    char receiver[50];
    char sender[50];
    char content[100];
    char date[20];
    int priority;
} Email;

void print_email(Email email)
{
    printf("---------------------------------\n");
    printf("TItle: %s\n", email.title);
    printf("Receiver: %s\n", email.receiver);
    printf("Sender: %s\n", email.sender);
    printf("Content: %s\n", email.content);
    printf("Date: %s\n", email.date);
    printf("priority: %d\n", email.priority);
    printf("---------------------------------\n");
}

int main()
{
    srand(time(NULL));

    Email email;
    memset(&email, 0, sizeof(Email));

    printf("Input email data\n");

    printf("TItle: ");
    fgets(email.title, 50, stdin);
    email.title[strlen(email.title) - 1] = '\0';

    printf("Receiver: ");
    scanf("%s", email.receiver);
    strcat(email.receiver, "@knu.ac.kr");

    getchar();

    printf("Sender: ");
    fgets(email.sender, 50, stdin);
    email.sender[strlen(email.sender) - 1] = '\0';
    strcat(email.sender, "@knu.ac.kr");
    

    printf("Content: ");
    fgets(email.content, 50, stdin);
     email.content[strlen(email.content) - 1] = '\0';
   
    printf("Date: ");
    fgets(email.date, 50, stdin);
     email.date[strlen(email.date) - 1] = '\0';


    printf("priority: (0: Urgent, 1: Normal): ");

    scanf("%d", &email.priority);
    print_email(email);

    return 0;
}