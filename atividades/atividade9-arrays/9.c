#include <stdio.h>
#include <stdlib.h>

#define MAX 6

int main()
{
  int a[MAX];

  printf("Escreva 6 valores: ");

  for (int i = 0; i < MAX; i++)
  {
    scanf("%i", &a[i]);
    if (!(a[i] % 2 == 0))
    {
      printf("valor nao eh par!! escreva novamente\n");
      i--;
    }
  }

  system("clear");

  printf("Ordem normal:\n");
  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", a[i]);
    else
      printf("%i }\n", a[i]);

  printf("Ordem inversa: ");
  printf("a = { ");
  for (int i = (MAX-1); i >= 0; i--)
    if (i != 0)
      printf("%i, ", a[i]);
    else
      printf("%i }\n", a[i]);

  return 0;
}