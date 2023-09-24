#include<stdio.h>

int main ()
{
  int n;

  printf("Escreva um numero: ");
  scanf("%i", &n);

  for (int i = n; i > 0; i--)
  {
    if (n % i == 0)
      printf("%i, ", i);
  }

  printf("\n");

  return 0;
}