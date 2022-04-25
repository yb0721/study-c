#include <stdio.h>
/*
    常量的指针
*/

int main() {
    int num = 520;
    const int cnum = 880;
    //const在*右边为常量指针，const在*左边为指向常量的指针
    //int * const p = &num;
    const int *const p = &num;

    // *p = 1024;
    // printf("*p: %d\n", *p);

    //不可以被修改
    // p = &cnum;
    // printf("*p: %d\n", *p);

    num = 1024;
    printf("*p: %d\n", *p);

    return 0;
}