// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int c = 0;
    int temp = 1;
    int s = 0;
    while (1)
    {
 
        printf("정수를 입력하세요: ");
        scanf("%d", &temp);
        if (temp > 0 && temp % 1 == 0)
        {
            c += 1;
            s += temp;
        }
        else
            break; 
    }

    if (c == 0)
        printf("입력한 양의 정수가 없습니다.");
    else{
        printf("합계: %d\n", s);
        printf("평균: %.1lf", ((float)s)/c);
    }

    return 0;
}