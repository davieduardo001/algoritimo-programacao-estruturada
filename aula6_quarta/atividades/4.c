#include <stdio.h>

int main() {

  float peso;

  printf("escreva seu peso ");
  scanf("%f", &peso);

  if(peso < 60) {
    printf("tem menos de 60kg\n");
  } else {
    printf("tem mais de 60kg\n");
  }

  return 0;
}