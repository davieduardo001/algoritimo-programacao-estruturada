#include<stdio.h>

//! 3. Dadas as medidas de uma sala, informe sua área.

int main() {

  //* variable
  float area, profundidade, largura;

  //inputs
  printf("Escreva a profundidade da sala: ");
  scanf("%f", &profundidade);
  fflush(stdin);

  printf("Escreva a largura da sala: ");
  scanf("%f", &largura);
  fflush(stdin);

  //* computing
  area = profundidade * largura;

  //* output
  printf("A area da sala eh %.2f\n\n", area);

  return 0;
}
