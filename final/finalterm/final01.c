// 2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

#define MAX_LINE 1024

int main()
{
    srand(time(NULL));

    char filename1[100], filename2[100];
    char line1[MAX_LINE], line2[MAX_LINE];

    FILE *fp1, *fp2;
    int lineNum = 0;
    int isDifferent = 0;
    char *result1, *result2;

    printf("Type the first file name: ");
    scanf("%s", filename1);
    printf("Type the second file name: ");
    scanf("%s", filename2);

    fp1 = fopen(filename1, "r");
    if (fp1 == NULL)
    {
        printf("cannot open file: %s\n", filename1);
        return 1;
    }

    fp2 = fopen(filename2, "r");
    if (fp2 == NULL)
    {
        printf("cannot open file: %s\n", filename2);
        fclose(fp1);
        return 1;
    }

    while (1)
    {
        result1 = fgets(line1, MAX_LINE, fp1);
        result2 = fgets(line2, MAX_LINE, fp2);
        lineNum++;

        if (result1 == NULL && result2 == NULL)
        {
            break;
        }

        if (result1 == NULL && result2 != NULL)
        {
            isDifferent = 1;
            line2[strcspn(line2, "\n")] = '\0';

            printf(">> %2d: %s\n", lineNum, line2);

            while (fgets(line2, MAX_LINE, fp2) != NULL)
            {
                lineNum++;
                line2[strcspn(line2, "\n")] = '\0';
                printf(">> %2d: %s\n", lineNum, line2);
            }
            break;
        }

        if (result1 != NULL && result2 == NULL)
        {
            isDifferent = 1;
            line1[strcspn(line1, "\n")] = '\0';

            printf("<< %2d: %s\n", lineNum, line1);

            while (fgets(line1, MAX_LINE, fp1) != NULL)
            {
                lineNum++;
                line1[strcspn(line1, "\n")] = '\0';
                printf("<< %2d: %s\n", lineNum, line1);
            }
            break;
        }

        if (strcmp(line1, line2) != 0)
        {
            isDifferent = 1;

            line1[strcspn(line1, "\n")] = '\0';
            line2[strcspn(line2, "\n")] = '\0';

            printf("<< %2d: %s\n", lineNum, line1);
            printf(">> %2d: %s\n", lineNum, line2);
        }
    }
    // 동일한 파일인 경우
    if (!isDifferent)
    {
        printf("The two files are identical.\n");
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
