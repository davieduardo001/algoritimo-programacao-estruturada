#include <stdio.h>
#include <stdlib.h>

#define MAX 8

int main()
{
  int a[MAX];
  int posicaoX, posicaoY;

  printf("Escreva 8 valores: ");
  for (int i = 0; i < MAX; i++)
    scanf("%i", &a[i]);

  system("clear");

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", a[i]);
    else
      printf("%i }\n\n", a[i]);

  printf("Selecione uma posicao para X [1-8]: ");
  scanf("%i", &posicaoX);

  printf("Selecione uma posicao para Y [1-8]: ");
  scanf("%i", &posicaoY);

  printf("Os valores selecionados foram: X = %i e Y = %i\n", a[posicaoX - 1], a[posicaoY - 1]);

  printf("A soma entre X e Y eh: %i\n", (a[posicaoX - 1] + a[posicaoY - 1]));
  return 0;
}