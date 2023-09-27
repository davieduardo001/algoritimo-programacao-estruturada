#include <stdio.h>

#define MAX 6

int main()
{
  int a[MAX];

  printf("Escreva 6 valores inteiros: ");
  for (int i = 0; i < MAX; i++)
    scanf("%i", &a[i]);

  printf("A SAIDA EH: { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX-1)
      printf("%i, ", a[i]);
    else 
      printf("%i }\n", a[i]);

  return 0;
}