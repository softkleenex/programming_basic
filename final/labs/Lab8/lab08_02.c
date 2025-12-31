// 2021111470 이상재 leeshangjae 프기초 중간 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

void input_value(int (*array)[3], int row, int col)
{
    int t = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            array[i][i2] = t;
            t += 1;
        }
    }
} // 3x3 크기의 배열에 1~9까지의 값을 순서대로 저장

void transform(int (*array1)[3], int (*array2)[3], int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            *(*(array2 + i2) + i) = *(*(array1 + i) + i2);
        }
    }
}

// Ø 기능: array1의 [행][열]을 array2이 [열][행]으로 변환
// Ø 반드시 반복문을 사용해서 변환
// Ø 함수 내부에서는 포인터로 배열의 원소에 접근
// Ø 하드코딩 하지 마세요.

void print_array(int (*array)[3], int row, int col)
{
        for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
          int now = *(*(array + i) + i2);
            printf("%3d", now);
        }
        printf("\n");
    }
}
// }배열의 원소를 배열 형태(3x3)로 화면 출력
// Ø 자리 수 맞춤

int main()
{
    srand(time(NULL));

    int array1[3][3] = {0};
    int array2[3][3] = {0};
    printf("Array Initialization(1~9)\n");
    input_value(array1, 3, 3);
    print_array(array1, 3, 3);
    printf("Swap rows and columns of array1\n");
    transform(array1, array2, 3, 3);
    printf("Print array2\n");
    print_array(array2, 3, 3);

    return 0;
}