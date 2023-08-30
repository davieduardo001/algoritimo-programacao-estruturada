#include <stdio.h>
// dados tres valores A, B e C, construa um algoritimo que imprima os vaores de forma ascendente (do menor para o maior)

int main()
{

  int A = 432, B = 32, C = 1;
  // int numerosEmOrdem[5];
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

  if ((p1 == A && p3 == B) || (p1 == B && p3 == A))
    p2 = C;
  else if ((p1 == A && p3 == C) || (p1 == C && p3 == A))
  {
    p2 = B;
  }
  else if ((p1 == B && p3 == C) || (p1 == C && p3 == B))
  {
    p2 = A;
  }

  printf("sequencia crescente: %d, %d e %d\n", p3, p2, p1);

  return 0;
}