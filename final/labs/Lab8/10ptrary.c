#include <stdio.h>

int main()
{
    int score[] = {10, 20, 30};
    printf("1. %p %p\n", score, (score + 1));
    printf("2. %d %d\n\n", *score, *(score + 1));

    int a[3] = {5, 10, 15};
    int *p = a;
    
    printf("3. %d %d %d\n", *(p), *(p + 1), *(p + 2));
    printf("4. %d %d %d\n", p[0], p[1], p[2]);
    
    printf("5. %d", *p++);
    printf("6. %d\n\n", *p);

    p = &a[2];
    printf("6. %d ", *p--);
    printf("%d\n", (*p)--);
    
    printf("7. %d %d %d\n", *(p -1), *p, *(p + 1));

    return 0;
}