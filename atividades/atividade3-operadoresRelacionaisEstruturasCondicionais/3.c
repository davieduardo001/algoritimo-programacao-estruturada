#include<stdio.h>

// 3. Leia a altura e imprima se é maior que 1.8m;

int main() {

  double altura;

  printf("escreva sua altura: ");
  scanf("%lf", &altura);

  if(altura > 1.80)
    printf("voce tem mais que 1.80m\n");
  else if(altura == 1.80)
    printf("voce tem exatamente 1.80\n");
  else
    printf("voce tem menos de 1.80\n");

  return 0;
}