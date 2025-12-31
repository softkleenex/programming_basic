// hw01_01.c 2021111470 이상재 LEE SHANG JAE

#include <stdio.h>

int main()
{
    int x1 = 0, x2 = 0;
    printf("Type midterm final score: ");
    scanf("%d %d", &x1, &x2);
    printf("Midterm score: %d, Final score: %d\n", x1, x2);
   
    int x3 = x1 + x2;
    printf("Total: %d, Average: %.1f", x3, x3 / 2.0);

    return 0;
}