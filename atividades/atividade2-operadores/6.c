#include<stdio.h>
#include<math.h>

//! 6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

int main() {
  
  //* variables
  double raio, area, PI = 3.1425; //! ao adiionar uma constante se coloca em letra maiuscula

  //* inputs
  printf("qual o raio do circulo? ");
  scanf("%lf", &raio);

  //* computing
  area = PI * (pow(raio, 2)); // (raio*raio)

  //* outputs
  printf("a area desse ciruculo seria: %.2lf", area);

  if (4 >= ) {}
  
  return 0;
}