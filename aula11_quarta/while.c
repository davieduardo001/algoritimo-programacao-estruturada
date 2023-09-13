#include<stdio.h>

int main () 
{
  int n = 2, count = 0, res;

  while (count <= 10)
  {
    res = n * count;
    printf("%d * %d = %d\n", n, count, res);
    count++;
  }
  
  return 0;
}