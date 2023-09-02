#include <stdio.h>
// dados tres valores A, B e C, construa um algoritimo que imprima os vaores de forma ascendente (do menor para o maior)

int main()
{

  int A = 432, B = 32, C = 1;
  // int numerosEmOrdem[5];
  int maior = A, p2, menor = C;

  if (maior < A)
    maior = A;
  if (maior < B)
    maior = B;
  if (maior < C)
    maior = C;

  if (menor > A)
    menor = A;
  if (menor > B)
    menor = B;
  if (menor > C)
    menor = C;

  if ((maior == A && menor == B) || (maior == B && menor == A))
  {
    p2 = C;
  }
  else if ((maior == A && menor == C) || (maior == C && menor == A))
  {
    p2 = B;
  }
  else if ((maior == B && menor == C) || (maior == C && menor == B))
  {
    p2 = A;
  }

  printf("sequencia crescente: %d, %d e %d\n", menor, p2, maior);

  return 0;
}