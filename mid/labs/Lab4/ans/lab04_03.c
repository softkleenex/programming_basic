/********************************************************************
 * Lab 4.3
 * - do-while문을 이용한 성적 계산 프로그램 
 * - 총점, 평균 계산 (소수점 첫 째자리까지 출력)
 ********************************************************************/

#include <stdio.h>

int main()
{
	int num = 0, sum=0, count = 0;
	double avg = 0.0;

	do
	{
		printf("정수를 입력하세요: ");
		scanf("%d", &num);

		if(num > 0)
		{
			sum += num;
			count++;
		}
	} while (num > 0);

	if(count > 0)
	{
		avg = (double)sum / count;
		printf("합계: %d\n", sum);
		printf("평균: %.1f\n", avg);
	}
	else
	{
		printf("입력한 양의 정수가 없습니다.\n");
	}
	return 0;
}