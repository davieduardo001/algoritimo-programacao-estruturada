#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

#include "./src/model.h"
#include "./src/controller.h"
#include "./src/view.h"

int main() {

    Car *list = createVoidList();
    int option = 1;

    while(option != 0) {
        option = menu();
        list = handleWithFunctions(option, list);
    }
    cleanCache(list);

    return 0;
}
