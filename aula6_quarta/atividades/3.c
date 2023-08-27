#include<stdio.h>

int main() {
    
    float altura;

    printf("Escreva o sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.80)
        printf("voce tem mais de 1.80m\n");
    else if (altura == 1.80)
        printf("voce tem 1.80m");
    else
        printf("voce tem menos de 1.80m\n");

    return 0;
}