#include <stdio.h>

int main() {
    char a = 'F';
    int f = 123;

    //取地址的值
    char *pa = &a;
    int *pb = &f;

    //输出打印指针的值
    printf("a = %c\n", *pa);
    printf("f = %d\n", *pb);

    *pa = 'c';
    *pb += 1;

    printf("now a = %c\n", *pa);
    printf("now f = %d\n", *pb);

    //输出字节
    printf("sizeof pa =%d\n", sizeof(pa));
    printf("sizeof pb =%d\n", sizeof(pb));

    //输出打印16进制的地址
    printf("the add of a is: %p\n", pa);
    printf("the add of b is: %p\n", pb);

    return 0;
}