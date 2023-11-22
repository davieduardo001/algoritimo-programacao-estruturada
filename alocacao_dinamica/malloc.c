#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    char *letra;

    ptr = (int*)malloc(sizeof(int));
    letra = (char*)malloc(sizeof(char));

    if(ptr == NULL) {
        printf("without suficient mem.\n");
        return 1;
    }

    printf("ptr content: %d\n", ptr);

    *ptr = 10;
    *letra = 'A';

    printf("pointer mem allocated content: %d\n", *ptr);
    printf("letter mem allocated content: %c\n", *letra);

    free(ptr);
    free(letra);

    printf("pointer mem allocated content: %d\n", *ptr);
    printf("letter mem allocated content: %c\n", *letra);
    printf("ptr content: %d\n", ptr);

    return 0;
}
