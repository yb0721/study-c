#include <stdio.h>

int main() {

    char str[128];

    printf("请输入域名:");
    scanf("%s", str);

    //printf("工作室的域名是：%s\n", str);

    printf("str的地址是：%p\n", str);
    printf("str的地址是：%p\n", str[0]);

    return 0;
}