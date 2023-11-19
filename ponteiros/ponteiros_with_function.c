#include<stdio.h>

void changeValue(int *n) {
    *n = 30;
}

int main() {

    int n;

    changeValue(&n);

    printf("the value update: %i\n", n);

    return 0;
}
