#include <stdio.h>

#define MAX 5

int main ()
{
  float v[MAX];
  int resposta;

  do
  {
    printf("Escreva 5 valores reais: ");
    for (int i = 0; i < MAX; i++)
    {
      printf("Escreva um numero: ");
      scanf("%f", &v[i]);
    }

    printf("\ndeseja sair do programa (0)\nmostrar na ordem direta (1)\nmostrar na ordem inversa (2)\n");
    scanf("%i", &resposta);
    
    switch(resposta)
    {
      case 1:
        printf("v = { ");
        for (int i = 0; i < MAX; i++)
          if (i != MAX - 1)
            printf("%.2f, ", v[i]);
          else
            printf("%.2f }\n", v[i]);
      break;

      case 2:
        printf("v = { ");
        for (int i = (MAX-1); i >= 0; i--)
          if (i != 0)
            printf("%.2f, ", v[i]);
          else
            printf("%.2f }\n", v[i]);
      break;

      case 0:
        printf("Saindo do programa...\n");
      break;
      default:
        printf("valor nn encontrado\n");
    }
  } while (resposta != 0);

  return 0;
}