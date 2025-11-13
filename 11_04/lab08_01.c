//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


int sum_array(int *array, int size)
{
    // printf("%d\n", size);
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        printf("%3d", array[i]);
        sum += array[i];
    }
    return sum;
}
// 구현
// Ø 전달받은 배열 array의 각 원소를 한 줄에 화면 출력
// Ø 1차원 배열의 모든 원소의 합을 구하고 합을 리턴하는 함수

int main()
{
    srand(time(NULL));

    int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int sum = sum_array(data, sizeof(data)/sizeof(int));
    printf("\n배열의 합계: %d\n", sum);
    


    return 0;
}