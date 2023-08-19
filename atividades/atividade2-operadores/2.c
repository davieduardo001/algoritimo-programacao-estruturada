#include<stdio.h>

//! 2. Escreva um programa que receba um número qualquer e mostre o seu dobro.

int main() {

  //* variables
  float n;

  //* inputs
  printf("escreva um numero: ");
  scanf("%f", &n);

  //* computing
  n *= 2;

  //* output
  printf("O sobro eh: %.1f", n);

  return 0;
}
