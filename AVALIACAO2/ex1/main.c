#include<stdio.h>
#include<stdlib.h>

#include "src.h"

int main() {
    struct funcionario funcionarios[10000];

    receberQuantidadeVendidos(funcionarios);

    printf("\nIMPRIMINDO FUNCIONARIOS: \n");
    imprimindoFuncionario(funcionarios);

    return 0;
}