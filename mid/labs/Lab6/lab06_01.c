// 2021111470 이상재 leeshangjae

#include <stdio.h>


int evenodd(int n)
{
    if (n % 2 == 0){
        return 0;
    }
    else
    {
        return 1;
    }
    

}


int absolute(int n)
{
    if (n >= 0){
        return n;
    }
    else
    {
        return n * (-1);
    }
    

}


int main()
{
    while (1)
    {
    int x = 0;
    printf("Input an integer number: ");
    scanf(" %d", &x);
    int ans = evenodd(x);
    if (ans == 1)
        printf("%d: Oddnumber\n", x);
    else
        printf("%d: Evenumber\n", x);
    
    printf("absolute(%d): %d\n", x, absolute(x));

    printf("--------------------------\n");
    printf("Again? (y/n): ");
    char x2 = 'o';

    scanf(" %c", &x2);

    if (!(x2 == 'y' || x2 == 'Y'))
    {
        break;
    }
    else
    ;

    }

    printf("Finish\n");
    return 0;
}