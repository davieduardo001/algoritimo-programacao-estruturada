#include<stdio.h>

int main()
{
  int n = 0, count;

  while (n < 5)
  {
    count++;

    if (count % 3 == 0)
    {
      printf("%d\n", count);
      n++;
    }
  }

  return 0;
}