#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
  float a[MAX];
  float somaDePositivos = 0;
  int quantidadeDeNegativos = 0;

  printf("Escreva 10 valores: \n");
  for (int i = 0; i < MAX; i++)
  {
    printf("Valor %i: ", i + 1);
    scanf("%f", &a[i]);
  }

  system("clear");

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", a[i]);
    else
      printf("%.2f }\n", a[i]);

  for (int i = 0; i < MAX; i++)
  {
    if (a[i] > 0)
    {
      somaDePositivos += a[i];
    }
    else
    {
      quantidadeDeNegativos++;
    }
  }

  printf("A soma dos positivos eh %.2f e a quantidade de negativos eh %i\n", somaDePositivos, quantidadeDeNegativos);

  return 0;
}