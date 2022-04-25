#include <stdio.h>
/*
    数组指针
*/

int main() {

    int temp[5] = {1, 2, 3, 4, 5};
    //*P指向数组的第一个元素，而不是指向数组
    //数组第一个元素的地址 = 数组名 = 数组的地址
    int (*p2)[5] = &temp;
    int i;

    for(i = 0; i < 5; i++) {
        printf("%d\n", *(*p2 + i));
    }

    return 0;
}