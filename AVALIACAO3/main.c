#include<stdio.h>
#include<stdlib.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

Product p[100];

int main() {


    menu();
    createProduct(p);


    return 0;
}
