#include <stdio.h>
#include <stdlib.h>

#define MAX 15

int main()
{
  int a[MAX];
  float media = 0;

  printf("Escreva as 15 notas: \n");

  for (int i = 0; i < MAX; i++)
  {
    printf("Aluno %i: ", i+1);
    scanf("%i", &a[i]);
  }

  system("clear");

  printf("a = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", a[i]);
    else
      printf("%i }\n", a[i]);

  for (int i = 0; i < MAX; i++)
    media += (float)a[i];

  printf("A media eh: %.2f\n", media/MAX);

  return 0;
}