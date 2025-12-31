//hw01_02.c 2021111470 이상재 LEE SHANG JAE
#include <stdio.h>

#define EXCANGE_RATE 1330.0

int main()
{
    int won = 0;
    printf("Type Korean money(won): "); scanf("%d", &won);
    double dollar = 0.0;
    dollar = won / EXCANGE_RATE;
    printf("%d won => %.2f dollar", won, dollar);
    

    return 0;
}