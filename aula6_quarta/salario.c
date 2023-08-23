#include<stdio.h>

int main() {
    
    float salario;

    printf("Escreva o seu salario");
    scanf("%f", &salario);

    if(salario > 1.320)
        printf("ganha mais que um salario minimo\n");
    else
        printf("voce ganha menos q um salario minimo\n");

    return 0;
}