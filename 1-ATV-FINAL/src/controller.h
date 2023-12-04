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

int size_of_a_string(char *str) {
    int lenght = 0;

    while(str[lenght] != '\0')
        lenght++;

    return lenght;
}

char *verifyPlate(Car *list, Car *newCar) {

    char plate[10];
    int sizeofThePlate, i, quantityOfAlphabetic, quantityOfNumbers, verify = 0;

    do {
        printf("*Escreva a placa: ");
        fflush(stdin);
        fgets(plate, sizeof(plate), stdin);

        sizeofThePlate = size_of_a_string(plate);

        //verify if the last 4 digits are numbers
        verify = 0;

        for(i = 0; i < 3; i++) {
            if(!isalpha(plate[i])) {
                printf("placa com os primeiros 3 digitos devem ser caracteres!\n");
                verify = 1;
                break;
            }
        }

        if(sizeofThePlate != 8) {
            printf("a placa deve conter 8 digitos totais!\n");
            verify = 1;
        }

        for(; i < 7; i++) {
            if(!isdigit(plate[i])) {
                printf("placa com os ultimos 4 digitos devem ser numeros!\n");
                verify = 1;
                break;
            }
        }


    } while(verify != 0);

    strcpy(newCar->plate, plate);

    return newCar->plate;
}

Car *createCar(Car *list) {
    Car *newCar = (Car*)malloc(sizeof(Car));

    if(newCar == NULL) {
        printf("erro ao alocar mem.\n");
        exit(EXIT_FAILURE);
    }

    newCar->chassis = createId(list, newCar);
    printf("*Chassi: %i\n", newCar->chassis);

    strcpy(newCar->plate, verifyPlate(list, newCar));

    printf("*Qual o proprietario do veiculo: ");
    fflush(stdin);
    fgets(newCar->owner, sizeof(newCar->owner), stdin);

    printf("*Qual o modelo do veiculo: ");
    fflush(stdin);
    fgets(newCar->model, sizeof(newCar->model), stdin);

    char gas;
    do {
        printf("*Qual o tipo de combustivel do veiculo [a (alcool), d (disel) ou g (gasolina) ]: ");
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

    printf("*Qual a cor do veiculo: ");
    fflush(stdin);
    fgets(newCar->color, sizeof(newCar->color), stdin);

    printf("*Ano do veiculo: ");
    fflush(stdin);
    scanf("%i", &newCar->year);

    newCar->next = NULL;

    return newCar;
}

Car *putCar(Car *list) {
    Car *newCar = createCar(list);

    system("cls");

    printf("--CRIADO--\n\n");
    printf("--Chassi: %i\n", newCar->chassis);
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

int listOwnersOf2010WithDisel(Car *list) {
    Car *current = list;


    if(current != NULL) {
        do {
            if(current->year >= 2010 && current->gasType == "disel") {
                printf("\n--ENCONTRADO--\n\n");

                printf("-----------------\n\n");
                printf("--PROPRIETARIO: %s\n", current->owner);
            }

            if(current->next != NULL)
                current = current->next;

        } while(current->next != NULL);

        return 0;
    } else printf("nem um registro encontrado!\n");

    return 1;
}

int jAndEndWithSomeNumbers(Car *list) {
    Car *current = list;
    int verificationJ, verificationNumbers;

    printf("ultimo: %c\n primeiro: %c\n", current->plate[6], current->plate[0]);
    if(current != NULL) {
        do {
            verificationJ = 0;
            verificationNumbers = 0;

            if(current->plate[6] == '0' || current->plate[6] == '2' || current->plate[6] == '4' || current->plate[6] == '7') 
                verificationNumbers = 1;

            if(current->plate[0] == 'J' || current->plate[0] == 'j')
                verificationJ = 1;

            if(verificationJ == 1  && verificationNumbers == 1 ) {
                printf("\n--ENCONTRADO--\n\n");

                printf("-----------------\n\n");
                printf("--PLACA: %s\n", current->plate);
                printf("--PROPRIETARIO: %s\n", current->owner);
            }

            if(current->next == NULL)
                current = current->next;

        } while(current->next != NULL);

        return 0;
    } else printf("nem um registro encontrado!\n");

    return 1;
}
