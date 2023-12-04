Car *createVoidList() {
    return NULL;
}

int createId(Car *list, Car *newCar) {
    //create a ID
    int validate, chassis;
    Car *current = list;

    do {
        validate = 0;

        srand(time(NULL));

        chassis = rand() % 1000;

        newCar->chassis = chassis;

        if(list != NULL) {
            while(current->next != NULL) {
                if( current->chassis == chassis ) {
                    validate = 1;
                }
                current = current->next; 
            }
        }
    } while(validate == 1);

    return chassis;
}

Car *createCar(Car *list) {
    Car *newCar = (Car*)malloc(sizeof(Car));

    if(newCar == NULL) {
        printf("erro ao alocar mem.\n");
        exit(EXIT_FAILURE);
    }

    newCar->chassis = createId(list, newCar);

    printf("Chassi: %i\n", newCar->chassis);

    printf("Qual o proprietario do veiculo: ");
    fflush(stdin);
    fgets(newCar->owner, sizeof(newCar->owner), stdin);

    printf("Qual o modelo do veiculo: ");
    fflush(stdin);
    fgets(newCar->model, sizeof(newCar->model), stdin);

    char gas;
    do {
        printf("Qual o tipo de combustivel do veiculo [a (alcool), d (disel) ou g (gasolina) ]: ");
        fflush(stdin);
        scanf("%c", &gas);
        switch (gas)
        {
            case 'a':
                newCar->gasType = "alcool";
                break;

            case 'd':
                newCar->gasType = "disel";
                break;

            case 'g':
                newCar->gasType = "gasolina";
                break;

            default:
                printf("digite um tipo de gasolina valido! ");
                break;
        }
    } while(gas!='a' && gas!='d' && gas!='g');

    printf("Qual a cor do veiculo: ");
    fflush(stdin);
    fgets(newCar->color, sizeof(newCar->color), stdin);

    printf("Ano do veiculo: ");
    fflush(stdin);
    scanf("%i", &newCar->year);

    printf("Escreva a placa: ");
    fflush(stdin);
    fgets(newCar->plate, sizeof(newCar->plate), stdin);

    newCar->next = NULL;

    return newCar;
}

Car *putCar(Car *list) {
    Car *newCar = createCar(list);

    system("cls");

    printf("--CRIADO--\n\n");
    printf("-- Chassi: %i\n", newCar->chassis);
    printf("--PROPRIETARIO: %s\n", newCar->owner);
    printf("--MODELO: %s\n", newCar->model);
    printf("--COMBUSTIVEL: %s\n", newCar->gasType);
    printf("--COR: %s\n", newCar->color);
    printf("--ANO: %i\n", newCar->year);
    printf("--PLACA: %s\n", newCar->plate);

    if(list == NULL) {
        return newCar;

    } else {
        Car *current = list;
        //this will go through the whole list and stop in the last position;
        while(current->next != NULL) {
            printf("THE ATUAL CHASSI: %i\n", current->chassis);
            current = current->next;
        }

        //this will set the last position *next pointer to the newCar pointer;
        current->next = newCar;
        return list;
    }
}


void readCar(Car *list) {
    Car *current = list;

    if(list == NULL) {
        printf("nao a carros adicionados!\n");
    } else {
        printf("\n--LIST--\n\n");
        while(current != NULL) {
            //PRINT THE CARS
            printf("-----------------\n\n");
            printf("-- Chassi: %i\n", current->chassis);
            printf("--PROPRIETARIO: %s\n", current->owner);
            printf("--MODELO: %s\n", current->model);
            printf("--COMBUSTIVEL: %s\n", current->gasType);
            printf("--COR: %s\n", current->color);
            printf("--ANO: %i\n", current->year);
            printf("--PLACA: %s\n", current->plate);

            current = current->next; 
        }
    }
}

Car *searchCar(Car *list) {
    Car *current = list;
    int chassis;

    if(list == NULL) {
        printf("nao a conteudo carros adicionados!\n");
    } else {

        printf("Escreva o chassi para pesquisar: ");
        scanf("%i", &chassis);

        while(current != NULL) {
            if(current->chassis == chassis) {

                printf("\n--ENCONTRADO--\n\n");

                printf("-----------------\n\n");
                printf("-- Chassi: %i\n", current->chassis);
                printf("--PROPRIETARIO: %s\n", current->owner);
                printf("--MODELO: %s\n", current->model);
                printf("--COMBUSTIVEL: %s\n", current->gasType);
                printf("--COR: %s\n", current->color);
                printf("--ANO: %i\n", current->year);
                printf("--PLACA: %s\n", current->plate);

                return current;
            }
            current = current->next;
        }

        printf("carro nao encontrado!\n");
        return NULL;
    }
}

void updateCar(Car *list) {
    Car *foundedProduct = searchCar(list);

    if(foundedProduct != NULL) {
        //RECEBER DADOS
    }
}

void cleanCache(Car *list) {
    Car *current = list;
    Car *next;

    while(current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
