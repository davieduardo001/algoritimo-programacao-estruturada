#include <stdio.h>

float fToC(float F)
{
  return (F - 32.0) * (5.0 / 9.0);
}

float getF()
{
  float temp;

  printf("Escreva uma temp: ");
  scanf("%f", &temp);

  printf("temperatura %.2fF eh %.2fC\n", temp, fToC(temp));
}

int main()
{
  getF();
  
  return 0;
}