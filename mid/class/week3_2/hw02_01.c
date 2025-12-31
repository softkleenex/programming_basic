// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int ic = 0;
    double tr, ict = 0.0;
    
    printf("Input income >> ");
    scanf("%d", &ic);
    
    if (ic <= 12000000)
        tr = 0.06;
    else if (12000000 < ic && ic <= 46000000)
        tr = 0.15;
    else if (46000000 < ic && ic <= 88000000)
        tr = 0.24;
    else if (88000000 < ic && ic <= 150000000)
        tr = 0.35;
    else if (150000000 < ic  && ic <= 300000000)
        tr = 0.38;
    else if (300000000 < ic)
        tr = 0.40;

    tr = tr;
    ict = ic * tr;

    printf("Income: %d, tax rate: %.2lf, income tax: %.2lf", ic, tr, ict);

    return 0;
}