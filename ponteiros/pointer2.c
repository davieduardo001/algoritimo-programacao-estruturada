#include<stdio.h>

int main() {
    int num = 20;
    int *ptr;

    ptr = &num;

    printf("Content of n: %i\n", num);

    *ptr = 50;

    printf("the content of n: %i\n", num);
    printf("ptr pointer %B\n", *ptr);
    return 0;
}
