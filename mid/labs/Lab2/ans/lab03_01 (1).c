/******************************************************
 * Lab 3장 
 * 1번. km -> mile로 변환 프로그램
 * - File: lab03_01.c
 * - 1km = 0.621371 mile
 ******************************************************/

#include <stdio.h>

int main(void)
{
    double length;
    const double KM_PER_MILE = 0.621371;
    printf("%3d(km): %.3f(mile)\n", 60, 60 * KM_PER_MILE); 
    printf("%3d(km): %.3f(mile)\n", 80, 80 * KM_PER_MILE); 
    printf("%3d(km): %.3f(mile)\n", 100, 100 * KM_PER_MILE); 
    printf("%3d(km): %.3f(mile)\n", 120, 120 * KM_PER_MILE);

    return 0;
}