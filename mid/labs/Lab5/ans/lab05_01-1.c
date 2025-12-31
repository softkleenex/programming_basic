/********************************************************************
 * Lab 5.1
 * - 주사위를 던져서 나온 숫자의 확률 계산
 * - 랜덤 숫자 생성(0~5) 
 ********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dice_num = 0;
	int dice[6] = {0};
	int cast_number = 0;	// 주사위를 던지는 횟수
	int total_number = 0; // 각 주사위값의 총합 
	srand(time(NULL));

	do {
		printf("주사위를 던질 회수를 입력하세요(10000 이상): ");
		scanf("%d", &cast_number);
	} while (cast_number < 10000);

	for (int i = 0; i < cast_number; i++)
	{
		dice_num = rand() % 6;	// 0~5 사이 
		dice[dice_num]++;
	}

	printf("Number   Frequency    Percentage(%%)\n");
	printf("-----------------------------------\n");
	for (int i = 0; i < 6; i++)
	{
		total_number += dice[i];
		printf("%4d %10d %14.1f\n",
			   (i + 1), dice[i], (double)dice[i] * 100.0 / cast_number);
	}
	printf("-----------------------------------\n");
	printf("Total number: %d\n", total_number);

	return 0;
}
