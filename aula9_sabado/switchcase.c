#include <stdio.h>

int main()
{
    int valor;

    printf("digite um numero correspodente ao dia da semana: ");
    scanf("%d", &valor);

    switch (valor)
    {
    case 1:
        printf("domingo\n");
        break;
    case 2:
        printf("segunda\n");
        break;
    case 3:
        printf("terca\n");
        break;
    case 4:
        printf("quarta\n");
        break;
    case 5:
        printf("quinta\n");
        break;
    case 6:
        printf("sexta\n");
        break;
    case 7:
        printf("sabado\n");
        break;
    default:
        printf("sem correspondencia\n");
        break;
    }

    return 0;
}