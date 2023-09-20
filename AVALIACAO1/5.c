#include <stdio.h>
#include <math.h>

struct pontos
{
  float x;
  float y;
};

int main()
{
  struct pontos p1;
  struct pontos p2;
  double total;

  printf("escreva x para o P1: ");
  scanf("%f", &p1.x);
  printf("escreva y para o P1: ");
  scanf("%f", &p1.y);
  printf("escreva x para o P2: ");
  scanf("%f", &p2.x);
  printf("escreva y para o P2: ");
  scanf("%f", &p2.y);

  total = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p2.y), 2));

  printf("a distancia entre P1(%.2f %.2f) P2(%.2f %.2f) eh %.4f\n", p1.x, p1.y, p2.x, p2.y, total);

  return 0;
}