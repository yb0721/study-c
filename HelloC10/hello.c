#include <stdio.h>
/*
    指向常量的指针
*/

int main() {

    // const float pi = 3.14;

    // printf("%f\n", pi);

    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;

    printf("cnum: %d, &cnum: %p\n", cnum, &cnum);
    printf("pc: %d, pc: %p\n", *pc, pc);

    pc = &num;
    printf("num: %d, &num: %p\n", num, &num);
    printf("pc: %d, pc: %p\n", *pc, pc);

    num = 1024;
    printf("pc: %d, pc: %p\n", *pc, pc);


    return 0;
}