#include <stdio.h>

int main() {
    int num = 520;
    int *p = &num;
    int **pp = &p;

    printf("num: %d\n", num);
    printf("*p: %p\n", *p);
    printf("**p: %d\n", **pp);

    //二重检查
    printf("&p: %p, pp: %p\n", &p, pp);
    printf("&num: %p, p: %p, *pp: %p\n", &num, p, *pp);

    return 0;
}