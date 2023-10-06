#include <stdio.h>

#define MAX 10

int main ()
{
  int v[MAX];
  int apenasImapares[MAX];
  int j = 0;

  printf("Escreva 10 valores inteiros:\n ");
  for (int i = 0; i < MAX; i++)
  {
    do
    {
      printf("Escreva um numero: ");
      scanf("%i", &v[i]);

      if (!(v[i] >= 0 && v[i] <= 50))
        printf("!!Valor nao valido, adicone um valor entre 0 e 50\n");
    } while (!(v[i] >= 0 && v[i] <= 50));

  }

  for (int i = 0; i < MAX; i++)
  {
    if (!((v[i] % 2) == 0))
    {
      apenasImapares[j] = v[i];
      j++;
    }
  }

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", v[i]);
    else
      printf("%i }\n", v[i]);

  printf("v: ");
  for (int i = 0; i < MAX; i++)
  {
    printf("%i ", v[i]);
    i++;
    printf("%i\n", v[i]);
  }

  printf("apenas impares: ");
  for (int i = 0; i < j; i++)
  {
    printf("%i ", apenasImapares[i]);
    i++;
    printf("%i\n", apenasImapares[i]);
  }
  
  return 0;
}
