#include <stdio.h>

//! 10. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.

int main() {

  //*  variables
  int nCarros;
  float vendasTotais, salarioFixo, valorPorCarroVendido, salarioFinal;

  //*  inputs
  printf("\n\n__CALCULE O SALARIO DE SEU FUNCIONARIO__\n\n");

  printf("Quantidade de carros: ");
  scanf("%d", &nCarros);
  fflush(stdin);

  printf("Valor total de vendas: ");
  scanf("%f", &vendasTotais);
  fflush(stdin);

  printf("Salario fixo: ");
  scanf("%f", &salarioFixo);
  fflush(stdin);

  printf("Quanto ele recebe por carro vendido: ");
  scanf("%f", &valorPorCarroVendido);
  fflush(stdin);

  //*  computing 
  salarioFinal = salarioFixo + (nCarros * valorPorCarroVendido) + (vendasTotais*5/100);

  //*  outputs
  printf("\n\nO SALARIO DE SEU FUNCIONARIO ESSE MES EH DE: %.2f\n\n", salarioFinal);

  return 0;
}