#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
  int a[MAX];
  int maior, menor;
  float media = 0;

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
      maior = a[i];

  menor = a[0];
  for (int i = 0; i < MAX; i++)
    if (menor > a[i])
      menor = a[i];

  for (int i = 0; i < MAX; i++)
    media += (float)a[i];

  printf("O maior %i e menor %i e a media eh %.2f\n", maior, menor, media);

  return 0;
}