#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cidades
{
  int codigoCidade;
  char estado[3];
  int numeroVeiculos;
  int numeroAcidentes;
}; 

int main()
{
  int numeroDeCidades = 3;
  struct cidades cidade[numeroDeCidades];
  int maiorNAcidentes = 0, indexMaior, indexMenor, menorNAcidentes = 0, numeroRS = 0;
  double mediaDeCarros = 0, mediaDeAcidentesRS = 0;

  // INPUTS
  for (int i = 0; i < numeroDeCidades; i++)
  {
    printf("---------\n");
    printf("Precione enter para adicoinar mais um item. [ENTER] ");
    getchar();

    // codigo da cidade
    cidade[i].codigoCidade = i;

    // estado
    printf("Escreva o estado: ");
    fgets(cidade[i].estado, 3, stdin);
    getchar();

    // numero de veiculos
    printf("Escreva a quantidade de veiculos: ");
    scanf("%i", &cidade[i].numeroVeiculos);
    getchar();

    // numero de cidades
    printf("Escreva o a quantidade de acidentes: ");
    scanf("%i", &cidade[i].numeroAcidentes);
    getchar();
  }

  // COMPUTING
  //  calcular o maior
  maiorNAcidentes = cidade[0].numeroAcidentes;

  for (int i = 0; i < numeroDeCidades; i++)
  {
    if (maiorNAcidentes <= cidade[i].numeroAcidentes)
    {
      maiorNAcidentes = cidade[i].numeroAcidentes;
      indexMaior = i;
    }
  }

  // calcular o menor
  menorNAcidentes = cidade[0].numeroAcidentes;
  for (int i = 0; i < numeroDeCidades; i++)
  {
    if (menorNAcidentes >= cidade[i].numeroAcidentes)
    {
      menorNAcidentes = cidade[i].numeroAcidentes;
      indexMenor = i;
    }
  }

  // calcular a media
  for (int i = 0; i < numeroDeCidades; i++)
    mediaDeCarros += (double)cidade[i].numeroVeiculos;
  mediaDeCarros /= (double)numeroDeCidades;

    // calcular a media
  for (int i = 0; i < numeroDeCidades; i++)
  {
    if((strcmp("RS", cidade[i].estado) == 0) || strcmp(cidade[i].estado, "rs")  == 0)
    {
      mediaDeAcidentesRS += cidade[i].numeroAcidentes;
      numeroRS++;
    }
  }
  if (numeroRS == 0)
    mediaDeAcidentesRS == 0;
  else
    mediaDeAcidentesRS /= numeroRS;

  // OUTPUT
  printf("\n\n---------\n");

  printf("OS RESULTADOS\n");
  for (int i = 0; i < numeroDeCidades; i++)
  {
    printf("---------\n");
    printf("Codigo cidade: %i\nEstado: %s\nNumero de veiculos: %i\nNumero acidentes: %i\n", cidade[i].codigoCidade, cidade[i].estado, cidade[i].numeroVeiculos, cidade[i].numeroAcidentes);
  }

  // OUTPUT
  printf("\n\n--A CIDADE COM MAIOR NUMERO DE ACIDENTES---------\n");
  printf("**Codigo da cidade(%i)** **Numero de acidentes(%i)** **Estado(%s)** **Numero de veiculos(%i)**\n", cidade[indexMaior].codigoCidade, cidade[indexMaior].numeroAcidentes, cidade[indexMaior].estado, cidade[indexMaior].numeroVeiculos);

  printf("\n--A CIDADE COM MENOR NUMERO DE ACIDENTES---------\n");
  printf("**Codigo da cidade(%i)** **Numero de acidentes(%i)** **Estado(%s)** **Numero de veiculos(%i)**\n", cidade[indexMenor].codigoCidade, cidade[indexMenor].numeroAcidentes, cidade[indexMenor].estado, cidade[indexMenor].numeroVeiculos);

  printf("\n--A MEDIA DE VEICULOS AS CIDADES---------------------\n");
  printf("**Media de veiculos(%.2lf)\n", mediaDeCarros);

  printf("\n--A MEDIA DE ACIDENTES DENTRO DO RIO GRANDE DO SUL---------\n");
  printf("**Media de acidentes(%.2lf)\n", mediaDeAcidentesRS);

  return 0;
}