#include <stdio.h>
#include <string.h>

int main()
{
  int codigo, opcao = 1;
  float precoUnitario, valorTotal;
  char nome[40];

  do
  {
    printf("Opcoes de lanche:\nChachorro (10,10)\nBauro simples(3,8)\nBauro Ovo(12,50)\nHamburguer(3,10\nCheeseburguer (13, 50)");

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 100:
      precoUnitario = 10.10;
      valorTotal += precoUnitario;
      strcpy(nome, "Cachorro");
      break;
    case 101:
      precoUnitario = 8.30;
      valorTotal += precoUnitario;
      strcpy(nome, "Bauro Simples");
      break;
    case 102:
      precoUnitario = 8.50;
      valorTotal += precoUnitario;
      strcpy(nome, "Bauro com Ovo");
      break;
    case 103:
      precoUnitario = 12.50;
      valorTotal += precoUnitario;
      strcpy(nome, "Hamburguer");
      break;
    case 104:
      precoUnitario = 13.25;
      valorTotal += precoUnitario;
      strcpy(nome, "Cheeseburger");
      break;
    default:
      printf("nn tem itens com esse codigo .-.\n");
      return 1;
    }

    printf("%s - %d\n", nome, precoUnitario);

    printf("Deseja adicionar mais um? (digite 0 para sair) ");
    scanf("%d", &opcao);

  } while (opcao != 0);

    return 0;
  }