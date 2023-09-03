#include <stdio.h>
#include <stdlib.h>

struct refeicoes
{
  int codigoPrato;
  char *prato;
  int codigoSobremesa;
  char *sobremesa;
  int codigoBebida;
  char *bebida;
  float calorias;
};

int main()
{

  // variables
  struct refeicoes refeicao;

  // inputs
  system("clear");
  printf("VAMOS MONTAR UMA REFEICAO <3\n\n");
  printf("Escolha seu prato:\n1 - vegetariano\n2 - peixe\n3 - frango\n4 - carne\n\n");
  printf("escreva o numero do prato de sua escolha: ");
  scanf("%i", &refeicao.codigoPrato);

  system("clear");
  printf("Escolha sua sobremesa:\n1 - abacaxi\n2 - sorvete diet\n3 - mouse diet\n4 - mouse chocolate\n\n");
  printf("escreva o numero da sobremesa de sua escolha: ");
  scanf("%i", &refeicao.codigoSobremesa);

  system("clear");
  printf("Escolha sua bebida:\n1 - cha\n2 - suco de laranja\n3 - suco de melao\n4 - refrigerante diet\n\n");
  printf("escreva o numero da bebida de sua escolha: ");
  scanf("%i", &refeicao.codigoBebida);

  // computing
  switch (refeicao.codigoPrato)
  {
  case 1:
    refeicao.calorias += 180;
    refeicao.prato = "Veg.";
    break;
  case 2:
    refeicao.calorias += 230;
    refeicao.prato = "Peixe";
    break;
  case 3:
    refeicao.calorias += 250;
    refeicao.prato = "Frango";
    break;
  case 4:
    refeicao.calorias += 350;
    refeicao.prato = "Carne";
    break;
  default:
    printf("nao existe PRATO com esse numero.\n");
    return 1;
  }

  switch (refeicao.codigoSobremesa)
  {
  case 1:
    refeicao.calorias += 75;
    refeicao.sobremesa = "Abacaxi";
    break;
  case 2:
    refeicao.calorias += 110;
    refeicao.sobremesa = "Sorvete diet";
    break;
  case 3:
    refeicao.calorias += 170;
    refeicao.sobremesa = "Mouse diet";
    break;
  case 4:
    refeicao.calorias += 200;
    refeicao.sobremesa = "Mouse chocolate";
    break;
  default:
    printf("nao existe SOBREMESA com esse numero.\n");
    return 1;
  }

  switch (refeicao.codigoBebida)
  {
  case 1:
    refeicao.calorias += 20;
    refeicao.bebida = "Cha";
    break;
  case 2:
    refeicao.calorias += 70;
    refeicao.bebida = "Suco de laranja";
    break;
  case 3:
    refeicao.calorias += 100;
    refeicao.bebida = "Suco de melao";
    break;
  case 4:
    refeicao.calorias += 65;
    refeicao.bebida = "Refrigerante diet";
    break;
  default:
    printf("nao existe BEBIDA com esse numero.\n");
    return 1;
  }

  system("clear");
  printf("\n\nSUA REFEICAO MONTADA ASSIM:\n\n* prato: %s\n* subremesa: %s\n* bebida: %s\n\n\n TOTAL DE CALORIAS: %.2fcal\n\nBOA REFEICAO <3\n\n\n", refeicao.prato, refeicao.sobremesa, refeicao.bebida, refeicao.calorias);

  return 0;
}