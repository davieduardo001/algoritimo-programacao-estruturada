#include <stdio.h>

int main()
{

    // condicao = se x for maior que y entao sera realizada a soma dos valores e apresentada soma. Se nao apresntar uma mensagm informando que nao podera ser realizada a soma

    int x = 20, y = 10, resultado;

    resultado = x < y;

    if (x < y)
    {
        resultado = x + y;
        printf("resultado: %d\n", resultado);
    } else {
        printf("nn podera ser realizada a soma");
    }

    return 0;
}