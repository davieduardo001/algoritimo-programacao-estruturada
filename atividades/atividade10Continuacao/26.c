#include <stdio.h>
#include <math.h>

#define MAX 3

int main ()
{
  double  v[MAX], xElemento[MAX];
  double media = 0, dp = 0, valorGuardado;

  printf("Escreva 10 valores:\n ");
  for (int i = 0; i < MAX; i++)
  {
    printf("Escreva um numero: ");
    scanf("%lf", &v[i]);
  }

  // calculadno a media
  for (int i = 0; i < MAX; i++)
      media += v[i];
  media /= MAX;
  
  //calculando o desvio padrao
  for (int i = 0; i < MAX; i++)
  {
    printf("%.2f - %.2lf = %.2lf", v[i], media, pow((v[i]-media), 2));
    valorGuardado += pow((v[i]-media), 2);
  }
  valorGuardado = sqrt((valorGuardado / MAX));

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%.2lf, ", v[i]);
    else
      printf("%.2lf }\n", v[i]);
    
  printf("a media eh %.2lf e a dp eh %lf\n", media, valorGuardado);
  return 0;
}