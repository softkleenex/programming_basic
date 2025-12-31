#include <stdio.h>

int main(){
    double width = 3.424, height = 2.718;
    int shape = 3;
    
    printf("col : %f, row : %f \n", width, height);
    
    printf("%d각형 %s: %8.2f\n", shape, "면적", (width * height) / 2);
    printf("%d각형 %s: %10.4f\n", shape + 1, "면적", width * height);

    return 0;
}