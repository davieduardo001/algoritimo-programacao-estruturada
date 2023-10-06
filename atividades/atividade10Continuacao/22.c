#include <stdio.h>

#define MAX 10
#define MAX2 20

int main ()
{
  int A[MAX], B[MAX], C[MAX2];
  int count = 0;

  printf("Escreva 10 valores inteiros para o vetor A:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%i", &A[i]);
  }

  printf("Escreva 10 valores inteiros para o vetor B:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%i", &B[i]);
  }

  for (int i = 0; i < MAX2; i++)
    if ((i % 2) == 0)
    {
      C[i] = A[count];
      count++;
    }
  
  count = 0;
  for (int i = 0; i < MAX2; i++)
    if (!((i % 2) == 0))
    {
      C[i] = B[count];
      count++;
    }

  printf("C = { ");
  for (int i = 0; i < MAX2; i++)
    if (i != MAX2 - 1)
      printf("%i, ", C[i]);
    else
      printf("%i }\n", C[i]);
  
  return 0;
}
