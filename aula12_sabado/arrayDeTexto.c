#include <stdio.h>

int main()
{
  char alunos[40][20] = {"maria", "jose", "jimin"};
  printf("%s\n", alunos[0]);

  char nomes[3][30];
  for(int i = 0; i < 3; i++)
  {
    printf("digite o nome dos alunos: ");
    fgets(nomes[i], 30, stdin);
  }

  for(int i = 0; i < 3; i++)
  {
    printf("Nomes: %s", nomes[i]);
  }
}