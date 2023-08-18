#include<stdio.h>

//6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

int main () {
  
  float raio, area;

  printf("qual o raio do circulo? ");
  scanf("%f", &raio);

  area = 3.14*(raio*raio);

  printf("a area desse ciruculo seria: %.2f", area);
  
  return 0;
}