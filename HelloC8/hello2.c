#include <stdio.h>
#include <string.h>
/*
    指针定义字符串
    用下标法读取每个元素
*/

int main() {

    char *str = "I love FishC.com!";
    int i, length;

    length = strlen(str);

    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;

}