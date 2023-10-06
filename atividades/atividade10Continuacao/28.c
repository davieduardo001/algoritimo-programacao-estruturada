#include <stdio.h>

#define MAX 10

int main ()
{
  int v[MAX], v1[MAX], v2[MAX], countPar, countImpar;

  printf("escreva o vetor com 10 numeros inteiros: ");
  for (int i = 0; i < MAX; i++)
    scanf("%i", &v[i]);


  countPar = 0;
  for (int i = 0; i < MAX; i++)
    if ((v[i] % 2) == 0)
    {
      v1[countPar] = v[i];
      countPar++;
    }

  countImpar = 0;
  for (int i = 0; i < MAX; i++)
    if (!((v[i] % 2) == 0))
    {
      v2[countImpar] = v[i];
      countImpar++;
    }

  printf("v1 = { ");
  for (int i = 0; i < countPar; i++)
    if (i != countPar - 1)
      printf("%i, ", v1[i]);
    else
      printf("%i }\n", v1[i]);
  
  printf("v2 = { ");
  for (int i = 0; i < countImpar; i++)
    if (i != countImpar - 1)
      printf("%i, ", v2[i]);
    else
      printf("%i }\n", v2[i]);

  return 0;
}