#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "src.h"

int main() {

    Assalariado assalariado[3];

    receberAssalariado(assalariado);

    listaClassificacao(assalariado);
    return 0;
}