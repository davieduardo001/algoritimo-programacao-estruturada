#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
  int a[MAX];
  int pares = 0;

  printf("Escreva 10 valores: ");
  for (int i = 0; i < MAX; i++)
    scanf("%i", &a[i]);

  system("clear");

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", a[i]);
    else
      printf("%i }\n", a[i]);

  for (int i = 0; i < MAX; i++)
    if ((a[i] % 2) == 0)
      pares++;

  printf("Sao %i numeros pares totais\n", pares);
  return 0;
}