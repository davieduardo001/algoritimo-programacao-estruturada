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

Product *p;
int i = 0;

int main() {


    menu();

    //initApp();

//    p = putProduct(i);
//    printf("code: %d\n", p->code);
//    printf("description: %s\n", p->descricao);
//    printf("quantity: %i\n", p->quantity);
//    printf("value: %.2f\n", p->value);
//    addToTheProductIndex(&i);

    createProduct(p, &i);
    printf("RETUNED TO MAIN\n");
    int code = p[0].code;
    printf("CODE:: %i\n", code );

    return 0;
}
