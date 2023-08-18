#include<stdio.h>

//2. Escreva um programa que receba um número qualquer e mostre o seu dobro.

int main() {
  float n;

  printf("escreva um numero: ");
  scanf("%f", &n);

  n *= 2;

  printf("O sobro eh: %.1f", n);

  return 0;
}
