#include<stdio.h>


int main() {

    int idade;

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18)
        printf("Eh de maior\n");    

    return 0;
}