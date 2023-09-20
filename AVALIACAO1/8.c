#include <stdio.h>

struct habitantes
{
  double salario;
  int nFilhos;
};

int main()
{
  char confirmar = 'n';

  printf("BEM VINDO AO PREFEITAS, SEU PROGRAMA DE PREFEITURA!\n");

  do
  {
    struct habitantes pessoa[1000];
    int contadorDeHabitantes;
    double mediaSalario, mediaNFilhos, maiorSalario, pessoasComSalarioAte100;

    // INPUT
    for (int i = 0; i < sizeof(pessoa); i++)
    {
      printf("--------------\n");
      printf("escreva o salario da pessoa: ");
      scanf("%lf", &pessoa[i].salario);
      printf("escreva quantos filhos essa pessoa tem: ");
      scanf("%i", &pessoa[i].nFilhos);

      if (pessoa[i].salario < 0)
        break;

      contadorDeHabitantes++;
    }

    // COMPUTING
    //! media do salario
    maiorSalario = 1;
    for (int i = 0; i < contadorDeHabitantes; i++)
    {
      mediaSalario += pessoa[i].salario;
      printf("%d", mediaSalario);
    }
    mediaSalario /= contadorDeHabitantes;

    //! media n de filhos
    for (int i = 0; i < contadorDeHabitantes; i++)
      mediaNFilhos += pessoa[i].nFilhos;
    mediaNFilhos /= contadorDeHabitantes;

    //! maior salario
    for (int i = 0; i < contadorDeHabitantes; i++)
      if (maiorSalario < pessoa[i].salario)
        maiorSalario = pessoa[i].salario;

    //! percentual de pessoas com a media salarial de ate 100
    for (int i = 0; i < contadorDeHabitantes; i++)
      if (pessoa[i].salario > 100)
        pessoasComSalarioAte100++;
    pessoasComSalarioAte100 = (100 * pessoasComSalarioAte100) / contadorDeHabitantes;

    // OUTPUT
    for (int i = 0; i < contadorDeHabitantes; i++)
    {
      printf("--------------\n");
      printf("Pessoa %i: Filhos(%i) Salario(%lf)\n", contadorDeHabitantes + 1, pessoa[i].nFilhos, pessoa[i].salario);
    }

    printf("--------------\n");
    printf("\nO RESULTADO EH:\n");
    printf("media de salario: R$%.2lf\nmedia de filhos: %i\nmaior salario: R$%.2lf\npercentual de salario menor q 100: %.2lf", mediaSalario, mediaNFilhos, maiorSalario, pessoasComSalarioAte100);

    // REPEAT?
    printf("deseja sair do programa? [y/n] ");
    scanf("%s", &confirmar);

  } while (confirmar != 'y');

  return 0;
}