#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
4. Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.
*/

int printRandoms(int lower, int upper)
{
  return (rand() % (upper - lower + 1)) + lower; 
}

void somandoColunas(int row, int col, int matrizInicial[row][col])
{
    for(int i = 0; i < 10; i++)
    {
        matrizInicial[60][i] = 0;
    }

    for(int i = 0; i < 60; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            matrizInicial[60][j] += matrizInicial[i][j];
        }
    }
}

int main()
{
    int matriz1[61][10];

    //GERANDO A MATRIZ
    srand(time(NULL));
    for(int x = 0; x < 61; x++) {
        for(int y = 0; y < 10; y++) {
        int i = printRandoms(1, 10);
            matriz1[x][y] = i;
        }
    }

    printf("Matriz original: \n");
    for(int i = 0; i < 60; i++)
    {
        printf("linha %i: ", i);
        for(int j = 0; j < 10; j++)
        {
        printf("[%i]\t", matriz1[i][j]);
        }
        printf("\n");
    }

    somandoColunas(61, 10, matriz1);

    printf("SOMA FINAL: \n");
    for(int i = 0; i < 10; i++)
    {

        printf("[%i] ", matriz1[60][i]);
    }

    return 0;
}