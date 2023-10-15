#include <stdio.h>

void qualMes()
{
  int mesEmDia;

  printf("escreva um numero: ");
  scanf("%i", &mesEmDia);

  switch (mesEmDia)
  {
  case 1:
    printf("janeiro\n");
    break;
  case 2:
    printf("fevereiro\n");
    break;
  case 3:
    printf("marco\n");
    break;
  case 4:
    printf("abril\n");
    break;
  case 5:
    printf("maio\n");
    break;
  case 6:
    printf("junho\n");
    break;
  case 7:
    printf("julho\n");
    break;
  case 8:
    printf("agosto\n");
    break;
  case 9:
    printf("setembro\n");
    break;
  case 10:
    printf("outubro\n");
    break;
  case 11:
    printf("novembro\n");
    break;
  case 12:
    printf("desembro\n");
    break;
  default:
    printf("numero nn encontrado...\n");
    break;
  }
}

int main()
{
  qualMes();

  return 0;
}
