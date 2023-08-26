#include <stdio.h>

int main() {

  int x = 10, y = 12;

  if(!( ((x > y) && (y > 20)) || (y == 12))) {
    printf("verdadeiro\n");
  } else {
    printf("falso\n");
  }

  return 0;
}
