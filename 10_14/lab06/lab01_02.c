// 2021111470 이상재 leeshangjae

#include <stdio.h>



int getsum(int n)
{
    int ans = 0;
    
    for (int a = 1; a  <= n; a ++)
    {
        printf("%2d= %3d + %3d\n", ans + a, ans, a);
        ans += a;
    }
    
    printf("Sum from %2d to %2d = %2d\n", 1, n, ans);
    return ans;

}


int main()
{
    int x = 0;
    while (1)
    {
    printf("Input a number: ");
    scanf(" %d", &x);
    if (x <= 0)
    {
        printf("Try Again (%2d <= %2d)\n", x, 0);
    }
    else
    {
        break;
    }
}
    
    getsum(x);


    return 0;
}