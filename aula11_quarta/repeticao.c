#include<stdio.h>

int main ()
{
  int n = 0;

  n++;
  printf("%d\n", n);

  n++;
  printf("%d\n", n);

  n += 10;
  printf("%d\n", n);

  n--;
  printf("%d\n", n);

  n -= 5;
  printf("%d\n", n);

  return 0;
}