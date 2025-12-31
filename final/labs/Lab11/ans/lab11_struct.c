/*==================================================================
    14장. 함수와 포인터
    - 이미지 처리
    - 이미지의 값을 0~255 사이의 값으로 랜덤하게 생성 후 2차원 배열에 저장
    - image[i][j] < 128이면, 0으로 변경
    - image[i][j] >= 128 이면, 255로 변경
    - reverse image: 255 - image[i][j]
==================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10

typedef struct
{
    int width;
    int height;
    unsigned char buffer[WIDTH][HEIGHT];
} IMAGE;

void print_image(IMAGE *p)
{
    int x, y;
    for (y = 0; y < p->height; y++)
    {
        for (x = 0; x < p->width; x++)
            printf("%4d ", p->buffer[y][x]);
        printf("\n");
    }
}

void reverse_image(IMAGE *p)
{
    int x, y;
    for (y = 0; y < p->height; y++)
        for (x = 0; x < p->width; x++)
            p->buffer[y][x] = 255 - p->buffer[y][x];
}

void convert_image(IMAGE *p)
{
    for (int i = 0; i < p->height; i++)
    {
        for (int j = 0; j < p->width; j++)
        {
            if (p->buffer[i][j] < 128)
                p->buffer[i][j] = 0;
            else
                p->buffer[i][j] = 255;
        }
    }
}

void fill_image(IMAGE *p)
{
	srand(time(NULL));

    for (int i = 0; i < p->height; i++)
    {
        for (int j = 0; j < p->width; j++)
        {
            p->buffer[i][j] = rand() % 256;
        }
    }
}

int main(void)
{
    int rand_num;
    IMAGE image, backup;

    memset(&image, 0, sizeof(IMAGE));
    image.height = HEIGHT;
    image.width = WIDTH;

    memset(&backup, 0, sizeof(IMAGE));

    fill_image(&image);
    memcpy(&backup, &image, sizeof(image));
    // memcpy(backup.buffer, image.buffer, sizeof(image.buffer));
    

    printf("--------------------------------------\n");
    printf("Original Image\n");
    printf("--------------------------------------\n");
    print_image(&image);
    printf("\n");

    printf("--------------------------------------\n");
    printf("Backup Image\n");
    printf("--------------------------------------\n");
    print_image(&backup);
    printf("\n");

    printf("--------------------------------------\n");
    printf("Converted Image(from image)\n");
    printf("--------------------------------------\n");
    convert_image(&image);
    print_image(&image);
    printf("\n");

    printf("--------------------------------------\n");
    printf("Reversed Image(from backup)\n");
    printf("--------------------------------------\n");
    reverse_image(&backup);
    print_image(&backup);
    return 0;
}
