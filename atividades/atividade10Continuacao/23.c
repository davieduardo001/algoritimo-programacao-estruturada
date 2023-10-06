#include <stdio.h>

#define MAX 5

int main ()
{
  float A[MAX], B[MAX];
  float produtoEscalar;

  printf("Escreva 5 valores reais para o vetor A:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%f", &A[i]);
  }

  printf("Escreva 5 valores reais para o vetor B:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%f", &B[i]);
  }

  for (int i = 0; i < MAX; i++)
    produtoEscalar += A[i] * B[i];

  printf("A = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", A[i]);
    else
      printf("%.2f }\n", A[i]);
  
  printf("B = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", B[i]);
    else
      printf("%.2f }\n", B[i]);

  printf("O produto escalar eh: %.2f\n", produtoEscalar);

  return 0;
}