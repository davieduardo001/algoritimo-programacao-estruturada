#include<stdio.h>

int main () 
{
  int numero;
  int contador, res;

  printf("Digite um numero ");
  scanf("%d", &numero);

  for (contador = 0; contador <= 10; contador++)
  {
    /* code */
    res = numero * contador;
    printf("%d * %d = %d\n", numero, contador, res);
  }
  
  return 0;
}