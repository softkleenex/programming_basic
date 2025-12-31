/******************************************************************
 * Lab 9.2 특정 문자의 개수 계산 프로그램
 *  - 배열을 이용한 문자열 접근
 *  - 포인터를 이용한 문자열 접근
 *  - isspace(), strlen() 활용
 ******************************************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 100

/*============================================================
 * 특정 문자의 개수 계산: strchr() 기능 구현 
 *============================================================*/
int str_chr(char *s, char c)
{
    int i;
    int count = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
            count++;
    }
    return count;
}

int main(void)
{
    char str[SIZE];
    char ch;
    int count = 0;

    printf("Type a string: ");
    fgets(str, 100, stdin);

    printf("Type a char to count: ");
    ch = getchar();
    count = str_chr(str, ch);
    printf("The number of %c: %d \n", ch, count);
    return 0;
}
