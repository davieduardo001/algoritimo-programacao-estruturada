#include <stdio.h>

#define MAX 10

int main()
{
  int a[MAX];
  int doubleOfA[MAX];

  printf("Escreva 10 valores: ");
  for (int i = 0; i < MAX; i++)
    scanf("%i", &a[i]);

  for (int i = 0; i < MAX; i++)
    doubleOfA[i] = a[i] * a[i];

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", a[i]);
    else
      printf("%i }\n", a[i]);

  printf("a[i*i] = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", doubleOfA[i]);
    else
      printf("%i }\n", doubleOfA[i]);

  return 0;
}