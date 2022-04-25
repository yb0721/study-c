#include <stdio.h>

int main() {
    // int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int *p = array;
    // int i;

    // for(i = 0; i < 10; i++) {
    //     printf("%d\n", *(p + i));
    // }

    int array[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}};
    
    //指向指针的指针，指向的不是元素
    //int **p = array;

    int (*p)[4] = array; 
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%2d", *(*(p+i)+j));
        }
        printf("\n");
    }
//    printf("p: %p, array: %p\n", p, array);
//    printf("p+1: %p, array+1: %p\n", p+1, array+1);

    return 0;
}