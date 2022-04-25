#include <stdio.h>
#include <stdarg.h>

/*
    可变参数
*/
//...表示参数个数不确定
int sum(int n, ...);

int sum(int n, ...) {
    int i, sum = 0;

    //定义参数列表(利用指针)
    va_list vap;

    //初始化参数列表
    va_start(vap, n);
    for(i = 0; i < n; i++) {

        //获取参数值
        sum += va_arg(vap, int);
    }

    //关闭参数列表
    va_end(vap);

    return sum;
}

int main() {

    int result;

    result = sum(3, 1, 2, 3);

    printf("result = %d\n", result);

    return 0;
}