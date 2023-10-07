#include <stdio.h>

// C = A - B

#define MAX 10

int main ()
{
  int A[MAX], B[MAX], C[MAX];

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



  printf("C = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", C[i]);
    else
      printf("%i }\n", C[i]);
  
  return 0;
}
