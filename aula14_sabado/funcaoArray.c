#include<stdio.h>

#define TAM 5

void mostrarDados1(int vetor[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
      printf("%d\n", vetor[i]);
  }
}

void mostarrDados2(int vetor[5])
{
  for (int i = 0; i < 5; i++)
  {
      printf("%d\n", vetor[i]);
  }
}

void mostrarNomes(char nomes[][20], int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%s\n", nomes[i]);
  }
}

int main()
{
  int vetor[5] = {1, 2, 4, 5, 6};

  char nomes[TAM][20] = {"ana", "pedro", "lucas"};

  mostrarNomes(nomes, TAM);

  mostrarDados1(vetor, 5);
  mostarrDados2(vetor);

  return 0;
}