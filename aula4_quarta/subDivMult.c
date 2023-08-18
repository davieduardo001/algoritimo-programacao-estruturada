#include<stdio.h>

int main() {

  int num1, num2, sub, mult;
  double div;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  sub = num1 - num2;
  mult = num1 * num2;
  div = (float)num1 / num2; //convercao em tempo de execucao (casting)

  printf("subtracao: %d\n", sub);
  printf("multiplicacao: %d\n", mult);
  printf("divisao: %.2f\n", div);

  return 0;
}
