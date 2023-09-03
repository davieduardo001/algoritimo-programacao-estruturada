#include <stdio.h>

/*
Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:

61 - Brasília

71 - Salvador

11 - São Paulo

21 - Rio de Janeiro

32 - Juiz de Fora

19 - Campinas

27 - Vitória

31 - Belo Horizonte

Qualquer outro - uma cidade no Brasil sem identificação
*/

int main()
{
  int ddd;

  printf("Escreva o ddd do teu estado: ");
  scanf("%d", &ddd);

  switch (ddd)
  {
    case 61:
      printf("pertence a brasilia!\n");
      break;
    case 71:
      printf("pertence a salvador!\n");
      break;
    case 11:
      printf("pertence a sao paulo!\n");
      break;
    case 21:
      printf("pertence a rio de janeiro!\n");
      break;
    case 32:
      printf("pertence a juiz de fora!\n");
      break;
    case 19:
      printf("pertence a campinas!\n");
      break;
    case 27:
      printf("pertence a vitoria!\n");
      break;
    case 31:
      printf("pertence a belo horizonte!\n");
      break;
    default:
      printf("uma cidade no brasil sem identificacao!\n");
      break;
  }

  return 0;
}