#include <stdio.h>

/*
    函数的参数和返回值
*/

int sun(int n);

int sum(int n) {
    int result = 0;

    do{
        result += n;
    }while(n-- > 0);

    return result;
}

int main() {

    int n, result;

    printf("请输入n的值：");
    scanf("%d", &n);

    result = sum(n);

    printf("1+2+3+...+(n-1)+n的结果是：%d\n", result);

    return 0;
}