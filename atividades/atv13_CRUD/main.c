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

    system("cls");
    printf("BEM VINDO AO SISTEMA!\n");

    do {
        printf("\n");
        printf("\n-------MENU\n");
        menu();
        int option = selectMenuOptions();
        system("cls");

        switch(option) {

            //list
            case 1:
                getUser(users, count);
            break;

            //create
            case 2:
                createUser(users, count, MAX);
                count++;
            break;

            // search for email
            case 3:
                searchUser(users, count);
            break;

            // edit user
            case 4:
                editUser(users, count);
            break;

            // exit
            case 0:
                printf("saindo do programa!\n");
                return 0;
            break;
            
            default:
                printf("opcao nao existente\n");
        }

    } while (option != 0);


    return 0;
}