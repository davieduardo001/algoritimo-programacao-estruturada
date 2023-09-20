#include <stdio.h>

int main()
{
  int voto = 10, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;

  do
  {
    voto = 10;

    printf("-------\n");

    printf("Escolha a voto: ");
    scanf("%i", &voto);

    switch (voto)
    {
    case 1:
      candidato1++;
      printf("Candidato 1 (%i) votos\n", candidato1);
      break;
    case 2:
      candidato2++;
      printf("Candidato 2 (%i) votos\n", candidato2);
      break;
    case 3:
      candidato3++;
      printf("Candidato 3 (%i) votos\n", candidato3);
      break;
    case 4:
      candidato4++;
      printf("Candidato 4 (%i) votos\n", candidato4);
      break;
    case 5:
      nulo++;
      printf("Nulo (%i) votos\n", nulo);
      break;
    case 6:
      branco++;
      printf("Brancos (%i) votos\n", branco);
      break;
    default:
      printf("Voto nao contabilizado\n");
    }

  } while (voto != 0);

    printf("-------\n\n");
    printf("Total de votos:\n");

  printf("Candidato 1(%i)\nCandidato 2(%i)\nCandidato 3(%i)\nCandidato 4(%i)\nNulos(%i)\nBrancos(%i)\n", candidato1, candidato2, candidato3, candidato4, nulo, branco);

  return 0;
}