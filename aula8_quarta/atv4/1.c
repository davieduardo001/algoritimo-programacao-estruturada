#include<stdio.h>
#include<math.h>
// to compile with math.h
// => gcc file.c -lm

// Escreva um algorigtimo que leia um numero e imprima a raiz quarada do numero caso ele seja positivo ou igual a zero e o quadrado do numero caso ele seja negativo
int main() {

  double n, resultado;

  printf("escreava um numero: ");
  scanf("%lf", &n);

  if(n >= 0) {
    resultado = sqrt(n);
    printf("a raiz eh %.2lf\n", resultado);
  } else {
    resultado = n*n;
    printf("o dobro do numero negativo %.2lf", resultado);
  }

  return 0;
}