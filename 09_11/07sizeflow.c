// oper flow발생 정수의 순환
// 07sizeflow.c

#include <stdio.h>

int main(){
    printf("char : %ld\n", sizeof(char));
    printf("int : %ld\n", sizeof(int));
    printf("longlong : %ld\n", sizeof(long long));
    printf("float : %ld\n", sizeof(float));
    printf("long double : %ld\n", sizeof(long double));

    short s = 32767;
    printf("%d\n", s);
    s = s + 1;
    printf("%d\n", s);
    return 0;
}