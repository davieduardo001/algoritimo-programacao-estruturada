int menu() {
    int option;

    printf("\n\n--BEM VINDO AO THE CARS--\n");

    printf("[1] Criar\n");
    printf("[2] Listar Todos os veiculos\n");
    printf("[3] 2010 ou posterior, a disel\n");
    printf("[4] Placas iniciadas em J terminadas em 0, 2, 4 e 7\n");
    printf("[5] Segunda letra vogal, soma dos numeros eh par\n");
    printf("[6] Troca do proprietario para placas sem 0\n");
    printf("[0] sair do programa\n");

    printf("\nEscolha uma das opcoes: ");
    fflush(stdin);
    scanf("%d", &option);

    return option;
}

Car *handleWithFunctions(int option, Car *list) {
    Car *founded = NULL;

    switch(option) {
        case 1:
            system("cls");
            list = putCar(list);
            break;
        case 2:
            system("cls");
            readCar(list);
            break;
        case 3:
            system("cls");
            //// posterior a 10
            break;
        case 4:
            system("cls");
            /////iniciadas em J
            break;
        case 5:
            system("cls");
            //////segunda letra vogal soma par
            break;
        case 6:
            system("cls");
            updateCar(list); // trocar proprietario
            break;
        case 0:
            system("cls");
            printf("saindo do programa.");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            break;
        default:
            system("cls");

            printf("Opcao nao disponivel!!\n");
    }

    return list;
}
