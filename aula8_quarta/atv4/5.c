#include<stdio.h>

//Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

int main() {

  float n;

  printf("escreva um numero: ");
  scanf("%f", &n);

  if (n == 5)
    printf("n eh igual a 5\n");
  else if (n == 200)
    printf("n eh igual a 200\n");
  else if (n == 400)
    printf("n eh igual a 400\n");
  else if ((n > 500) && (n < 1000))
    printf("n esta entre 500 e 1000\n");
  else {
    printf("n esta fora dos escopos. \n");
  }
  return 0;
}