#include <stdio.h>
 
#define MAX 3

int main ()
{
  int v[MAX], apenasPrimos[MAX], posicoesPrimos[MAX], contadorDeDivisores = 0, maiorNumero = 0, nPrimos = 0;

  printf("escreva 10 numeros: \n");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um n: ");
    scanf("%i", &v[i]);
  }

  // sabendo o maior numero para fazer a verificacao se eh primo ou nn:
  maiorNumero = v[0];
  for (int i = 0; i < MAX; i++)
    if (maiorNumero <= v[i])
      maiorNumero = v[i];

  //faz a verificacao se eh primo ou nn:
  for (int i = 0; i < MAX; i++)
  {
    contadorDeDivisores = 0;

    // verifica se o numero eh primo, faz a verificacao ate o maior numero presente no vetor, porque sim.
    for (int j = 1; j <= maiorNumero; j++)
      if (v[i] % j == 0)
        contadorDeDivisores++;
    
    // adicoina no vetor os primos
    if (contadorDeDivisores == 2)
    {
      apenasPrimos[nPrimos] = v[i];
      posicoesPrimos[nPrimos] = i;
      nPrimos++;
    }
  }

  printf("apenasPrimos = { ");
  for (int i = 0; i < nPrimos; i++)
    if (i != nPrimos - 1)
      printf("%i (%i), ", apenasPrimos[i], posicoesPrimos[i]);
    else
      printf("%i (%i) }\n", apenasPrimos[i], posicoesPrimos[i]);


  return 0;
}