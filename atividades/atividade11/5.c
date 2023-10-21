#include <stdio.h>

#define PI 3.1414592

float volumeEsfera(float r)
{
  return (4*PI*(r*r*r))/3;
}

int main()
{
  float n;
  printf("raio: ");
  scanf("%f", &n);

  printf("Numero: %.2f, o volume eh: %.2f\n", n, volumeEsfera(n));

  return 0;
}