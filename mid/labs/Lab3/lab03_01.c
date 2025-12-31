// 2021111470 이상재 Leeshangjae

#include <stdio.h>

int main()
{
    int x = 0;
    printf("100보다 작은 정수 입력 : ");
    scanf("%d", &x);
    printf("십의 자리 수: %d\n", x/10);
    printf("일의 자리 수: %d\n", x % 10);
    
    return 0;
}