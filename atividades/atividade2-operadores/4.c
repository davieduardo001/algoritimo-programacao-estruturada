#include<stdio.h>

// 4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

int main() {

  float reais, dolar;

  printf("Escreva o valo a ser convertido: ");
  scanf("%f", &reais);

  dolar = reais * 4.96;

  printf("CONVERTIDO: %.2f\n", dolar);

  return 0;
}
