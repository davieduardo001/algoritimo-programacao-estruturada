#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

/*
typedef struct {
    int code;
    char descricao[100];
    int quantity;
    float value;
} Product;
*/

int i = 0;

int main() {

    Product *list = createVoidList();
    int option;

    menu();
    initApp();


    return 0;
}
