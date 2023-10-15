#include <stdio.h>

int maiorEntreDois(int n1, int n2)
{
  int maior = n1;

  if (maior < n2)
    maior = n2;

  return maior;
}

int main()
{
  
  int maior = maiorEntreDois(100, 4);

  printf("maior: %i\n", maior);

  return 0;
}