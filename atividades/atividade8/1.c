#include <stdio.h>
#include <string.h>

struct espectador
{
  int idade;
  char opniao;
};

int main()
{
  int quantidadeEspectadores = 100;
  struct espectador espectadores[quantidadeEspectadores];
  int quantidadeDeOtimos = 0, quantidadeDeBons = 0, quantidadeDeRegulares = 0, quantidadeDeRuins = 0, quantidadeDePessimos = 0;
  float diferencaPercentualEntreBonsERegular = 0, mediaDeIdadeRuim = 0;

  // INPUT
  for (int i = 0; i < quantidadeEspectadores; i++)
  {
    printf("-------ADICONE UMA NOTA------\n");
    printf("Escreva sua idade: ");
    scanf("%i", &espectadores[i].idade);
    printf("Notas possiveis: A(otimo), B(bom), C(regular), D(ruim), E(pessimo)\n");
    printf("escreva a nota: ");
    scanf("%s", &espectadores[i].opniao);
    getchar();

    if (espectadores[i].opniao == 'A')
      quantidadeDeOtimos++;
    else if (espectadores[i].opniao == 'B')
      quantidadeDeBons++;
    else if (espectadores[i].opniao == 'C')
      quantidadeDeRegulares++;
    else if (espectadores[i].opniao == 'D')
      quantidadeDeRuins++;
    else if (espectadores[i].opniao == 'E')
      quantidadeDePessimos++;
  }

  // COMPUTING
  // percentual entre respostas bom e regular
  diferencaPercentualEntreBonsERegular = (float)((quantidadeDeRegulares - quantidadeDeBons) / ((quantidadeDeBons + quantidadeDeRegulares) / 2)) * 100;

  // calcular a media de idade de ruins
  for (int i = 0; i < quantidadeEspectadores; i++)
    if (espectadores[i].opniao == 'D')
      mediaDeIdadeRuim += espectadores[i].opniao;
  mediaDeIdadeRuim /= (float)quantidadeDeRuins;

  // OUTPUT
  for (int i = 0; i < quantidadeEspectadores; i++)
  {
    printf("Opniao %c, ", espectadores[i].opniao);
  }
  printf("\n");
  printf("------RESULTADOS-----\n");
  printf("A quantidade de Otimos: %i\n", quantidadeDeOtimos);
  printf("A diferenca percentual eh %.2f\n", diferencaPercentualEntreBonsERegular);
  printf("A media de idade das pessoas q responderam ruim: %.2f\n", mediaDeIdadeRuim);
  return 0;
}