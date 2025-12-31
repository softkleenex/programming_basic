#include <stdio.h>

extern void cacao();
void message();

int main(void)
{
    puts("메인 함수 시작.\n");
    message();
    cacao();
    puts("메인 함수 종료입니다.");
    
    return 0;
}

void message()
{
    puts("\t메시지입니다.");

}