// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    double rate = 0.03;
    double m = 1000;
    int y = 0;
    while(m < 2000)
    {
        y += 1;
        m = m + (m * rate);
        printf("%d year: %.2lf won \n", y, m);
    }
    
    printf("After %d years, %.2lf won", y, m);

    return 0;
}