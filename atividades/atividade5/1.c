#include<stdio.h>

// codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.

int main () {

  int n;

  printf("escreva um numero inteiro: ");
  scanf("%i", &n);

  if ( (n%2) == 0 ) 
    printf("o numero e par.\n");

  return 0;
}