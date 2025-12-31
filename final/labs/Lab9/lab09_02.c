//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


int str_chr(char *s, char c)
{
    int c_counter = 0;
    for(int i = 0; i < 100; i ++)
    {
        if (s[i] == c)
            c_counter+= 1;
    }
    return c_counter;
}

int main()
{
    srand(time(NULL));

    char str[100] = {0};
    char c = '0';

    printf("Type a string:");
    fgets(str, 100, stdin);
    printf("Type a char to count: ");
    scanf("%c", &c);
    printf("The number of p:%d", str_chr(str, c));


    return 0;
}