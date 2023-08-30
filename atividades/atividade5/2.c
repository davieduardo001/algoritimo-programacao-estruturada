#include<stdio.h>

//Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 

int main () {

  double nota1, nota2, nota3, media;

  printf("escreva a primeira nota: ");
  scanf("%lf", &nota1);
  fflush(stdin);

  printf("escreva a segunda nota: ");
  scanf("%lf", &nota2);
  fflush(stdin);

  printf("escreva a terceira nota: ");
  scanf("%lf", &nota3);
  fflush(stdin);

  media = ((nota1 + nota2 + (nota3 * 2)) / 3);

  printf("sua media eh %.2lf ", media);

  if (media >= 7)
    printf("e esta aprovado\n");
  else
    printf("e esta de reprovado\n");

  return 0;
}