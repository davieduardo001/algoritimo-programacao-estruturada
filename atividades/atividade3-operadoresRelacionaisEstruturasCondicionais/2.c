#include<stdio.h>

// 2. Leia o salário e imprima se ganha mais que o mínimo;

int main() {

  double salario;

  printf("escreva o seu salario: ");
  scanf("%lf", &salario);

  if(salario > 1350)
    printf("voce ganha mais q um salario minimo\n");
  else if(salario == 1350)
    printf("voce ganha um salario minimo\n");
  else 
    printf("voce ganha menos q um sario minimo\n");

  return 0;
}