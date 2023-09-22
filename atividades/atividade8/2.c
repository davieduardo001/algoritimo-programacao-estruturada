#include <stdio.h>
#include <ctype.h>

// functions prototypes
void VerificarPeriodoMaisUsado(int, char, int, char, int, int, int, int, int, int, int, int);

struct morador
{
  char elevador;
  char horario;
};

int main()
{
  int moradoresTotais = 3;
  struct morador moradores[moradoresTotais];
  int count, countMatutino = 0, countVespertino = 0, countNoturno = 0, countA = 0, countB = 0, countC = 0, countMatutinoA = 0, countMatutinoB = 0, countMatutinoC = 0, countVespertinoA = 0, countVespertinoB = 0, countVespertinoC = 0, countNoturnoA = 0, countNoturnoB = 0, countNoturnoC = 0;
  int countPeriodoMaisUsado;
  char periodoMaisUsado, elevadorMaisUsadoReferenteAoPeriodo;

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

    count++;
  } while (count < moradoresTotais);

  // COMPUTING

  // diferenca percentual entre os os hoarios, o mais e o menos utilizado
  //

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
  VerificarPeriodoMaisUsado(countPeriodoMaisUsado, periodoMaisUsado, countMatutinoA, elevadorMaisUsadoReferenteAoPeriodo, countMatutinoB, countMatutinoC, countVespertinoA, countVespertinoB, countVespertinoC, countNoturnoA, countNoturnoB, countNoturnoC);

  return 0;
}

void VerificarPeriodoMaisUsado(int countPeriodoMaisUsado, char periodoMaisUsado, int countMatutinoA, char elevadorMaisUsadoReferenteAoPeriodo, int countMatutinoB, int countMatutinoC, int countVespertinoA, int countVespertinoB, int countVespertinoC, int countNoturnoA, int countNoturnoB, int countNoturnoC)
{
  countPeriodoMaisUsado = countMatutinoA;
  if (countPeriodoMaisUsado < countMatutinoA)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsadoReferenteAoPeriodo = 'A';
    countPeriodoMaisUsado = countMatutinoA;
  }
  if (countPeriodoMaisUsado < countMatutinoB)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsadoReferenteAoPeriodo = 'B';
    countPeriodoMaisUsado = countMatutinoB;
  }
  if (countPeriodoMaisUsado < countMatutinoC)
  {
    periodoMaisUsado = 'M';
    elevadorMaisUsadoReferenteAoPeriodo = 'C';
    countPeriodoMaisUsado = countMatutinoC;
  }
  if (countPeriodoMaisUsado < countVespertinoA)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsadoReferenteAoPeriodo = 'A';
    countPeriodoMaisUsado = countVespertinoA;
  }
  if (countPeriodoMaisUsado < countVespertinoB)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsadoReferenteAoPeriodo = 'B';
    countPeriodoMaisUsado = countVespertinoB;
  }
  if (countPeriodoMaisUsado < countVespertinoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsadoReferenteAoPeriodo = 'C';
    countPeriodoMaisUsado = countVespertinoC;
  }
  if (countPeriodoMaisUsado < countNoturnoA)
  {
    periodoMaisUsado = 'N';
    elevadorMaisUsadoReferenteAoPeriodo = 'A';
    countPeriodoMaisUsado = countVespertinoA;
  }
  if (countPeriodoMaisUsado < countNoturnoB)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsadoReferenteAoPeriodo = 'B';
    countPeriodoMaisUsado = countNoturnoB;
  }
  if (countPeriodoMaisUsado < countNoturnoC)
  {
    periodoMaisUsado = 'V';
    elevadorMaisUsadoReferenteAoPeriodo = 'C';
    countPeriodoMaisUsado = countNoturnoC;
  }

  printf("O preriodo mais usado eh o: %c\nE o elevador mais usado nesse periodo eh o: %c\n", periodoMaisUsado, elevadorMaisUsadoReferenteAoPeriodo);
}