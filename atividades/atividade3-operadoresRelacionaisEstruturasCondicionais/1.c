#include<stdio.h>

// 1. Leia a idade e imprima se a pessoa é maior de idade;

int main() {

  int idade;

  printf("digite tua idade: ");
  scanf("%d", &idade);

  if(idade >= 18) 
    printf("Voce eh maior de idade.\n");
  else
    printf("voce eh menor de idade\n");

  return 0;
}