// 2021111470 이상재 leeshangjae

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


int tortois(int table[], int t)
{
    int temp = rand()%10  + 1;//1~10까지 랜덤
    int now = t + table[temp];
    
    if (now < 0)
        now = 0;
    else if (now > 50)
        now = 50;

    for(int i = 0;  i < now; i++)
    {
        printf(" ");
    }

    printf("T(pos:%d, step:%d)\n", now, table[temp]);
    return table[temp];
}


int hare(int table[], int h)
{
    int temp = rand()%10  + 1;//1~10까지 랜덤
    int now = h + table[temp];
    if (now < 0)
        now = 0;
    else if (now > 50)
        now = 50;

    for(int i = 0;  i < now; i++)
    {
        printf(" ");
    }
    

    printf("H(pos:%d, step:%d)\n", now, table[temp]);
    return table[temp];
}



int main()
{
    srand(time(NULL));
    int t = 0;
    int h = 0;
    char ch = '0';

    int t_table[] = {0, 3, 3, 3, 3, 3, -6, -6, 1, 1, 1};
    int h_table[] = {0, 0, 0, 9, 9, -12, 1, 1, 1, -2, -2};

    printf("T(%d)\n", t);
    printf("H(%d)\n", h);

    printf("Typer Enter to Start Race !!");
    scanf("%c", &ch);
    printf("-------------------------------------------------------------------\n");

    while (t < 50 && h < 50)
    {
        t += tortois(t_table, t);
        if (t < 0)
            t = 0;
        h += hare(t_table, h);
        if (h < 0)
            h = 0;

        if (t >= 50)
            t = 50;
        
        if (h >= 50)
            h = 50;

        // printf("%d, %d\n", t, h);

        printf("-------------------------------------------------------------------\n");

        usleep(300  * 1000);
    }

    if (h == t)
        printf("Even Game!(Tortoise: %2d, Hare: %2d)\n", t, h);
    else if (h < t)
        printf("Tortoise Win!(Tortoise: %2d, Hare: %2d)\n", t, h);
    else if (h > t)
        printf("Hare Win!(Tortoise: %2d, Hare: %2d)\n", t, h);
    

    return 0;
}
