#include<stdio.h>

int main ()
{
  int n = 0, total, count = 0;

  while(n <= 50)
  {
    if((count%2)==0)
    {
      printf("%d\n", count);
      total += count;
      n++;
    }
    count++;
  }

  printf("total: %d\n", total);

  return 0;
}