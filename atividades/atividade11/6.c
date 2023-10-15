#include <stdio.h>

float imc(float peso, float altura)
{
  return peso / (altura * altura);
}

int main()
{

  float altura, peso;

  printf("escreva seu peso: ");
  scanf("%f", &peso);

  printf("escreva sua altura (em metros): ");
  scanf("%f", &altura);


  printf("seu imc eh: %.2f\n", imc(peso, altura));

  return 0;
}