//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

void delete_space(char *scr, char *dest)
{
    int s = 0;

    for(int i = 0; i < 100; i++)
    {
        if(scr[i] == ' ' || scr[i] == '\n')
        {
            ;
        }
        else
        {
            dest[s] = scr[i];
            s += 1;
        }
    }

}

int main()
{
    srand(time(NULL));

    char str[100] = {0};
    char dest[100] = {0};

    printf("Type a sentence:");
    fgets(str, 100, stdin);
    printf("Original: ");
    printf("%s", str);
    delete_space(str, dest);
    printf("No space: %s", dest);

    

    return 0;
}