#include<stdio.h>
#include<math.h>
//if get en error
//gcc RQUIVE.c -lm
int main() {

  int num1, num2, potencia, modulo;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num1);

  printf("Digite outro numero inteiros: ");
  scanf("%d", &num2);

  // POTENCIA
  potencia = pow(num1, num2); // pow(x, y) ou x^y
  printf("resultado potencia: %d\n", potencia);

  // MODULOS
  modulo = num1 % num2;
  printf("resultado de modulo: %d\n", modulo);

  return 0;
}
