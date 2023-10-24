#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX 10

/*
3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

    a linha 2 com a linha 8;
    a coluna 4 com a coluna 10;
    a diagonal principal com a secundária;
    a linha 5 com a coluna 10;

O procedimento deve retornar a matriz alterada.
*/

int printRandoms(int lower, int upper)
{
  return (rand() % (upper - lower + 1)) + lower; 
}

void linha2Linha8(int row, int col, int matrizInicial[row][col], int matrizFinal[row][col])
{
  for(int i = 0; i < row; i++)
    matrizFinal[7][i] = matrizInicial[1][i];

  for(int i = 0; i < row; i++)
    matrizFinal[1][i] = matrizInicial[7][i];
}

void coluna4Coluna10(int row, int col, int matrizInicial[row][col], int matrizFinal[row][col])
{
  for(int i = 0; i < row; i++)
    matrizFinal[i][9] = matrizInicial[i][3];

  for(int i = 0; i < row; i++)
    matrizFinal[i][3] = matrizInicial[i][9];
}

void diagonalPrincipalDiagonal(int row, int col, int matrizInicial[row][col], int matrizFinal[row][col])
{
}

int main()
{
  int matriz1[MAX][MAX], matrizFinal[MAX][MAX];

  //GERANDO A MATRIZ
  srand(time(NULL));
  for(int x = 0; x < MAX; x++) {
    for(int y = 0; y < MAX; y++) {
      int i = printRandoms(0, 10);
      matriz1[x][y] = i;
    }
  }
  // gerando matriz final
  for(int x = 0; x < MAX; x++) {
    for(int y = 0; y < MAX; y++) 
        matrizFinal[x][y] = matriz1[x][y];
  }

  // output matriz original
  printf("Matriz original: \n");
  for(int i = 0; i < MAX; i++)
  {
    for(int j = 0; j < MAX; j++)
    {
      printf("[%i]\t", matriz1[i][j]);
    }
    printf("\n");
  }

  // output matriz alterada
  printf("Matriz alterada: \n");

  // alterando matriz
  linha2Linha8(MAX, MAX, matriz1, matrizFinal);
  coluna4Coluna10(MAX, MAX, matriz1, matrizFinal);

  for(int i = 0; i < MAX; i++)
  {
    for(int j = 0; j < MAX; j++)
    {
      printf("[%i]\t", matrizFinal[i][j]);
    }
    printf("\n");
  }

  return 0;
}
