#include<stdio.h>

/*

2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. 

*/

#define MAX 500

int quantidadeDeLocacaoGratuita(int filmesAlocados)
{
  int gratuidade = 0;

  gratuidade = filmesAlocados/15;

  return gratuidade;
}

void criarVetor(int *initialArray, int size, int *finalArray)
{
  for(int i = 0; i < size; i++)
    finalArray[i] = quantidadeDeLocacaoGratuita(initialArray[i]);
}

int main()
{
  int pessoas[MAX] = {3, 43, 15, 9};
  int finalArray[MAX] = {0};

  criarVetor(pessoas, MAX, finalArray);

  for(int i = 0; i < MAX; i++)
    printf("cliente %i; alococou %i filmes e tem %i alocacoes gratuitas\n", i+1, pessoas[i], finalArray[i]);

  printf("\n");

  return 0; 

}
