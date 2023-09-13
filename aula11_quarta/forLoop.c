#include<stdio.h>

int main()
{
  int numero;
  int contador;

  printf("Digite um numero ");
  scanf("%d", &numero);

  for (contador = 0; contador <= numero; contador+=100)
  {
    /* code */
    printf("%d\n", contador);
  }
  

  return 0;
}