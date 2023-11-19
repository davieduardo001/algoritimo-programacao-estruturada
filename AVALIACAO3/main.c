#include<stdio.h>
#include<stdlib.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

Product p[100];

int main() {


    menu();
    createProduct(p);
    printf("%s", "\U0001f600"); // :-)
    return 0;
}
