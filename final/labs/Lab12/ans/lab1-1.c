/*
    15장. 파일 처리: 
    Lab 1. 파일 비교 프로그램
    - 두 개의 파일이름을 화면에서 입력 받음
    - 한 라인씩 파일을 읽어서 두 개의 파일을 비교하고 처음으로 다른 부분을 출력 후 종료
        . strcmp() 사용

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 150
#define TRUE 1
#define FALSE 0

int main()
{
    FILE *fp1, *fp2;

    char file1[SIZE], file2[SIZE];
    char buffer1[SIZE], buffer2[SIZE];
    int samefile = TRUE;

    printf("Type the first file name: ");
    scanf("%s", file1);
    printf("Type the second file name: ");
    scanf("%s", file2);

    // 첫번째 파일을 읽기 모드로 연다.
    if ((fp1 = fopen(file1, "r")) == NULL)
    {
        printf("파일1: %s을 열 수 없습니다.\n", file1);
        exit(1);
    }

    // 두번째 파일을 읽기 모드로 연다.
    if ((fp2 = fopen(file2, "r")) == NULL)
    {
        printf("파일2: %s을 열 수 없습니다.\n", file2);
        exit(1);
    }
    // 첫번째 파일을 두번째 파일로 복사한다.
    while (1)
    {
        char *p1 = fgets(buffer1, SIZE, fp1);
        char *p2 = fgets(buffer2, SIZE, fp2);
        if (p1 == NULL || p2 == NULL)
            break;

        if (strcmp(buffer1, buffer2) != 0)
        {
            samefile = FALSE;
            printf("%s and %s are different\n", file1, file2);
            printf("<< %s\n", buffer1);
            printf(">> %s\n", buffer2);
            break;
        }
    }
    if (samefile == TRUE)
        printf("The two files are identical.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
