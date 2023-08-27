#include <stdio.h>

// 4. Leia o peso e imprima se é menor que 60kg;

int main()
{

  double peso;

  printf("escreva seu peso: ");
  scanf("%lf", &peso);

  if (peso > 60)
    printf("voce tem mais que 60kg\n");
  else if (peso == 60)
    printf("voce tem exatamente 60kgn");
  else
    printf("voce tem menos de 60kg\n");

  return 0;
}