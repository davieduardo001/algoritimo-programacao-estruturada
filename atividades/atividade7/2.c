#include<stdio.h>

int main()
{
  int n, count;

  printf("escreva um num. inteiro: ");
  scanf("%d", &n);

  for ( count = n; count >= 0; count--)
    printf("%d\n", count);
  

  return 0;
}