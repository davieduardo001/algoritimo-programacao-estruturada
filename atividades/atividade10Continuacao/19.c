#include <stdio.h>

#define MAX 10

int main ()
{
  int  v[MAX];

  printf("aplicando a seginte formula (i+5*i)%%(i+1):\n ");
  for (int i = 0; i < MAX; i++)
    v[i] = (i+5*i)%(i+1);

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", v[i]);
    else
      printf("%i }\n", v[i]);
  
  return 0;
}