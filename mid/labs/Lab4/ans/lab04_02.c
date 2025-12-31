/********************************************************************
 * Lab 4.2
 * - 투자금 계산 프로그램 
 * - 원금의 2배가 되는 연도 계산 (연 이자율: 3%)
 ********************************************************************/

#include <stdio.h>

int main()
{
	double money = 1000;
	double target_money = money * 2;

	int year = 0;
	double rate = 0.03;

	while(money < target_money)
	{
		money = money + (money * rate);
		year++;
		printf("%2d year: %.2f won\n", year, money);
	}
	printf("After %d years, %.2f won\n", year, money);
	return 0;
 }