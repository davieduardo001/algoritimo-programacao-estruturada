#include<stdio.h>

int main() {
  //operadores aritimeticos
  //soma(+), subtracao(-), divisao(/)
  //multiplicacao(*), modulo(%), potencia(**)
  //alteracao a ordem de precedencia

  int num1 = 10, num2 = 50;
  int total;

  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  total = num1+num2;

  printf("total: %d\n", total);

  return 0;
}
