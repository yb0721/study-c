#include <stdio.h>

int main() {
    int *p1;
    int *p2 = NULL;

    //p1没有赋值，默认值为随机值
    printf("%d\n", *p1);
    printf("%d\n", *p2);

    return 0;
}