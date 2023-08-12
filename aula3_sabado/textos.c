#include<stdio.h>

int main()
{
  char pais[30];
  char nome[50] = "Jao da Silva Faustão";
  char endereco[30];

  //variaveis q armazenam texto
  printf("O nome eh: %s\n", nome);

  //recebimento de strings
  printf("Digite o endereco... ");
  scanf("%[^\n]", endereco);
  fflush(stdin); //dependendo do OS precisa usar __fpurge() ou fflush()
  printf("O endereco eh: %s \n", endereco);
  getchar();


  //recebimento de dados com fgets
  printf("digite o pais: ");
  fgets(pais, 30, stdin); //mais usado e mais elegante(????) q scanf()
  printf("O pais digitado eh: %s", pais);

  return 0;
}
