#include<stdio.h>

int main()
{
  float total, valor;
  int confirmacao, codigo;

  do {
    printf("--TABELA DE PRECOS--\n\n");
    printf("1. Abacaxi (R$5.00)\n2. Maca (R$1.00)\n3. Pera (R$4.00)\nESCOLHA UM DOS VALORES ACIMA\n\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
      case 1:
        total += 5;
        break;
      case 2:
        total += 1;
        break;
      case 3:
        total += 4;
        break;
      default:
        printf("codigo nao encontrado na tabela, valor adicionar um valor valido!\n");
    }

    printf("deseja adicionar mais alguma fruta ao carrinho? (digite 1 para sair do programa) ");
    scanf("%d", &confirmacao);

  } while (confirmacao != 1);

  printf("Calculando o total...\n");
  printf("O total a pagar eh: R$%.2f\n\n", total);
  return 0;
}