#include<stdio.h>

int main ()
{
  int x3 = 1, x2 = 1, x1 = 0, n;

  printf("Escreva um numero: ");
  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    x3 = x1 + x2;
    printf("%i ", x3);
    x1 = x2;
    x2 = x3;
  }
  printf("\n");
  return 0;
}