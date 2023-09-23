#include <stdio.h>
#include <ctype.h>

// functions prototypes
// verifica o periodo e o elevador referente a esse periodo
void VerificarPeriodoMaisUsado(int, char, int, char, int, int, int, int, int, int, int, int);
void VerificarMaiorNaRelacaoElevadorPeriodo(int, char, int, char, int, int, int, int, int, int, int, int);

struct morador
{
  char elevador;
  char horario;
};

int main()
{
  int moradoresTotais = 3;
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

    // verifica qual eh a relacao entre horario e elevador
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'A')
      countMatutinoA++;
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'B')
      countMatutinoB++;
    if (moradores[count].horario == 'M' && moradores[count].elevador == 'C')
      countMatutinoC++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'A')
      countVespertinoA++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'B')
      countVespertinoB++;
    if (moradores[count].horario == 'V' && moradores[count].elevador == 'C')
      countVespertinoC++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'A')
      countNoturnoA++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'B')
      countNoturnoB++;
    if (moradores[count].horario == 'N' && moradores[count].elevador == 'C')
      countNoturnoC++;

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
  for (int i = 0; count < moradoresTotais; count++)
    if (moradores[i].horario == 'D')
    
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

  // periodo mais usado
  printf("\n-----O PERIODO MAIS USADO E O ELEVADOR MAIS USADO NO PERIODO-----\n");
  VerificarPeriodoMaisUsado(countPeriodoMaisUsado, periodoMaisUsado, countMatutinoA, elevadorMaisUsado, countMatutinoB, countMatutinoC, countVespertinoA, countVespertinoB, countVespertinoC, countNoturnoA, countNoturnoB, countNoturnoC);

  printf("\n-----O ELEVADOR MAIS USADO E O PERIODO REFERENTE A ESSE----------");
  VerificarMaiorNaRelacaoElevadorPeriodo(countElevadorMaisUsado, periodoMaisUsado, aMatutino, elevadorMaisUsado, bMantutino, cMatutino, aVespertino, bVespertino, cVespertino, aNoturno, bNoturno, cNoturno);

  return 0;
}

void VerificarPeriodoMaisUsado(int countPeriodoMaisUsado, char periodoMaisUsado, int countMatutinoA, char elevadorMaisUsado, int countMatutinoB, int countMatutinoC, int countVespertinoA, int countVespertinoB, int countVespertinoC, int countNoturnoA, int countNoturnoB, int countNoturnoC)
{
  countPeriodoMaisUsado = countMatutinoA;
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
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'B';
    countPeriodoMaisUsado = countNoturnoB;
  }
  if (countPeriodoMaisUsado < countNoturnoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'C';
    countPeriodoMaisUsado = countNoturnoC;
  }

  printf("O periodo mais usado eh o: %c\nE o elevador mais usado nesse periodo eh o: %c\n", periodoMaisUsado, elevadorMaisUsado);
}

void VerificarMaiorNaRelacaoElevadorPeriodo(int countElevadorMaisUsado, char periodoMaisUsado, int countMatutinoA, char elevadorMaisUsado, int countMatutinoB, int countMatutinoC, int countVespertinoA, int countVespertinoB, int countVespertinoC, int countNoturnoA, int countNoturnoB, int countNoturnoC)
{
  countElevadorMaisUsado = countMatutinoA;
  if (countElevadorMaisUsado < countMatutinoA)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'A';
    countElevadorMaisUsado = countMatutinoA;
  }
  if (countElevadorMaisUsado < countMatutinoB)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'B';
    countElevadorMaisUsado = countMatutinoB;
  }
  if (countElevadorMaisUsado < countMatutinoC)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsado = 'C';
    countElevadorMaisUsado = countMatutinoC;
  }
  if (countElevadorMaisUsado < countVespertinoA)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'A';
    countElevadorMaisUsado = countVespertinoA;
  }
  if (countElevadorMaisUsado < countVespertinoB)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'B';
    countElevadorMaisUsado = countVespertinoB;
  }
  if (countElevadorMaisUsado < countVespertinoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'C';
    countElevadorMaisUsado = countVespertinoC;
  }
  if (countElevadorMaisUsado < countNoturnoA)
  {
    periodoMaisUsado = 'N';
    elevadorMaisUsado = 'A';
    countElevadorMaisUsado = countVespertinoA;
  }
  if (countElevadorMaisUsado < countNoturnoB)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'B';
    countElevadorMaisUsado = countNoturnoB;
  }
  if (countElevadorMaisUsado < countNoturnoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsado = 'C';
    countElevadorMaisUsado = countNoturnoC;
  }

  printf("E o elevador mais usado eh o: %c\nO periodo mais usado referente a esse elevador eh o: %c\n\n", elevadorMaisUsado, periodoMaisUsado);
}