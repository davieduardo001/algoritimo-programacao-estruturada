#include <stdio.h>

//?Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário.
//?Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.
// Faça um programa que leia:
// TODO • o valor do salario atual do funcionário;
// TODO • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
// Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

int main()
{
  float salarioAtual, salarioFinal;
  int tempoDeServico;

  printf("escreva seu salario atual: ");
  scanf("%f", &salarioAtual);
  fflush(stdin);

  printf("escreva a quantos anos trabalha para a empresa: ");
  scanf("%i", &tempoDeServico);

  if ((salarioAtual <= 500) && (tempoDeServico < 1))
    salarioFinal = salarioAtual + (salarioAtual * 0.25);
  else if ((salarioAtual <= 1000) && ((tempoDeServico >= 1) && (tempoDeServico <= 3)))
    salarioFinal = salarioAtual + (salarioAtual * 0.20) + 100;
  else if ((salarioAtual <= 1500) && ((tempoDeServico >= 4) && (tempoDeServico <= 6)))
    salarioFinal = salarioAtual + (salarioAtual * 0.15) + 200;
  else if ((salarioAtual <= 2000) && ((tempoDeServico >= 7) && (tempoDeServico <= 10)))
    salarioFinal = salarioAtual + (salarioAtual * 0.10) + 300;
  else if ((salarioAtual > 2000) && (tempoDeServico > 10))
    salarioFinal = salarioAtual + 500;
  else {
    printf("salario ou tempo de servico nao entram nos parametros de aumento salarial\n");
    return 1;
  }

  printf("Seu salario final eh de: %.2f\n", salarioFinal);
  return 0;
}