#include <stdio.h>

#define MAX 10

int main ()
{
    int vetor[MAX], igual;

  for (int i = 0; i < MAX; i++)
  {
    printf("inserir valor: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < MAX; i++)
  {
    igual = 0;
    // esta percorendo o resto dos vetores dentro do outro vetor
    // ta na posicao 0 rodando todo o resto do vetor (uma fica parada enquanto a de dentro se repete)
    for (int j = i + 1; j < MAX; j++)
    {
      if (vetor[i] == vetor[j]){
        igual = 1;
      }
    }
    if (igual != 1)
      printf("%i\n", vetor[i]);
  }

  return 0;
}