#include <stdio.h>
// receba a nota/media do estudante, a frequencia final do estudante, e verifique se o estudante esta reprovado ou aprovado

int main()
{
  float nota;
  int frequencia;

  printf("escreva a nota: ");
  scanf("%f", &nota);
  fflush(stdin);

  printf("escreva qual tua frequencia: ");
  scanf("%i", &frequencia);
  fflush(stdin);

  if ((nota >= 7) && (frequencia > 75))
  {
    printf("ta aprovado meu patrao <3\n");
  }
  else
  {
    printf("ta reprovado .-.\n");
  }

  return 0;
}