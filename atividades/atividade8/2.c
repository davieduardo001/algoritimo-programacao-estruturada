#include <stdio.h>
#include <ctype.h>

// functions prototypes
// verifica o periodo e o elevador referente a esse periodo
void VerificarPeriodoMaisUsado(int, char, int, char, int, int, int, int, int, int, int, int);

struct morador
{
  char elevador;
  char horario;
};

int main()
{
  int moradoresTotais = 50;
  struct morador moradores[moradoresTotais];
  // contadores gerais
  int count, countMatutino = 0, countVespertino = 0, countNoturno = 0, countA = 0, countB = 0, countC = 0;
  // contadores de horario por elevador
  int countMatutinoA = 0, countMatutinoB = 0, countMatutinoC = 0, countVespertinoA = 0, countVespertinoB = 0, countVespertinoC = 0, countNoturnoA = 0, countNoturnoB = 0, countNoturnoC = 0;
  int countPeriodoMaisUsado, countElevadorMaisUsado;
  // contador de elevador por horario
  int aMatutino = 0, bMantutino = 0, cMatutino = 0, aVespertino = 0, bVespertino = 0, cVespertino = 0, aNoturno = 0, bNoturno = 0, cNoturno = 0;
  // periodos e elevadores mais usados
  char periodoMaisUsado, elevadorMaisUsado, periodoMaisUsadoReferentePeriodo;
  int mediaDeRepostasRuins = 0;
  // horaio mais usado GERAL
  int horarioMaisUsado = 0, horarioMenosUsado = 0;
  float diferencaPercentualMaiorEMenor = 0;
  // media duracao porcentagem
  float porcentagemMediaDuracao;

  // INPUT
  count = 0;
  do
  {
    printf("----------\n");

    do
    {
      printf("escreva qual o elevador usa (A, B ou C): ");
      scanf("%s", &moradores[count].elevador);
      getchar();
      moradores[count].elevador = toupper(moradores[count].elevador);
    } while (!((moradores[count].elevador == 'A') || (moradores[count].elevador == 'B') || (moradores[count].elevador == 'C')));

    do
    {
      printf("escreva qual o horario que usa o elevador (M matutino, V vespertino, N noturno): ");
      scanf("%s", &moradores[count].horario);
      getchar();
      moradores[count].horario = toupper(moradores[count].horario);
    } while (!((moradores[count].horario == 'M') || (moradores[count].horario == 'V') || (moradores[count].horario == 'N')));

    // contadores
    if (moradores[count].horario == 'M')
      countMatutino++;
    else if (moradores[count].horario == 'V')
      countVespertino++;
    else if (moradores[count].horario == 'N')
      countNoturno++;

    if (moradores[count].elevador == 'A')
      countA++;
    else if (moradores[count].elevador == 'B')
      countB++;
    else if (moradores[count].elevador == 'C')
      countC++;

    // verifica a relacao entre elevador e horario
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'A')
      aMatutino++;
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'B')
      bMantutino++;
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'C')
      cMatutino++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'A')
      aVespertino++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'B')
      bVespertino++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'C')
      cVespertino++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'A')
      aNoturno++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'B')
      bNoturno++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'C')
      cNoturno++;

    count++;
  } while (count < moradoresTotais);

  // COMPUTING
  // verificar horario mais usado e o menos usado
  horarioMaisUsado = countMatutino;
  if (horarioMaisUsado < countMatutino)
    horarioMaisUsado = countMatutino;
  if (horarioMaisUsado < countVespertino)
    horarioMaisUsado = countVespertino;
  if (horarioMaisUsado < countNoturno)
    horarioMaisUsado = countNoturno;

  horarioMenosUsado = countMatutino;
  if (horarioMenosUsado > countMatutino)
    horarioMenosUsado = countMatutino;
  if (horarioMenosUsado > countVespertino)
    horarioMenosUsado = countVespertino;
  if (horarioMenosUsado > countNoturno)
    horarioMenosUsado = countNoturno;
  if (horarioMenosUsado == 0)
    horarioMenosUsado = 1;
  diferencaPercentualMaiorEMenor = ((((float)horarioMaisUsado - horarioMenosUsado) / horarioMenosUsado) * 100);

  // verificar a porcentagem elevador de media utilizacao
  porcentagemMediaDuracao = countMatutino;
  printf("HORARIO MAIS USADOOOO: %i\n", porcentagemMediaDuracao);
  if (horarioMaisUsado == countMatutino && horarioMaisUsado == countNoturno || (horarioMaisUsado == (countNoturno + 1)))
    porcentagemMediaDuracao = countVespertino;
  else if (horarioMaisUsado == countMatutino && horarioMaisUsado == countVespertino || horarioMaisUsado == (countVespertino + 1))
    porcentagemMediaDuracao = countNoturno;
  else if (horarioMaisUsado == countVespertino && (horarioMaisUsado == countMatutino || horarioMaisUsado == (countNoturno + 1)))
    porcentagemMediaDuracao = countNoturno;
  else if (horarioMaisUsado == countVespertino && (horarioMaisUsado == countNoturno || horarioMaisUsado == (countNoturno + 1)))
    porcentagemMediaDuracao = countMatutino;
  else if (horarioMaisUsado == countNoturno && (horarioMaisUsado == countMatutino || horarioMaisUsado == (countMatutino + 1)))
    porcentagemMediaDuracao = countVespertino;
  else if (horarioMaisUsado == countNoturno && (horarioMaisUsado == countVespertino || horarioMaisUsado == (countVespertino + 1)))
    porcentagemMediaDuracao = countMatutino;
  printf("HORARIO MAIS USADOOOO: %i\n", porcentagemMediaDuracao);
  porcentagemMediaDuracao = (porcentagemMediaDuracao * 100) / (float)moradoresTotais;

  // OUTPUT

  printf("\n-----OS INPUTS FORAM-----\n");
  for (count = 0; count < moradoresTotais; count++)
  {
    printf("Elevador: %c\n", moradores[count].elevador);
    printf("Horario: %c\n", moradores[count].horario);
    printf("----------\n");
  }

  // printando os mais usados
  printf("\n-----OS TOTAIS FORAM-----\n");
  printf("Elevador A: %i\nElevador B: %i\nElevador C: %i\nMatutino: %i\nVespertino: %i\nNoturno: %i\n", countA, countB, countC, countMatutino, countVespertino, countNoturno);

  printf("\n-----OS TOTAIS RELACIONADOS FORAM-----\n");
  printf("Elevador A Matutino: %i\nElevador B Matutino: %i\nElevador C matutino: %i\nElvador A Vespertino: %i\nElevador B Vespertino: %i\nElevador C Vespertino: %i\nElevador A Noturno: %i\nElevador B Noturno: %i\nElevador C Noturno: %i\n", aMatutino, bMantutino, cMatutino, aVespertino, bVespertino, cVespertino, aNoturno, bNoturno, cNoturno);

  // periodo mais usado
  printf("\n\n-----O PERIODO MAIS USADO E O ELEVADOR MAIS USADO NO PERIODO-----\n");
  VerificarPeriodoMaisUsado(countPeriodoMaisUsado, periodoMaisUsado, aMatutino, elevadorMaisUsado, bMantutino, cMatutino, aVespertino, bVespertino, cVespertino, aNoturno, bNoturno, cNoturno);

  // horarios mais e menos usado e diferenca percentual
  printf("\n-----A DIFERENCA PERCENTUAL DOS HORARIOS MAIS E MENOS UTILIZADO EH----------\n");
  printf("Diferenca percentual: %%%.2f\n", diferencaPercentualMaiorEMenor);

  // porcentagem do elevador de media duracao
  printf("\n-----A DIFERENCA PERCENTUAL DOS HORARIOS MAIS E MENOS UTILIZADO EH----------\n");
  printf("Media duracao: %%%.2f\n", porcentagemMediaDuracao);

  return 0;
}

void VerificarPeriodoMaisUsado(int countPeriodoMaisUsado, char periodoMaisUsado, int countMatutinoA, char elevadorMaisUsado, int countMatutinoB, int countMatutinoC, int countVespertinoA, int countVespertinoB, int countVespertinoC, int countNoturnoA, int countNoturnoB, int countNoturnoC)
{
  countPeriodoMaisUsado = countMatutinoA;
  periodoMaisUsado = 'M';
  elevadorMaisUsado = 'A';
  if (countPeriodoMaisUsado < countMatutinoA)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'A';
    countPeriodoMaisUsado = countMatutinoA;
  }
  if (countPeriodoMaisUsado < countMatutinoB)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'B';
    countPeriodoMaisUsado = countMatutinoB;
  }
  if (countPeriodoMaisUsado < countMatutinoC)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'C';
    countPeriodoMaisUsado = countMatutinoC;
  }
  if (countPeriodoMaisUsado < countVespertinoA)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'A';
    countPeriodoMaisUsado = countVespertinoA;
  }
  if (countPeriodoMaisUsado < countVespertinoB)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'B';
    countPeriodoMaisUsado = countVespertinoB;
  }
  if (countPeriodoMaisUsado < countVespertinoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'C';
    countPeriodoMaisUsado = countVespertinoC;
  }
  if (countPeriodoMaisUsado < countNoturnoA)
  {
    periodoMaisUsado = 'N';
    elevadorMaisUsado = 'A';
    countPeriodoMaisUsado = countVespertinoA;
  }
  if (countPeriodoMaisUsado < countNoturnoB)
  {
    periodoMaisUsado = 'N';
    elevadorMaisUsado = 'B';
    countPeriodoMaisUsado = countNoturnoB;
  }
  if (countPeriodoMaisUsado < countNoturnoC)
  {
    periodoMaisUsado = 'N';
    elevadorMaisUsado = 'C';
    countPeriodoMaisUsado = countNoturnoC;
  }

  printf("O periodo mais usado eh o: %c\nE o elevador mais usado nesse periodo eh o: %c\n", periodoMaisUsado, elevadorMaisUsado);
}