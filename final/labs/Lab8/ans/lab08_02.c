/************************************************************
 * Lab 8.2 (11장. 포인터 및 배열)
 * - 2차원 배열을 함수로 전달 후 배열의 값 변경 및 화면 출력
 * 
 ************************************************************/
#include <stdio.h>

void input_value(int (*array)[3], int row, int col)
{
	int count = 1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(array + i) + j) = (i * row) + (j + 1);
			//*(*(array + i) + j) = count++;
		}
	}
}

void transform(int (*array1)[3], int (*array2)[3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(array2 + i) + j) = *(*(array1 + j) + i);
		}
	}
}

void print_array(int (*array)[3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%3d ", *(*(array + i) + j));
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
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