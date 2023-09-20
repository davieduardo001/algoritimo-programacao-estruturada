#include<stdio.h>
#include<math.h>

int main()
{
  int x = 0;

  printf("Insira um numero: ");
  scanf("%d", &x);

  x = ((5*x) + 3) / sqrt((pow(x,2) - 16));

  printf("resultado: %d", x);

  return 0;
}