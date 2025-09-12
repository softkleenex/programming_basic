#include <stdio.h>

int main(){
    float mile = 0;
    printf("1킬로미터(km)은 몇 마일(mile)? "); //0.621mile
    scanf("%f", &mile);
    printf("80킬로미터 : %.2f 마일\n\n", mile * 80);
    
    double liter = 0;
    printf("1갤론(gallon)은 몇 리터(liter)? "); //3.785
    scanf("%lf", &liter);
    printf("18갤론: %.2f리터 \n", liter *18);

    return 0;
}