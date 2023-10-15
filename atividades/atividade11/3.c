#include <stdio.h>

float fToC(float F)
{
  return (F - 32.0) * (5.0/9.0);
}

int main()
{

  printf("43F eh %.2fC\n", fToC(43));

  return 0;
}