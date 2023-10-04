#include <stdio.h>

int main()
{
  int matriz[3][3];

  for (int i = 0; i < 10; i++)
  {
    printf("linha %i\n");
    for (int j = 0; j < 10; j++)
    {
      printf("Escreva o numero: ");
      scanf("%i", &matriz[i][j]);
    }

    for (int i = 0; i < 10; i++)
      for (int j = 0; j < 10; j++)
      {
        printf("%i |", matriz[i][j]);
      }
    printf("\n");
  }

  return 0;
}