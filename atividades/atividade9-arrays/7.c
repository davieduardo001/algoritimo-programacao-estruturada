#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
  int a[MAX];
  int maior, posicao;

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

  maior = a[0];
  for (int i = 0; i < MAX; i++)
    if (maior < a[i])
    {
      posicao = i;
      maior = a[i];
    }

  printf("O maior %i e a posicao que se encontra eh a  %i\n", maior, (posicao+1));

  return 0;
}