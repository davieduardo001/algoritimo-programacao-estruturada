#include<stdio.h>

int main() {

  int verdadeiroOuFalso = ((10 % 5 * 2) != (5 * 2 + 1));

  if(verdadeiroOuFalso) {
    printf("eh verdadeiro\n");
  } else {
    printf("eh falso\n");
  }

  return 0;
}