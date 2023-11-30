#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

int main() {

    Product *list = createVoidList();
    int option = 1;

    //initApp();

    while(option != 0) {
        option = menu();
        handleWithFunctions(option, list);
    }

    return 0;
}
