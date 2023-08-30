#include<stdio.h>

//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: 
//TODO • Ter pelo menos 65 anos; 
//TODO • Ou ter trabalhado pelo menos 30 anos;
//TODO • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 

int main() {

  int idade, tempoServico;

  printf("escreva sua idade: ");
  scanf("%i", &idade);
  fflush(stdin);

  printf("escreva seu tempo de servico: ");
  scanf("%i", &tempoServico);
  fflush(stdin);

  if ( (idade >= 65) || (tempoServico >= 30) || (tempoServico >= 25 && idade >= 60) )
    printf("pode se aposentar\n");
  else
    printf("nao se pode aposentar\n");

  return 0;
}