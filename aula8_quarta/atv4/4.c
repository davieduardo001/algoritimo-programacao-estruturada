#include<stdio.h>

//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).

int main() {

  int A = 12, B = 23, C = 32;
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

  if ((maior == A && menor == B) || (maior == B && p2 == A))
    p2 = C;
  else if ((maior == A && menor == C) || (maior == C && menor == A))
    p2 = B;
  else if ((maior == B && menor == C) || (maior == C && menor == B))
  {
    p2 = A;
  }

    printf("sequencia decrescente: %d, %d e %d\n", maior, p2, menor);



  return 0;
}