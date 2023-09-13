#include <stdio.h>

int main()
{
  char sexo, corOlhos, corCabelos;
  double salario = 0, totalPorcentagem;
  int idadeAnos = 0, totalDeEntrevistados, pessoasComCaracteristicas, caracteristicasTotais;

  do
  {
    printf("--------------\n");
    printf("\nPara sair do programa adicione a idade -1!!!\n\n");

    caracteristicasTotais = 0;

    idadeAnos = 0;
    // RECEBENDO A IDADE:
    printf("--------------\n");
    while (!(idadeAnos >= 10 && idadeAnos <= 100))
    {
      fflush(stdin);

      printf("Escreva a idade da pessoa: ");
      scanf("%d", &idadeAnos);

      // verifica se a idade eh -1 para sair do programa
      if (idadeAnos == -1)
        break;

      // imprime uma mensagem se o valor for algo nao valido
      if (!(idadeAnos >= 10 && idadeAnos <= 100))
        printf("Favor escrever uma idade valida (deve ter de 10 a 100 anos)\n");

      if ((idadeAnos >= 18) && (idadeAnos <= 35))
        caracteristicasTotais++;
    }

    // verifica se a idade eh -1 para sair do programa
    if (idadeAnos == -1)
      break;

    printf("--------------\n");
    sexo = 'x';
    // RECEBENDO O SEXO DA PESSOA
    while (!(sexo == 'm' || sexo == 'f'))
    {
      fflush(stdin);

      printf("Escreva o sexo da pessoa: (m ou f) ");
      scanf("%s", &sexo);

      if (!(sexo == 'm' || sexo == 'f'))
        printf("Favor escrever um valor valido (deve ser m ou f)\n");

      if (sexo == 'f')
        caracteristicasTotais++;
    }

    printf("--------------\n");
    corOlhos = 'x';
    // RECEBENDO O COR DOS OLHOS
    while (!(corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p'))
    {
      fflush(stdin);

      printf("Escreva a cor do olho da pessoa (c (castanho), v (verde), a (azul) ou p (pretos)): ");
      scanf("%s", &corOlhos);

      if (!(corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p'))
        printf("Favor escrever um valor valido ( deve ser c (castanho), v (verde), a (azul) ou p (pretos) )\n");

      if (corOlhos == 'c')
        caracteristicasTotais++;
    }

    printf("--------------\n");
    corCabelos = 'x';
    // RECEBENDO O COR DOS CABELOS
    while (!(corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r'))
    {
      fflush(stdin);

      printf("Escreva a cor do cabelo da pessoa (deve ser l (loiro), c (castanho), p (preto) ou r (ruivo)): ");
      scanf("%s", &corCabelos);

      if (!(corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r'))
        printf("Favor escrever um valor valido ( deve ser l (loiro), c (castanho), p (preto) ou r (ruivo) )\n");

      if (corCabelos == 'c')
        caracteristicasTotais++;
    }

    printf("--------------\n");
    salario = -1;
    // RECEBENDO O COR DOS CABELOS
    while (salario < 0)
    {
      fflush(stdin);

      printf("Escreva o salario da pessoa: ");
      scanf("%lf", &salario);

      if (salario < 0)
        printf("Favor escrever um valor valido (o salario deve ser um numero positivo)\n");
    }

    // verifica se as 4 caracteristicas foram atendidas
    if (caracteristicasTotais == 4)
      pessoasComCaracteristicas++;

    totalDeEntrevistados++;

  } while (idadeAnos != -1);

  // faz o calculo de porcentagem
  totalPorcentagem = pessoasComCaracteristicas * 100 / totalDeEntrevistados;

  // imprime o resultado
  printf("O de entrevistados foram: %d\nO total de pessoas com as caracteristicas passadas foram %d\nA porcentagem de pessoas com essas caracterisiticas foram: %%%.0f\n\n", totalDeEntrevistados, pessoasComCaracteristicas, totalPorcentagem);

  return 0;
}