#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
  int a[MAX];
  int maior, menor, posicaoMaior, posicaoMenor;

  printf("Escreva 5 valores: ");

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
      maior = a[i];
      posicaoMaior = i;
    }

  menor = a[0];
  for (int i = 0; i < MAX; i++)
    if (menor > a[i])
    {
      menor = a[i];
      posicaoMenor = i;
    }

  printf("O maior posicao %i e menor posicao %i\n", posicaoMaior + 1, posicaoMenor + 1);

  return 0;
}