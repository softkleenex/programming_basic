/**********************************************************
 * Lab 8.1 (11장. 포인터 및 배열)
 * - 1차원 배열을 함수로 전달 후 배열의 값 변경 및 화면 출력
 *
 ********************************************************/
#include <stdio.h>

int sum_array(int *arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		printf("%2d ", *(arr + i));
		sum += *(arr + i);
	}
	printf("\n");

	return sum;
}

int main()
{
	int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	int size = sizeof(data) / sizeof(data[0]);

	int total = sum_array(data, size);
	printf("배열의 합계: %d\n", total);

	return 0;
}