//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


const int LOTTO_NUM = 6;

int duplicate(int rand_num, int (*lotto)[LOTTO_NUM], int low)
{
    
    int i = 0;
    for(i = 0; i < (6); i ++)
    {
        if (rand_num == *(*(lotto + low) + i))
        {
            return 1;//already there is!
        }
        else if(*(*(lotto + low) + i) == 0)
        {
            break;
        }
    }
    
    if (i < 6)  // 배열에 빈 자리가 있는 경우만 저장 > 저장은 main한테!
    {
        return 0;  //good
    }

    return 1;//full
}

void print_lotto(int (*lotto)[LOTTO_NUM])
{
    printf("Random Generated Lotto Numbers\n");

    for(int low = 0; low < 5; low ++)
    {
        printf("[%d]: ", low + 1);
        for(int col = 0; col < 6; col++)
        {
            printf("%3d",  *(*(lotto + low) + col));
        }
        printf("\n");
    }


}





int main()
{
    srand(time(NULL));


    int lotto[5][6] = {0};




    for(int low = 0; low < 5; low ++)
    {
        for(int col = 0; col < 6; col++)
        {
            while(1)
            {
            
                int rand_num =  (rand() % (45 -1 + 1) + 1); //같은 함수가 있다면?
                if (0 == duplicate(rand_num, lotto, low))
                {
                    (*(*(lotto + low) + col)) = rand_num;
                    break;
                }
            }
        }
    }

    print_lotto(lotto);




    return 0;
}