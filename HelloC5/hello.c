#include <stdio.h>
#include <string.h>

int main() {

    // char str[] = "I love FishC.com";
    // char str1[] = "New String";
    // char str2[100];

    //printf("sizeof str = %d\n", sizeof(str));
    //printf("strlen str = %u\n", strlen(str));

    //strcpy(str, str1);
    //strcpy(str1, str);
    //strcpy(str2, "Copy Successful");

    // printf("str:%s\n", str);
    // printf("str1:%s\n", str1);
    // printf("str2:%s\n", str2);

    // char str1[] = "To be or not to be";
    // char str2[40];

    // strncpy(str2, str1, 5);
    // str2[5] = '\0';

    // printf("str2: %s\n", str2);

    // char str1[] = "I love";
    // char str2[] = "FishC.com!";

    // strcat(str1, " ");
    // strcat(str1, str2);

    // printf("str1: %s\n", str1);

    char str1[] = "FishC.com";
    char str2[] = "FishC.com！";

    if(!strcmp(str1, str2)) {
        printf("两个字符串完全一致");
    }
    else {
        printf("两个字符串存在差异");
    }



    return 0;
}