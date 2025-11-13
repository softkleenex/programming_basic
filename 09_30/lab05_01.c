// 2021111470 이상재 leeshangjae

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice_num = 0;
    int t = 0;
    srand(time(NULL));
    
    while (1)
    {
        printf("주사위를 던질 회수를 입력하세요(10000 이상): ");
        scanf("%d", &t);
        if (t >= 10000)
            break;
    }

    int dice[6] = {0, 0, 0, 0, 0, 0};

    for (int i = 0;  i < t; i ++)
    {
        dice_num = rand() % 6;
        dice[dice_num] += 1;
    }


    
    printf("Number Frequency Percentage(%%)\n");
    printf("-----------------------------------\n");
    for (int i = 0;  i < 6; i ++)
    {
        printf("%4d %4d %4.1lf\n", i + 1, dice[i], 
            100 * (double)dice[i] / (double)(t));
    }


    printf("Total number: %d", t);

    return 0;
}