// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int m = 0;

    if ((b <= a && a <= c) || (c <= a && a <= b))
        m = a;
    else if((a <= b && b <= c) || (c <= b && b <= a) )
        m = b;
    else if((a <= c && c <= b) || (b <= c && c <= a) )
        m = c;
    

    printf("Median number: %d", m);

    return 0;
}