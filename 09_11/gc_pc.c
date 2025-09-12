#include <stdio.h>

int main()
{
    char a = '\0';

    puts("getchar 문자 하나 입력 >> ");
    a = getchar();
    
    putchar(a);
    return 0;
}