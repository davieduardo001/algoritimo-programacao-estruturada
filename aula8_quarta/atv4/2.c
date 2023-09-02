#include <stdio.h>
// construa um algoritimo que dado quatro valores A, B, C e D, o algotimo imprima o maior e o menor valor

int main()
{

  int A = -8, B = 54, C = 4, D = 32;
  // int numerosEmOrdem[5];
  int maior = A, menor = D;

  if (maior < A)
    maior = A;
  if (maior < B)
    maior = B;
  if (maior < C)
    maior = C;
  if (maior < D)
    maior = D;

  if (menor > A)
    menor = A;
  if (menor > B)
    menor = B;
  if (menor > C)
    menor = C;
  if (menor > D)
    menor = D;


  printf("o maior numero eh: %d\n", maior);
  printf("o menor numero eh: %d\n", menor);

  return 0;
}