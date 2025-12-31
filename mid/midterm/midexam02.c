// 2021111470 이상재 leeshangjae 프기초 중간 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int check_password(char pass[], int len)
{
    printf("--------------------------------\nPassword Characters\n");
    int a_c = 0, a_l = 0, d_c = 0, sc = 0, oc = 0;

    char goodsc[] = {'!', '@', '#', '$', '%', '&', '*'};

    for (int i = 0; i < len; i++)
    {
        char now = pass[i];

        if (isupper(now))
            a_c += 1;
        else if (islower(now))
            a_l += 1;
        else if (isdigit(now))
            d_c += 1;
        else
        {
            int issc = 0;
            for (int i2 = 0; i2 < 7; i2++)
            {
                if (now == goodsc[i2])
                {
                    issc = 1;
                }
            }
            if (issc == 1)
                sc += 1;
            else
                oc += 1;
                
        }

        // printf("%d %d %d %d %d\n", a_c, a_l,d_c, sc, oc);
    }

    printf(
        "Alphabet (capital: %2d, lower: %2d)\nDigit count: %2d\nSpecified special char: %2d\nOther special char    : %2d\n", a_c, a_l, d_c, sc, oc);

    if ((a_c + a_l + d_c + sc + oc) != 10)
    {
        printf("총합에 문제가 있습니다.\n");
    }

    if (a_c == 1 && a_l == 6 && d_c == 2 && sc == 1 && oc == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    srand(time(NULL));

    char char_array[10] = {0};

    while (1)
    {

        printf("Please type password: ");
        scanf(" %s", char_array);

        int ans = 0;
        ans = check_password(char_array, sizeof(char_array) / sizeof(char));

        printf("--------------------------------\n");
        if (ans == 1)
        {
            printf("You can use the password: %s!\n", char_array);
            break;
        }
        else
        {
            printf("Wrong password. Please type password again!\n");
        }
    }

    return 0;
}
