//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

#define WIDTH 10
#define HEIGHT 10

typedef struct
{
    int width;
    int height;
    unsigned char buffer[WIDTH][HEIGHT];
    /* data */
} IMAGE;


void fill_image(IMAGE *p)
{
    for(int i = 0; i < 10;  i++)
    {
        for(int i2 = 0; i2 < 10; i2++)
        {
            p->buffer[i][i2] = rand() % (255 + 1);
        }
    }
}

void convert_image(IMAGE *p)
{
    for(int i = 0; i < 10;  i++)
    {
        for(int i2 = 0; i2 < 10; i2++)
        {
            if(p->buffer[i][i2] < 128)
            {
                p->buffer[i][i2] = 0;
            }
            else
            {
                p->buffer[i][i2] = 255;
            }
        }
    }
}

void reverse_image(IMAGE *p)
{
 for(int i = 0; i < 10;  i++)
    {
        for(int i2 = 0; i2 < 10; i2++)
        {
            p->buffer[i][i2] = 255 -  p->buffer[i][i2];
        }
    }

}

void print_image(IMAGE *p)
{

     for(int i = 0; i < 10;  i++)
    {
        for(int i2 = 0; i2 < 10; i2++)
        {
            printf("%4d ", p->buffer[i][i2]);
        }
        printf("\n");
    }

}





int main()
{
    srand(time(NULL));
    

    IMAGE image, backup;

    fill_image(&image);
    memcpy(&backup, &image, sizeof(image));
    printf("--------------------------------------\nOriginal Image\n--------------------------------------\n");
    print_image(&image);

    printf("--------------------------------------\nBackup Image\n--------------------------------------\n");
    print_image(&backup);


    convert_image(&image);
    printf("--------------------------------------\nConverted Image(image)\n--------------------------------------\n");
    print_image(&image);
    
    
    reverse_image(&backup);
    printf("--------------------------------------\nReversed Image(from backup)\n--------------------------------------\n");
    print_image(&backup);




    return 0;
}