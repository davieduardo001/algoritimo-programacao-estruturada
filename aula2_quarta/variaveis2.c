#include<stdio.h>

int main()
{
  //scanf (guarda na memoria uma entrada que o usuario acabou de alocar)

  int num;

  printf("DIGITE UM NUMERO INTEIRO: ");
  scanf("%i", &num); //usado para receber dados inteiros e jogar no endereço de mem passado
                     //para receber textos get, sgets...

  printf("numero puxado do teclado: %i \n", num);
  return 0;
}
