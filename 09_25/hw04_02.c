// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int t = 0;
    while (1)
    {
        printf("출력할 최대 숫자 입력: ");
        scanf("%d", &t);
        if (!((1 <= t) && (t <= 10)))
        {
            printf("1~10 사이의 숫자를 다시 입력하세요.\n");
            continue;
        }
        else
        {
            break;
        }
    }
    for(int low = 1; low <= t; low++)
    {
        for(int col = 1; col <= low; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }


    for(int low = (t - 1); low >= 1; low--)
    {
        for(int col = 1; col <= low; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }


    return 0;
}