/********************************************************************
 * Lab 6.2 (함수 사용 )
 * - 1부터 표준 입력으로 받은 양의 정수까지의 합을 구하는 함수 구현
 *
 ********************************************************************/
#include <stdio.h>

int getsum(int n);

int main()
{
    int n = 0;

    while (1)
    {
        printf("Input a number: ");
        scanf("%d", &n);

        if (n > 0)
            break;
        else
            printf("Try Again (%d <= 0)\n", n);
    }
    printf("Sum from 1 to %d = %d\n", n, getsum(n));
}

int getsum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%3d = %3d + %3d\n", sum + i, sum, i);
        sum += i;
    }
    return sum;
}