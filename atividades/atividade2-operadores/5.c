#include <stdio.h>

//! 5. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.

int main()
{

  //* variables
  float custoInicial, frete, adicionais, custoFinal, valorDeVenda, lucro;

  //* inputs
  printf("DIGITE O CUSTO INICIAL PARA A PRODUCAO DO PRODUTO: ");
  scanf("%f", &custoInicial);
  fflush(stdin);

  printf("Digite o frete que teria de pagar: ");
  scanf("%f", &frete);
  fflush(stdin);

  printf("Digite os custos adicionais que teria para o produto: ");
  scanf("%f", &adicionais);
  fflush(stdin);

  custoFinal = adicionais + frete + custoInicial;

  //* outputs
  printf("--O VALOR DO PRODUTO EH: R$%.2f--\n\n", custoFinal);

  printf("Por quanto voce quer vender seu produto? ");
  scanf("%f", &valorDeVenda);
  fflush(stdin);

  //* computing
  lucro = (valorDeVenda - custoFinal);
  lucro = (lucro * 100) / custoFinal;

  //* outputs
  printf("TEU LUCRO EH DE: %.2f%%\n\n", lucro);

  return 0;
}
