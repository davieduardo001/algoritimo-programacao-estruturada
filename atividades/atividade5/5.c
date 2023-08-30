#include<stdio.h>
#include<math.h>

//Calcule as raízes da equação de 2º grau.

int main () {

  float a, b, c, raiz1, raiz2, delta;

  printf("escreva A: ");
  scanf("%f", &a);
  fflush(stdin);

  printf("escreva B: ");
  scanf("%f", &b);
  fflush(stdin);

  printf("escreva C: ");
  scanf("%f", &c);
  fflush(stdin);

  delta = ((b*b) - (4*a*c));

  if (delta < 0)
    printf("nao existe raiz.\n");
  else if (delta == 0){
    raiz1 = (-b + sqrt(delta)) / (2*a);
    printf("raiz unica, sendo ela: %.2f\n", raiz1);
  }
  else if (delta > 0) {
    raiz1 = (-b + sqrt(delta)) / (2*a);
    raiz2 = (-b - sqrt(delta)) / (2*a);
    printf("a raiz 1 eh %.2f e a raiz 2 eh %.2f\n", raiz1, raiz2);
  }

  return 0;
}