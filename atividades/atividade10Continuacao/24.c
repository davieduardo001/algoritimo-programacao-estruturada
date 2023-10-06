#include <stdio.h>

#define MAX 10

int main ()
{
  int index[MAX];
  float altura[MAX];
  float maior, menor;
  int  menorIndex, maiorIndex;

  printf("Escreva 10 matriculas dos alunos:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%i", &index[i]);
  }

  printf("Escreva 10 alturas:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva uma altura para o aluno %i: ", index[i]);
    scanf("%f", &altura[i]);
  }

  // verificando o maior
  maior = altura[0];
  for (int i = 0; i < MAX; i++)
  {
    if (maior <= altura[i])
    {
      maior = altura[i];
      maiorIndex = index[i];
    }
  }

  // verificando a menor
  menor = altura[0];
  for (int i = 0; i < MAX; i++)
  {
    if (menor >= altura[i])
    {
      menorIndex = index[i];
      menor = altura[i];
    }
  }

  printf("INDEXES = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", index[i]);
    else
      printf("%i }\n", index[i]);

  printf("ALTURAS = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", altura[i]);
    else
      printf("%.2f }\n", altura[i]);

  printf("MAIOR: altura(%.2f), index(%i)\nMENOR: altura(%.2f), index(%i)\n", maior, maiorIndex, menor, menorIndex);

  return 0;
}