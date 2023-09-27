#include <stdio.h>

#define MAX 6

int main()
{
  int A[MAX] = {1, 0, 5, -2, -5, 7};
  int soma;

  for (int i = 0; i < MAX; i++)
    if (i == 0 || i == 1 || i == 5)
      soma += A[i];
  
  A[4] = 100;

  printf("A =  { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", A[i]);
    else
      printf("%i }\n", A[i]);

  printf("A soma: %i\n", soma);

  return 0;
}