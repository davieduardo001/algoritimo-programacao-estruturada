#include <stdio.h>

#define MAX 10

int main ()
{
  int  v[MAX];
  int resposta;

  printf("Escreva 10 valores inteiros: ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%i", &v[i]);
  }

  for (int i = 0; i < MAX; i++)
    if ((v[i] % 2) != 0)
      v[i] = 0;

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", v[i]);
    else
      printf("%i }\n", v[i]);

  return 0;
}