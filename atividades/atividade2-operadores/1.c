#include<stdio.h>
// 1. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.
int main() {
  // variables
  int n1, n2, soma, sub, mult;
  float div;

  // inputs
  printf("Escreva um numero: ");
  scanf("%i", &n1);

  printf("Escreva outro numero: ");
  scanf("%i", &n2);

  // computing
  soma = n1 + n2;
  sub = n1 - n2;
  mult = n1 * n2;
  div = (float)n1 / n2;

  // outputs
  printf("A soma eh: %i\nA subtracao %i\nA multiplicacao %i\nA divisao %.2f\n\n", soma, sub, mult, div);

  return 0;
}
