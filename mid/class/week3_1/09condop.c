#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    printf("두 정수 입력 >> ");
    scanf("%d%d", &a, &b);
    
    printf("max %d min %d a_abs %d b_abs %d", (a > b) ? a : b, (a < b) ? a : b, (a > 0) ? a : -a, (b > 0)? b : -b);

    ((a % 2) == 0) ? printf("짝수") : printf("홀수");
    printf("%s\n", ((b %2 ) == 0) ? "even" : "odd");

    return 0;
}