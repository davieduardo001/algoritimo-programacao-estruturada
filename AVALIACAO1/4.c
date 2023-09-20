#include <stdio.h>

int main()
{
  float a, b, c, soma;

  do
  {
    printf("Angulo A: \n");
    scanf("%f", &a);
    printf("Angulo B: \n");
    scanf("%f", &b);
    printf("Angulo C: \n");
    scanf("%f", &c);

    soma = a + b + c;

    if (soma == 180)
      printf("pode formar um triangulo! (a soma de seus lados eh 180)\n");
    else if (soma < 180)
      printf("a soma dos lados deve ser igual a 180!!\n");
  } while (!(soma == 180));

  if (a == 90 || b == 90 || c == 90)
    printf("eh um triangulo retangulo\n");
  else if (a > 90 || b > 90 || c > 90)
    printf("eh um triangulo obtusangulo\n");
  else if (a < 90 || b < 90 || c < 90)
    printf("eh um triangulo acutangulo\n");

  return 0;
}