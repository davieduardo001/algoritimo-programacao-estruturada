#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include "./src/view.h"
#include "./src/controller.h"

#define MAX 1000

User users[MAX];

int main() {
    int count = 0;
    
    int option;

    printf("BEM VINDO AO SISTEMA!\n");

    do {
        menu();
        int option = selectMenuOptions();
        system("clear");

        switch(option) {

            //list
            case 1:
                getUser(users, count);
            break;

            //create
            case 2:
                createUser(users, count, MAX);
            break;
            
            default:
                printf("opcao nao existente\n");
        }

    } while (option != 0);


    return 0;
}