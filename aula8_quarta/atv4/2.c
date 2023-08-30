#include <stdio.h>
// construa um algoritimo que dado quatro valores A, B, C e D, o algotimo imprima o maior e o menor valor

int main()
{

  int A = -8, B = 54, C = 4, D = 32;
  // int numerosEmOrdem[5];
  int p1 = A, p4 = D;

  if (p1 < A)
    p1 = A;
  if (p1 < B)
    p1 = B;
  if (p1 < C)
    p1 = C;
  if (p1 < D)
    p1 = D;

  if (p4 > A)
    p4 = A;
  if (p4 > B)
    p4 = B;
  if (p4 > C)
    p4 = C;
  if (p4 > D)
    p4 = D;


  printf("o maior numero eh: %d\n", p1);
  printf("o menor numero eh: %d\n", p4);

  return 0;
}