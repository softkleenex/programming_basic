// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    double data[3][5] = {{85, 98, 87, 76, 100}, {96, 89, 96, 92, 96}, {63, 72, 55, 49, 88}};

    double score[3][6] = {{0}, {0}, {0}};

    double per[] = {0.3, 0.4, 0.2, 0.05, 0.05};

    double s = 0.0;
    
    printf("--------------------------------------------\n학번 중간 기말 과제 퀴즈 출석 합계\n--------------------------------------------\n");
    
    
    for(int i = 1; i <= (int)(sizeof(data) / sizeof(double))  / (int)(sizeof(data[0]) / sizeof(double)); i++)
    {
        s = 0.0;

        for(int i2 = 0; i2 <  (int)(sizeof(data[0]) / sizeof(double)); i2++)
    {
        score[i - 1][i2] = data[i - 1][i2] * (per[i2]);
        s += score[i - 1][i2];
    }
        score[i - 1][5] = s;
    }


    for(int i = 1; i <= (int)(sizeof(data) / sizeof(double))  / (int)(sizeof(data[0]) / sizeof(double)); i++)
    {
        printf("%2d   %.1lf %.1lf %1.1lf  %2.1lf  %2.1lf %2.1lf\n", i, score[i-1][0], score[i-1][1], score[i-1][2], score[i-1][3], score[i-1][4], score[i-1][5]);
    }
    printf("-------------------------------------------");


    return 0;
}