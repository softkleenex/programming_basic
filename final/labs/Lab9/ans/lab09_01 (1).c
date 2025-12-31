/******************************************************************
 * Lab 9. 문자열
 * - 공백 문자 삭제 프로그램
 *
 ******************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100
/*============================================================
 * 문자열 접근: 포인터 사용 
 *============================================================*/
void delete_space1(char *str, char *dest)
{
    int i = 0, j = 0;
    char ch = ' ';
    
    while (*(str + i) != '\0')
    {
        ch = *(str + i);
        // if (*(str + i) != ' ' && *(str + i) != '\n')
        if(isspace(ch) == 0)
        {
            *(dest + j) = *(str + i);
            j++;
        }
        i++;
    }
    *(dest + j) = '\0';    
}

/*============================================================
 * 문자열 접근: 배열 사용
 *============================================================*/
void delete_space(char *src, char *dest)
{
    int i, j = 0;
    int len = (int)strlen(src);

    for (i = 0; i < len; i++)
    {
        // space, '\n'도 공백 문자
        if(isspace(src[i]) == 0)  // 공백 문자가 아니면
            dest[j++] = src[i];
    }
    dest[j] = '\0';
}

int main(void)
{
    char str[SIZE] = {0};
    char dest[SIZE] = {0};

    printf("Type a sentence: ");
    fgets(str, SIZE, stdin);
    delete_space(str, dest);

    //delete_space1(str, dest);

    printf("Original: %s", str);
    printf("No space: %s\n", dest);
    return 0;
}
