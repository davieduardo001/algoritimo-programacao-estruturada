#include<stdio.h>

//  4 - 6.99 (recuperacao), -4 (reprovado)

int main() {
  float media;
  int frequencia;

  printf("escreva a nota: ");
  scanf("%f", &media);
  fflush(stdin);

  printf("escreva qual tua frequencia: ");
  scanf("%i", &frequencia);
  fflush(stdin);

  if((frequencia >= 75) && (media >= 7)) {
    printf("ta aprovado\n");
  } else if((frequencia >= 75) && (media < 7)) {

    if((media >= 4) && (media < 7)) {
      printf("esta de recuperacao\n");
    } else {
      printf("esta reprovado\n");
    }

  } else {
    printf("esta reprovado\n");
  }

  return 0;
}