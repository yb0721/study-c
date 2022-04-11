#include <stdio.h>

int main() {
    int i;
    char ch;

    printf("请输入年龄：");
    //scanf("%d", &i);

    /* if语句 */
    if(i >= 18) {
        printf("进门左拐！\n");
    }
    else {
        printf("慢走，不送！\n");
    }

    scanf("%c", &ch);

    /* switch语句 */
    switch (ch) {
        case '18':
            printf("未成年！\n");
            break;
        case '30':
            printf("青年！\n");
        case '60':
            printf("中年！\n");
        case '90':
            printf("老年！\n");
        case '100':
            printf("牛批！\n");
        default:
            printf("error!\n");
    }


    return 0;
}