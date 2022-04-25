#include <stdio.h>
/*
    指针数组
*/

int main() {

    char *p1[5] = {
        "让编程改变世界 ----FishC",
        "Just do it ----NIKE",
        "就只是生活而已 ----SEHUN",
        "永不止步 ----安踏",
        "一切皆有可能 ----李宁"
    };
    int i;

    for(i = 0; i < 5; i++) {
        printf("%s\n", *p1[i]);
    }

    return 0;
}