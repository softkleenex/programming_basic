// 2021111470 이상재 Leeshangjae

#include <stdio.h>

int main()
{
    printf("몸무게를 kg 단위로 입력: ");
    double weight = 0.0;
    scanf("%lf", &weight);
    printf("키를 meter 단위로 입력: ");
    double height = 0.0;
    scanf("%lf", &height);
    
    double BMI = (weight) / (height * height);
    printf("BMI: %.2lf", BMI);


    return 0;
}