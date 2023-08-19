#include<stdio.h>

//! 4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

int main() {

  //* variables
  float reais, dolar;

  //* inputs
  printf("Escreva o valo a ser convertido: ");
  scanf("%f", &reais);

  //* computing
  dolar = reais * 4.96;

  //* outputs
  printf("CONVERTIDO: %.2f\n", dolar);

  return 0;
}
