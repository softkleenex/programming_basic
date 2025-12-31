// 2021111470 이상재 Leeshangjae

#include <stdio.h>

int main()
{
    int x = 0;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    printf("입력값: 0x%08x\n", x);

    printf("Step1. 1의 보수: 0x%08x\n", ~(x));
    printf("Step2. 2의 보수: 0x%08x, %d\n", ~(x) + 1, ~(x) + 1);   
    return 0;
}