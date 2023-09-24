#include <stdio.h>

#define TAM 5

int main()
{
  int vetor[10] = {1, 2, 3, 400}; // eh um ponteiro q aponta para um endereco de memoria
  // trabalhando com o indece e o dado referente ao indice
  // comeca da posicao 0, 1, 2, 3... (4 posicoes)

  // 0 ateh (n-1) -> NOME\0

  printf("%d\n", vetor[0]);

  printf("%d\n", &vetor[0]);
  printf("%d\n", &vetor[2]);
  printf("%d\n", &vetor); // endereco de memoria eh o mesmo da posicao 0

  printf("--------\n");

  int vetorNumeros[TAM]; // nao inicializado
  vetorNumeros[0] = 1;

  printf("%d\n", vetorNumeros[0]);

  printf("Escreva um valor para a posisao 4: ");
  scanf("%d", &vetorNumeros[4]);
  printf("%d\n", vetorNumeros[4]);

  for (int i = 0; i < 4; i++)
  {
    printf("Digite um valor: ");
    scanf("%d", &vetorNumeros[i]);
  }  

  printf("Resultados::\n");
  for (int i = 0; i < 4; i++)
  {
    printf("%d\n", vetorNumeros[i]);
  }

  return 0;
}