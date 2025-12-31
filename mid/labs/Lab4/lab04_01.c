// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int x = 0;
    printf("1~100 사이의 정수 입력: ");
    scanf("%d", &x);

    int ans = 0;
    //1~n까지
    for(int a = 3; a <= x; a ++)
    {
        if (a % 3 == 0)
        {
            if (a + 3 < x)
            {
                printf("%d + ", a);
                ans += a;
            }
            else
            {
                printf("%d = ", a);
                ans += a;
            }
        }
    }

    printf("%d", ans);

    return 0;
}