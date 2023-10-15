#include <stdio.h>

float volumeCilindro(float raio, float altura)
{
  return 3.1414592 * (raio*raio) * altura;
}

int main()
{
  printf("o volume eh: %.2f\n", volumeCilindro(32, 12));

  return 0;
}