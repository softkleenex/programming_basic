/********************************************************************
 * Lab 6.1 (함수 사용 )
 * - 짝수, 홀수 및 절대값 계산 프로그램
 * 
 ********************************************************************/

#include <stdio.h>

int evenodd(int n)
{
    return (n % 2);
}

int absolute(int n)
{
    return (n > 0) ? n : -n;
}

int main()
{
    int num;
    char ch;

    do
    {
        printf("Input an integer number: ");
        scanf("%d", &num);
        ch = getchar(); 

        printf("%d: ", num);
        if (evenodd(num) == 0)
            printf("Even number \n");
        else
            printf("Odd number \n");

        printf("absolute(%d): %d\n", num, absolute(num));

        printf("--------------------------\n");
        printf("Again? (y/n): ");
        scanf("%c", &ch);
        //getchar(); // 없어도 문제 없음 

    } while (ch == 'y' || ch == 'Y');
    printf("Finish\n");

    return 0;
}