#include <stdio.h>

int main()
{
  float x, y;

  printf("escreva x: ");
  scanf("%f", &x);
  printf("escreva y: ");
  scanf("%f", &y);

  if (y == 0 && x == 0)
    printf("ambos estao sob os eixo de origem\n");
  else if (y == 0)
    printf("esta sob o eixo y\n");
  else if (x == 0)
    printf("esta sob o eixo x\n");

  if (x == 0 && y == 0)
    printf("Origem\n");
  else if (x <= 0 && y <= 0)
    printf("Quadrante 1\n");
  else if (x >= 0 && y <= 0)
    printf("Quadrante 1\n");
  else if (x >= 0 && y >= 0)
    printf("Quadrante 1\n");
  else if (x <= 0 && y >= 0)
    printf("Quadrante 1\n");

  return 0;
}