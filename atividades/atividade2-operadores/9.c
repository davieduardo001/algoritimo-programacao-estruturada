#include<stdio.h>

/*
9. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para __ler o custo de fábrica__ de um carro, calcular e escrever o custo final ao consumidor

*/

int main() {

  float custoDeFabrica, custoFinal;

  printf("escreva o custo de fabrica do carro: ");
  scanf("%f", &custoDeFabrica);

  custoFinal = custoDeFabrica + (custoDeFabrica*28/100) + (custoDeFabrica*45/100);

  printf("O consumidor devera pagar: %.2f\n'n", custoFinal);

  return 0;
}