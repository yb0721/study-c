#include <stdio.h>
/*
    不使用函数计算字符串的长度
*/

int main() {

    char str[] = "I love FishC.com!";
    char *target = str;
    int count = 0;

    while(*target++ != '\0') {
        count++;
    }

    printf("总共有%d个字符！\n", count);

    return 0;

}