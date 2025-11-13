// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    
    for (int d1 = 1; d1 <= 6; d1 ++)
    {
        for(int d2 = 1; d2 <= 6; d2 ++)
        {
            
            printf("(%d,%d) = %2d: ", d1, d2, d1+d2);
            if ((d1 + d2) %  2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
        }
    }

    return 0;
}