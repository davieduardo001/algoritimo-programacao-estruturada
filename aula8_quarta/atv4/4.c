#include<stdio.h>

//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).

int main() {

  int A = 12, B = 23, C = 32;
  int p1 = A, p2, p3 = C;

  if (p1 < A)
    p1 = A;
  if (p1 < B)
    p1 = B;
  if (p1 < C)
    p1 = C;

  if (p3 > A)
    p3 = A;
  if (p3 > B)
    p3 = B;
  if (p3 > C)
    p3 = C;

  if ((p1 == A && p3 == B) || (p1 == B && p2 == A))
    p2 = C;
  else if ((p1 == A && p3 == C) || (p1 == C && p3 == A))
    p2 = B;
  else if ((p1 == B && p3 == C) || (p1 == C && p3 == B))
  {
    p2 = A;
  }

    printf("sequencia decrescente: %d, %d e %d\n", p1, p2, p3);



  return 0;
}