//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

// - strcat()이나 단순히 문자열의 주소(포인터)로 구현하는 경우 0점 처리함

// - strncpy(), strlen() 사용

void led_display_loop(char *input_string)
{
    system(CLEAR_SCREEN);
    printf("%s\n", input_string);
    usleep(1000 * 500);

    size_t len = strlen(input_string);
    char temp_string[50] = {'\0'};
    char display_string[50] = {'\0'};

    strncpy(temp_string, input_string, 50);
    strncpy(display_string, input_string, 50);

   
    
   
    for(int i = 0; i < 100; i ++)
    {
        size_t len = strlen(input_string);
        
        
        strncpy(display_string , temp_string + 1,  len - 1);
        display_string[len -1] = temp_string[0];

        system(CLEAR_SCREEN);
        printf("%s\n", display_string);
        usleep(1000 * 500);
        strncpy(temp_string, display_string, len);
        
    }


}


int main()
{
    srand(time(NULL));
    
    char input_string[50] = {'\0'};
    
    printf("Type a message(50 chars): ");
    fgets(input_string, 50, stdin);
    
    size_t len = strlen(input_string);
    
    if (len > 0 && input_string[len-1] == '\n') {
        input_string[len-1] = '\0';
    }
    
    led_display_loop(input_string);
    


    return 0;
}