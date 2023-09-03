#include <stdio.h>

/*
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/

// achei mais facil trabalhar com struct e strings <3
struct items
{
  char *name;
  float valorTotal;
  int quantidade;
  int codigoItem;
};

int main()
{

  struct items item;

  printf("escreva o codigo do item que comprou: ");
  scanf(" %d", &item.codigoItem);

  printf("escreva a quantidade de itens q comprou: ");
  scanf(" %d", &item.quantidade);

  switch (item.codigoItem)
  {
  case 100:
    item.valorTotal = 10.10 * item.quantidade;
    item.name = "Cachorro quente";
    break;
  case 101:
    item.valorTotal = 8.30 * item.quantidade;
    item.name = "Bauru simples";
    break;
  case 102:
    item.valorTotal = 8.50 * item.quantidade;
    item.name = "Bauru com ovo";
    break;
  case 103:
    item.valorTotal = 12.50 * item.quantidade;
    item.name = "Hamburguer";
    break;
  case 104:
    item.valorTotal = 13.25 * item.quantidade;
    item.name = "Cheeseburger";
    break;
  default:
    printf("nn tem itens com esse codigo .-.");
    return 1;
  }

  printf("* Quantidade de itens: %i\n* Item: %s\n* Valor total eh: R$%.2f\n", item.quantidade, item.name, item.valorTotal);

  return 0;
}