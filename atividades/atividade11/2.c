#include <stdio.h>
#include <string.h>

void qualMes()
{
  int mesEmDia, qtdDias;
  char *nome;

  printf("escreva um numero: ");
  scanf("%i", &mesEmDia);

  switch (mesEmDia)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    qtdDias = 31;
    if (mesEmDia == 1)
      nome = "janeiro";
    else if (mesEmDia == 3)
      nome = "marco";
    else if (mesEmDia == 5)
      nome = "maio";
    else if (mesEmDia == 7)
      nome = "julho";
    else if (mesEmDia == 8)
      nome = "agosto";
    else if (mesEmDia == 10)
      nome = "outubro";
    else if (mesEmDia == 12)
      nome = "dezembro";
    printf("Mes: %s, Dias: %i\n", nome, qtdDias);
    break;

  case 4:
  case 6:
  case 11:
  case 9:
    qtdDias = 30;
    if (mesEmDia == 4)
      nome = "abril";
    else if (mesEmDia == 6)
      nome = "junho";
    else if (mesEmDia == 11)
      nome = "novembro";
    else if (mesEmDia == 9)
      nome = "setembro";
    printf("Mes: %s, Dias: %i\n", nome, qtdDias);
  break;

  case 2:
    qtdDias = 28;
    nome = "fevereiro";
    printf("Mes: %s, Dias: %i\n", nome, qtdDias);
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
