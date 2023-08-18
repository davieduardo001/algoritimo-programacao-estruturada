#include<stdio.h>

// 8. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

int main() {

  float salarioAtual, percentual, salarioFinal;

  printf("ESCREVA O SALARIO ATUAL: ");
  scanf("%f", &salarioAtual);
  fflush(stdin);

  printf("ESCREVA O PERCENTUAL DE AUMENTO DO SALARIO: ");
  scanf("%f", &percentual);
  fflush(stdin);

  salarioFinal = salarioAtual+((salarioAtual*percentual)/100);

  printf("\n\n__SEU NOVO SALARIO EH DE__\n R$%.2f\n\n", salarioFinal);

  return 0;
}