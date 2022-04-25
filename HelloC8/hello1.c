#include <stdio.h>

int main() {

    char a[] = "FishC";
    int b[5] = {1, 2, 3, 4, 5};

    //char *p = a;
    //int *p = b;

    //printf("*p = %c, *(p+1) = %c, *(p+2) = %c\n", *p, *(p+1), *(p+2));
    //printf("*p = %d, *(p+1) = %d, *(p+2) = %d\n", *p, *(p+1), *(p+2));

    //直接作用于数组
    printf("*b = %d, *(b+1) = %d, *(b+2) = %d\n", *b, *(b+1), *(b+2));
    
    return 0;

}