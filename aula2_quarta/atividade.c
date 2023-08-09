#include<stdio.h>

int main()
{
  int idade;
  double peso;
  float salario;

  printf("\n===================================\n\n");

  printf("Digite tua idade: ");
  scanf("%i", &idade);

  printf("Agora digite seu peso: ");
  scanf("%lf", &peso);

  printf("Agora digite teu salario: ");
  scanf("%f", &salario);

  printf("\n\nSua idade eh: %i \nSeu peso: %.2lfkg \nE seu salario: R$%.2f\n\n", idade, peso, salario);

  printf("\n===================================\n");
  return 0;

}
