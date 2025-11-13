// 2021111470 이상재 leeshangjae

#include <stdio.h>

int main()
{
    int array[] = {2, 4, 7, 8, 7, 3, 7, 9, 2, 1};

    while (1)
    {   
        int t = 0;
        int c = 0;
        printf("검색할 값을 입력하세요 (-1: 종료) : ");
        scanf("%d", &t);
        if (t == -1)
        {
            printf("프로그램 종료");
            break;
        }

       

        for(int i = 0; i < ((int)sizeof(array))/ ((int)sizeof(int)); i ++)
        {
         if (array[i] == t)
         {  
            printf("검색 인덱스: %d\n", i);
            c += 1;
         }
        }

        if (c == 0)
        {
            printf("배열에 존재하지 않습니다\n");
        }
        else if(c > 0){
            printf("숫자 %2d -> 총 검색 개수 : %d\n", t, c);
        }
    }

    return 0;
}