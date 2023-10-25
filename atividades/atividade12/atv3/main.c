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
  int contadorDiagonalSecundariaCol = MAX-1, contadorDiagonalSecundariaRow = 0;
  for(int i = 0; i < row; i++)
  {
    matrizFinal[i][i] = matrizInicial[contadorDiagonalSecundariaRow][contadorDiagonalSecundariaCol];
    contadorDiagonalSecundariaCol--;
    contadorDiagonalSecundariaRow++;
  }

  contadorDiagonalSecundariaCol = MAX-1;
  contadorDiagonalSecundariaRow = 0;

  for(int i = 0; i < row; i++)
  {
    matrizFinal[contadorDiagonalSecundariaRow][contadorDiagonalSecundariaCol] = matrizInicial[i][i];
    contadorDiagonalSecundariaCol--;
    contadorDiagonalSecundariaRow++;
  }
}

void linha5Coluna10(int row, int col, int matrizInicial[row][col], int matrizFinal[row][col])
{
    printf("IMPRIMINDO LINHA 5 E COLUNA 10\n");

  for(int i = 0; i < row; i++)
    printf("[%i]\t", matrizInicial[5][i]);
  printf("\n");
  for(int i = 0; i < row; i++)
    printf("[%i]\t", matrizInicial[i][9]);
  printf("\n");

  for(int i = 0; i < row; i++)
    matrizFinal[5][i] = matrizInicial[i][9];

  for(int i = 0; i < row; i++)
    matrizFinal[i][9] = matrizInicial[5][i];
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
  // copiando matriz primaria para a final
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

  // alterando matriz
  linha2Linha8(MAX, MAX, matriz1, matrizFinal);
  coluna4Coluna10(MAX, MAX, matriz1, matrizFinal);
  diagonalPrincipalDiagonal(MAX, MAX, matriz1, matrizFinal);
  linha5Coluna10(MAX, MAX, matriz1, matrizFinal);

  // output matriz alterada
  printf("Matriz alterada: \n");
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
