#include <stdio.h>

float volumeEsfera(float r)
{
  return 4/3*3.1414592*(r*r*r);
}

int main()
{
  printf("Te volume is: %.2f\n", volumeEsfera(32));

  return 0;
}