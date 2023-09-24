#include <stdio.h>

int main()
{
  int mes, ano, dia;
  char continuarPrograma = 'S';

  do
  {

    do
    {
      printf("coloque um mes [1-12] ");
      scanf("%d", &mes);
    } while (!(mes > 0 && mes < 12));

    printf("entre um a ano: ");
    scanf("%d", &ano);

    if (mes == 2)
    {
      if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
      {
        dia = 29;
      }
      else
      {
        dia = 28;
      }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
      dia = 30;
    }
    else
    {
      dia = 31;
    }

    printf("O numero de dias do mes %d de %d eh %d\n", mes, ano, dia);

    printf("Deseja continuar o programa? [S/?] ");
    scanf("%s", &continuarPrograma);

  } while (continuarPrograma != 'S');

  return 0;
}
