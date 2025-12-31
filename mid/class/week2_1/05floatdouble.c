/*소스 : 05floatdouble.c*/

#include <stdio.h>

int main(void)
{
    float x = 3.14F;
    double y = -3.141592;
    long double z= 29.74;

    printf("부동소수 값: %f, %f, %Lf\n", x, y, z);
    
    printf("sizeof(double): %ld\n", sizeof(double));
    printf("sizeof(long double): %ld\n", sizeof(long double));

    return 0;
}