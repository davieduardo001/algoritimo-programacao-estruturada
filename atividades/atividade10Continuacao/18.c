#include <stdio.h>

#define MAX 10

int main ()
{
  int  v[MAX];
  int x, quantidadeDeMultiplos = 0;

  printf("Escreva 10 valores inteiros:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%i", &v[i]);
  }

  printf("escreva um valor para x: ");
  scanf("%i", &x);

  for (int i = 0; i < MAX; i++)
    if ((v[i] % x) == 0)
      quantidadeDeMultiplos++;

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", v[i]);
    else
      printf("%i }\n", v[i]);

  printf("a quantidade de multiplos de x == %i, eh %i\n", x, quantidadeDeMultiplos);
  
  return 0;
}