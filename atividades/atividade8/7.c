#include <stdio.h>
#include <ctype.h>

#define MAX 10

struct pessoas
{
  char nome[30];
  char sexo;
  float altura;
  float peso;
};

int main()
{
  struct pessoas pessoa[MAX];
  int count, quantidadeHomens, quantidadeMulheres;
  float mediaAlturaHomens = 0, mediaAlturaMulheres = 0, alturaGeral = 0, mediaPesoHomens = 0, mediaPesoMulheres = 0, pesoGeral = 0;

  for (int i = 0; i < MAX; i++)
  {
    printf("---------\n");

    // recebendo nome
    printf("Nome: ");
    scanf("%s", pessoa[i].nome);

    // recebendo sexo
    do
    {
      printf("Escreva o seu sexo: ");
      scanf("%s", &pessoa[i].sexo);
      getchar();
      pessoa[i].sexo = toupper(pessoa[i].sexo);
    } while (!((pessoa[i].sexo == 'M') || (pessoa[i].sexo == 'F')));

    printf("Peso: ");
    scanf("%f", &pessoa[i].peso);

    printf("Altura: ");
    scanf("%f", &pessoa[i].altura);

    printf("----PESSOA COMPUTADA----\n");
    printf("----Nome: %s\n", pessoa[i].nome);
    printf("----Peso: %.2f\n", pessoa[i].peso);
    printf("----Sexo: %c\n", pessoa[i].sexo);
    printf("----Altura: %.2f\n", pessoa[i].altura);

    if (pessoa[i].sexo == 'M')
    {
      mediaAlturaHomens += pessoa[i].altura;
      mediaPesoHomens += pessoa[i].peso;
    }
    else if (pessoa[i].sexo == 'F')
    {
      mediaAlturaMulheres += pessoa[i].altura;
      mediaPesoMulheres += pessoa[i].peso;
    }

    pesoGeral += pessoa[i].peso;
    alturaGeral += pessoa[i].altura;
  }

  // OUTPUT
  // quantidade de homens
  quantidadeHomens = 0;
  for (int i = 0; i < MAX; i++)
    if (pessoa[i].sexo == 'M')
      quantidadeHomens++;
  printf("\n\n** O numero de homens eh: %i \n", quantidadeHomens);

  // quantidade de mulheres
  quantidadeMulheres = 0;
  for (int i = 0; i < MAX; i++)
    if (pessoa[i].sexo == 'F')
      quantidadeMulheres++;
  printf("** O numero de mulheres eh: %i \n", quantidadeMulheres);

  // media de altura homens
  mediaAlturaHomens /= (float)quantidadeHomens;
  printf("** A media de altura entre os homens eh %.2f\n", mediaAlturaHomens);

  // media altura mulheres
  count = 0;
  mediaAlturaMulheres /= (float)quantidadeMulheres;
  printf("** A media de altura entre as mulheres eh %.2f\n", mediaAlturaMulheres);

  // media altura do grupo
  alturaGeral /= (float)MAX;
  printf("** A media de altura do grupo eh %.2f\n", alturaGeral);

  // media peso homens
  mediaPesoHomens /= (float)quantidadeHomens;
  printf("** A media de peso entre os homens eh %.2f\n", mediaPesoHomens);

  // media peso mulheres
  mediaPesoMulheres /= (float)quantidadeMulheres;
  printf("** A media de peso entre as mulheres eh %.2f\n", mediaPesoMulheres);

  // media peso do grupo
  pesoGeral /= (float)MAX;
  printf("** A media de peso do grupo eh %.2f\n", pesoGeral);

  return 0;
}