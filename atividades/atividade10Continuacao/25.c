#include <stdio.h>

#define MAX 100

int main ()
{
  int v[MAX];
  int i = 0, x = 0;

  while (i <= 100)
  {
    if (!(((x%7) == 0) || (x%10) == 7))
    {
      v[i] = x;
      i++;
    }

    x++;
  }

  printf("v = { ");
  for (int i = 0; i < MAX; i++)
    if (i != MAX - 1)
      printf("%i, ", v[i]);
    else
      printf("%i }\n", v[i]);
  
  return 0;
}
