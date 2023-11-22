#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

Product p[100];

int main() {


    menu();
    createProduct(p);
    initApp();

    createCodeForTheProduto();

    return 0;
}
