#include <stdio.h>

#define MAX 10

int main()
{
  float a[MAX];
  float doubleOfA[MAX];

  printf("Escreva 10 valores: ");
  for (int i = 0; i < MAX; i++)
    scanf("%f", &a[i]);

  // alocando no array vazio
  for (int i = 0; i < MAX; i++)
    doubleOfA[i] = a[i] * a[i];

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", a[i]);
    else
      printf("%.2f }\n", a[i]);

  printf("a[i*i] = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2f, ", doubleOfA[i]);
    else
      printf("%.2f }\n", doubleOfA[i]);

  return 0;
}