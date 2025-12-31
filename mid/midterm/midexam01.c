//2021111470 이상재 leeshangjae 프기초 중간 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void random1darray(int arr1[], int len)
{
    for (int i = 0; i < len; i ++)
    {
        arr1[i] = (rand() % (50 - 10  + 1)) + 10; //10 이상 50 사이
    }

}

void transform(int arr1d[], int arr2d[][6], int row, int col)
{
    for (int trow = 0; trow < row; trow ++)
    {
        for (int tcol = 0; tcol < col; tcol++)
        {
            arr2d[trow][tcol] = arr1d[trow * col + tcol];
        }
    }
    
}



int main()
{
    srand(time(NULL));

    int randomarray[12] = {0};
    int array2d[2][6] = {0};

    random1darray(randomarray, 12);

    printf("Create a 1D array\n");
    for (int i = 0; i < 12; i ++)
    {
        printf("%3d ", randomarray[i]);
    }
    printf("\n\n");
    
    transform(randomarray, array2d, 2, 6);

    printf("Trasform for 1D array to 2D array(2x6)\n");

    
    for (int trow = 0; trow < 2; trow ++)
    {
        for (int tcol = 0; tcol < 6; tcol++)
        {
            printf("%3d ",  array2d[trow][tcol]);
        }
        printf("\n");
    }
    
    
    

    return 0;
}