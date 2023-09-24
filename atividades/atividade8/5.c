#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 300
#define MIN 50

struct votante
{
  char nome[30];
  int idade;
  char sexo;
  int voto;
};

struct jogadora
{
  int samKerr;
  int alexMorgan;
  int dzseniferMarozsan;
  int amandineHenry;
  int martaVieira;
};

int main()
{
  struct votante pessoa[MAX];
  struct jogadora jogadoras;
  jogadoras.alexMorgan = 0, jogadoras.amandineHenry = 0, jogadoras.dzseniferMarozsan = 0, jogadoras.martaVieira = 0, jogadoras.samKerr = 0;
  char sair;
  int totalDeVotosComputados = 0, jogadoraMaisVotada = 0, count;

  for (int i = 0; i < MAX; i++)
  {
    printf("---------\n");

    // sair do programa?
    if (i >= MIN)
    {
      printf("Deseja sair do programa? [s/N] ");
      scanf("%s", &sair);
      getchar();
      sair = toupper(sair);
      if (sair == 'S')
        break;
    }
    if (sair == 'S')
      break;

    // recebendo nome
    printf("Nome: ");
    scanf("%s", pessoa[i].nome);

    // recebendo idade
    do
    {
      printf("Idade: ");
      scanf("%i", &pessoa[i].idade);
      if (!(pessoa[i].idade >= 12))
        printf("Voce deve ter mais de 12 anos.\n");
    } while (!(pessoa[i].idade >= 12));

    // recebendo sexo
    do
    {
      printf("Escreva o seu sexo: ");
      scanf("%s", &pessoa[i].sexo);
      getchar();
      pessoa[i].sexo = toupper(pessoa[i].sexo);

    } while (!((pessoa[i].sexo == 'M') || (pessoa[i].sexo == 'F')));

    // recebendo voto
    printf("VOTOS POSSIVEIS:\n1 - Sam Kerr\n2 - Alex Morgan\n3 - Dzsenifer Morozsan\n4 - Amandine Henry\n5 - Marta Vieira\n");
    do
    {
      printf("Escreva seu voto: ");
      scanf("%i", &pessoa[i].voto);
      switch (pessoa[i].voto)
      {
      case 1:
        jogadoras.samKerr += 1;
        break;
      case 2:
        jogadoras.alexMorgan++;
        break;
      case 3:
        jogadoras.dzseniferMarozsan++;
        break;
      case 4:
        jogadoras.amandineHenry++;
        break;
      case 5:
        jogadoras.martaVieira++;
        break;
      default:
        printf("Voto nao encontrado\n");
      }
    } while (!(pessoa[i].voto == 1 || pessoa[i].voto == 2 || pessoa[i].voto == 3 || pessoa[i].voto == 4 || pessoa[i].voto == 5));

    // computando voto
    totalDeVotosComputados++;

    printf("----VOTO COMPUTADO----\n");
    printf("----Nome: %s\n", pessoa[i].nome);
    printf("----Idade: %i\n", pessoa[i].idade);
    printf("----Sexo: %c\n", pessoa[i].sexo);
    printf("----Voto: %i\n", pessoa[i].voto);
  }

  // COMPUTE
  count = 0;
  if (count < jogadoras.samKerr)
  {
    jogadoraMaisVotada = 1;
    count = jogadoras.samKerr;
  }
  if (count < jogadoras.alexMorgan)
  {
    jogadoraMaisVotada = 2;
    count = jogadoras.alexMorgan;
  }
  if (count < jogadoras.dzseniferMarozsan)
  {
    jogadoraMaisVotada = 3;
    count = jogadoras.dzseniferMarozsan;
  }
  if (count < jogadoras.amandineHenry)
  {
    jogadoraMaisVotada = 4;
    count = jogadoras.amandineHenry;
  }
  if (count < jogadoras.martaVieira)
  {
    jogadoraMaisVotada = 5;
    count = jogadoras.martaVieira;
  }

  // OUTPUT
  // total de votos
  printf("\n----TOTAL DE VOTOS----\n");
  printf("Sam Kerr: %i\nAlex Morgan %i\nDzsenifer Marozsan: %i\nAmandine Henry: %i\nMarta Vieira: %i\n", jogadoras.samKerr, jogadoras.alexMorgan, jogadoras.dzseniferMarozsan, jogadoras.amandineHenry, jogadoras.martaVieira);

  // jogadora mais votada
  printf("\n----JOGADORA MAIS VOTADA----\n");
  if (jogadoraMaisVotada == 1)
    printf("Sam Kerr!!\n");
  else if (jogadoraMaisVotada == 2)
    printf("Alex Morgan!!\n");
  else if (jogadoraMaisVotada == 3)
    printf("Dzsenifer Marozsan!!\n");
  else if (jogadoraMaisVotada == 4)
    printf("Amandine Henry!!\n");
  else if (jogadoraMaisVotada == 5)
    printf("Marta Vieira!!\n");

  // imprimindo
  printf("\n----VOTOS COMPUTADOS----\n");
  printf("**sexo feminino: \n");
  for (int i = 0; i < totalDeVotosComputados; i++)
  {
    if (pessoa[i].sexo == 'F')
    {
      printf("-\n");
      printf("Nome: %s\n", pessoa[i].nome);
      printf("Idade: %i\n", pessoa[i].idade);
      printf("Sexo: %c\n", pessoa[i].sexo);
    }
  }
  printf("**sexo masculino: \n");
  for (int i = 0; i < totalDeVotosComputados; i++)
  {
    if (pessoa[i].sexo == 'M')
    {
      printf("-\n");
      printf("Nome: %s\n", pessoa[i].nome);
      printf("Idade: %i\n", pessoa[i].idade);
      printf("Sexo: %c\n", pessoa[i].sexo);
    }
  }
  printf("**menor de idade: \n");
  for (int i = 0; i < totalDeVotosComputados; i++)
  {
    if (pessoa[i].idade < 18)
    {
      printf("-\n");
      printf("Nome: %s\n", pessoa[i].nome);
      printf("Idade: %i\n", pessoa[i].idade);
      printf("Sexo: %c\n", pessoa[i].sexo);
    }
  }

  // maiores de idade que votaram na marta
  printf("\n----MAIORES DE IDADE QUE VOTARAM NA MARTA----\n");
  for (int i = 0; i < totalDeVotosComputados; i++)
  {
    if (pessoa[i].idade >= 18 && pessoa[i].voto == 5)
    {
      printf("-\n");
      printf("Nome: %s\n", pessoa[i].nome);
      printf("Idade: %i\n", pessoa[i].idade);
      printf("Sexo: %c\n", pessoa[i].sexo);
    }
  }

  // quantidade de mulheres
  count = 0;
  for (int i = 0; i < totalDeVotosComputados; i++)
    if (pessoa[i].sexo == 'F') 
      count++;
  printf("O total de mulheres que votaram eh: %i\n", count);

  return 0;
}