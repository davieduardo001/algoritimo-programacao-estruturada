#include<stdio.h>
#include<stdlib.h>
#include "funcs.h"

/*

1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto
b) Opção: em duas vezes (preço da etiqueta)
c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

> OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção).

*/

float valorGasto();
int opcoesDePagamento();
float calcularPrestacao(int, float);

int main()
{
  float valor, prestacoes;
  int opcao;

  //recebendo e verificando o valor
  valor = valorGasto();
  printf("R$%.2f\n", valor);
  getchar();
  system("clear");

  // selecionando as opcoes
  do
  {
    opcao = opcoesDePagamento();

    if (!(opcao >= 1 && opcao <= 10))
      printf("Valor nao valido...");
    if ((opcao >= 3 && opcao <= 10) && (valor <= 100))
      printf("Valor muito baixo para a quantidade de parcelas... (deve ser ou a vista ou em duas vezes)\n");

  } while ((!(opcao >= 1 && opcao <= 10)) || ((opcao >= 3 && opcao <= 10) && valor <= 100));

  // calculando as prestacoes
  prestacoes = calcularPrestacao(opcao, valor);

  // output
  system("clear");
  printf("RESULTADOS\n");
  printf("Voce tera de pagar R$%.2f por %i meses\n", prestacoes, opcao);


  return 0;
}
