#include <stdio.h>

int main()
{
  double chico = 1.50, ze = 1.10;
  int anos = 0;

  for (chico; chico > ze; chico += 0.02)
  {
    ze += 0.03;
    anos++;
    printf("chico: %f, ze: %f -> ANO(%d)\n", chico, ze, anos);
  }

  printf("a quantidade de anos eh: %d\n", anos);

  return 0;
}