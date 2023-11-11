#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include "./src/view.h"
#include "./src/controller.h"

#define MAX 1000

User users[MAX];

int main() {
    int count = 0;

    menu();
    
    do {
        int option = selectMenuOptions();

        switch(option) {
            case 1:
            
            break;
            
            default:
                printf("opcao nao existente\n");
        }

    } while (option != 0);


    getUser(users);
    return 0;
}