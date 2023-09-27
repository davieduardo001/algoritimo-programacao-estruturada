#include <stdio.h>

struct alunos
{
  double nota1;
  double nota2;
  double nota3;
  double media;
  char *aprovado;
};

int main()
{
  struct alunos aluno[30];
  double mediaGeral;

  for (int i = 0; i < 30; i++)
  {
    printf("-------\n");
    printf("Estudante %i\n", i + 1);

    // recebe as notas dos estudante (sendo q a nota pode ir de 0 ate 10)
    do
    {
      printf("Escreva a nota 1: ");
      scanf("%lf", &aluno[i].nota1);
      printf("Escreva a nota 2: ");
      scanf("%lf", &aluno[i].nota2);
      printf("Escreva a nota 3: ");
      scanf("%lf", &aluno[i].nota3);

      // verifica se alguma nota saiu do escopo
      if (aluno[i].nota1 > 10 || aluno[i].nota2 > 10 || aluno[i].nota3 > 10 || aluno[i].nota1 < 0 || aluno[i].nota2 < 0 || aluno[i].nota3 < 0)
        printf("as notas devem ir de 0 a 10\n");

    } while (aluno[i].nota1 > 10 || aluno[i].nota2 > 10 || aluno[i].nota3 > 10 || aluno[i].nota1 < 0 || aluno[i].nota2 < 0 || aluno[i].nota3 < 0);

    // calcula a media do estudante
    aluno[i].media = ((aluno[i].nota1 * 2) + (aluno[i].nota2 * 4) + (aluno[i].nota3 * 4)) / 10;

    // adiciona a soma para a media geral
    mediaGeral += aluno[i].media;
  }

  // calcula a media geral da turam:
  mediaGeral /= 30;

  printf("\n-------\n\n");

  for (int i = 0; i < 30; i++)
  {
    // verifica se o aluno esta aprovado ou reprovado
    if (aluno[i].media >= 7)
      aluno[i].aprovado = "aprovado";
    else
      aluno[i].aprovado = "reprovado";

    // print o aluno
    printf("Aluno %i: %.2lf, %.2lf e %.2lf => Media: %.2lf (%s)\n", i + 1, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3, aluno[i].media, aluno[i].aprovado);
  }

  printf("======================\n");

  printf("A media geral da turma eh: %.2lf\n", mediaGeral);

  return 0;
}