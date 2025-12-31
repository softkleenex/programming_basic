#include <stdio.h>
#include <stdlib.h> //for exit()
int main()
{
FILE* f; //파일 포인터
if ((f = fopen("myinfo.txt", "w")) == NULL)
{
printf("파일이 열리지 않습니다.\n");
exit(1);
}
//파일에 쓰려는 자료
char tel[15] = "010-3018-3824";
char add[30] = "서초구 대정로 557";
int age = 22;
//파일＂myinfo.txt"에 형식화된 문자열 저장(쓰기)
fprintf(f, "전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
fclose(f); //파일 닫기
//표준출력 콘솔에 쓰기
printf("전화번호: %s, 주소:%s, 나이: %d\n", tel, add, age);
puts("프로젝트 폴더에서 파일 myinfo.txt를 메모장으로 열어 보세요.");
return 0;
}