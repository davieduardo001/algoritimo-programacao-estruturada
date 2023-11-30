int menu() {
    int option;

    printf("\n\n--BEM VINDO AO ESTOCAS--\n");

    printf("1 - Criar\n");
    printf("2 - Listar\n");
    printf("3 - Pesquisar\n");
    printf("4 - Remover\n");
    printf("0 - sair do programa\n");

    printf("escolha uma das opcoes: ");
    fflush(stdin);
    scanf("%d", &option);

    return option;
}

void handleWithFunctions(int option, Product *list) {
    switch(option) {
        case 1:
            system("cls");
            list = createProduct(list);
            break;
        case 2:
            system("cls");

            break;
        case 3:
            system("cls");

            break;
        case 4:
            system("cls");

            break;
        case 0:
            system("cls");

            printf("saindo do programa.");
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
}

int initApp() {
    // font used modular
    sleep(1);
    system("cls");
    puts(
            " _______ _______ _____   _____   _______\n"
            "|   |   |    ___|     |_|     |_|       |\n"
            "|       |    ___|       |       |   -   |\n"
            "|___|___|_______|_______|_______|_______|\n");
    sleep(1);
    system("cls");
    printf("");

    sleep(1);
    system("cls");
    puts(
            " ________ _______ _____   _____   ______ _______ _______ _______\n"
            "|  |  |  |    ___|     |_|     |_|      |       |   |   |    ___|\n"
            "|  |  |  |    ___|       |       |   ---|   -   |       |    ___|\n"
            "|________|_______|_______|_______|______|_______|__|_|__|_______|\n");
    sleep(1);
    system("cls");
    printf("");

    return 0;
}
