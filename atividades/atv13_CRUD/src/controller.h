// MODEL
typedef struct {
    int ID;
    char email[50];
    char name[50];
    char gender[50];
    char address[70];
    float height;
    int vaccine;
} User;

// CONTROLLER

//menu options
int selectMenuOptions() {
    int option;
    printf("Selecione uma opcao: ");
    scanf("%i", &option);
    fflush(stdin);
    return option;
}

// list the users
void getUser(User *u, int index) {

    if(index == 0) {
        printf("sem usuarios cadastrados!!\n");
    } else {
        for(int i = 0; i < index; i++) {
            printf("\n----------");
            printf("ID: %i\n", u[i].ID);
            printf("NOME: %s\n", u[i].name);
            printf("NOME: %s\n", u[i].email);
            printf("SEXO: %s\n", u[i].gender);
            printf("ENDERECO: %s\n", u[i].address);
            printf("ALTURA: %.2f\n", u[i].height);
            if(u[i].vaccine == 1)
                printf("VACINA: SIM\n");
            else
                printf("VACINA: NAO\n");
        }
    }

}

// search for a user
void searchUser(User *u, int index) {
    char exampleEmail[50];
    int founded = 0;

    if(index == 0) {
        printf("sem usuarios cadastrados!!\n");
    } else {
        printf("escreva o email do usuario que deseja buscar: ");
        scanf("%[^\n]s", exampleEmail);

        for(int i = 0; i < index; i++){
            if(!(strcmp(u[i].email, exampleEmail))) {
                printf("EMAIL ENCONTRADO!\n");
                printf("\n----------");
                printf("ID: %i\n", u[i].ID);
                printf("NOME: %s\n", u[i].name);
                printf("NOME: %s\n", u[i].email);
                printf("SEXO: %s\n", u[i].gender);
                printf("ENDERECO: %s\n", u[i].address);
                printf("ALTURA: %.2f\n", u[i].height);
                founded = 1;
                break;
            }
        }

        if(founded != 1)
            printf("email nn encontrado!\n");
    }
}

int createId(User *u, int index) {
    // create a ID
    int validate;
    do {
        validate = 1;

        u[index].ID = rand() % 100;
        for(int i = 0; i < index-1; i++) {
            if( (u[index].ID) == (u[i].ID) ) {
                validate = 0;
            }
        }
    } while(validate == 0);

    return u[index].ID;
}

//create user
void  createUser(User *u, int index, int max) {
    // create a user
    if(index != max) { 
        // verify ID
        createId(u, index);
        printf("ID gerado: %i\n", u[index].ID);

        printf("Escreva o nome: ");
        fflush(stdin);
        scanf("%[^\n]s", u[index].name);

        do {
            fflush(stdin);
            printf("Escreva o email: ");
            scanf("%[^\n]s", u[index].email);
            
            if(strstr(u[index].email, "@") == NULL)
                printf("escreva um email valido!\n");
        } while(strstr(u[index].email, "@") == NULL);

        
        int v = 0;
        do {
            fflush(stdin);
            printf("Escreva o genero (feminino, masculino, indiferente): "); 
            scanf("%[^\n]s", u[index].gender);

            if(!(strcmp(u[index].gender, "feminino")))
                v = 1;
            else if(!(strcmp(u[index].gender, "masculino")))
                v = 1;
            else if(!(strcmp(u[index].gender, "indiferente")))
                v = 1;
            else 
                printf("escreva um sexo valido! (feminino, masculino, indiferente)\n");
        } while(v != 1);

        fflush(stdin);
        printf("Escreva o endereco: ");
        scanf("%[^\n]s", u[index].address);

        do {
            fflush(stdin);
            printf("Escreva a sua altura: ");
            scanf("%f", &u[index].height);

            if(!(u[index].height >= 1 && u[index].height <= 2))
                printf("altura invalida\n");
        } while(!(u[index].height >= 1 && u[index].height <= 2));

        char verify = 'a';
        do {
            fflush(stdin);
            printf("Voce tomou vacina? [s/n] ");
            verify = getchar();

            if(verify == 's' || verify == 'S')
                u[index].vaccine == 1;
            else if(verify == 'n' || verify == 'N')
                u[index].vaccine == 0;
            else
                printf("favor escrever sim (s) ou nao (n) %c\n", verify);
        } while(!(verify == 's' || verify == 'S' || verify == 'n' || verify == 'N'));

    } else {
        printf("numero maximo de usuarios atingidos\n");
    }

}

void editUser(User *u, int index) {
    char exampleEmail[50];
    int founded = 0;
    int indexOfTheUserThatUSearched = 0;

    if(index == 0) {
        printf("sem usuarios cadastrados!!\n");
    } else {
        printf("escreva o email do usuario que deseja EDITAR: ");
        scanf("%[^\n]s", exampleEmail);

        for(int i = 0; i < index; i++){
            if(!(strcmp(u[i].email, exampleEmail))) {
                printf("EMAIL ENCONTRADO!\n");
                printf("\n----------");
                printf("ID: %i\n", u[i].ID);
                printf("NOME: %s\n", u[i].name);
                printf("NOME: %s\n", u[i].email);
                printf("SEXO: %s\n", u[i].gender);
                printf("ENDERECO: %s\n", u[i].address);
                printf("ALTURA: %.2f\n", u[i].height);
                founded = 1;
                indexOfTheUserThatUSearched = i;

                printf("EDITING...\n");
                // EDITING

                printf("Escreva o nome: ");
                fflush(stdin);
                scanf("%[^\n]s", u[indexOfTheUserThatUSearched].name);

                do {
                    fflush(stdin);
                    printf("Escreva o email: ");
                    scanf("%[^\n]s", u[indexOfTheUserThatUSearched].email);
                    
                    if(strstr(u[indexOfTheUserThatUSearched].email, "@") == NULL)
                        printf("escreva um email valido!\n");
                } while(strstr(u[indexOfTheUserThatUSearched].email, "@") == NULL);

                
                int v = 0;
                do {
                    fflush(stdin);
                    printf("Escreva o genero (feminino, masculino, indiferente): "); 
                    scanf("%[^\n]s", u[indexOfTheUserThatUSearched].gender);

                    if(!(strcmp(u[indexOfTheUserThatUSearched].gender, "feminino")))
                        v = 1;
                    else if(!(strcmp(u[indexOfTheUserThatUSearched].gender, "masculino")))
                        v = 1;
                    else if(!(strcmp(u[indexOfTheUserThatUSearched].gender, "indiferente")))
                        v = 1;
                    else 
                        printf("escreva um sexo valido! (feminino, masculino, indiferente)\n");
                } while(v != 1);

                fflush(stdin);
                printf("Escreva o endereco: ");
                scanf("%[^\n]s", u[indexOfTheUserThatUSearched].address);

                do {
                    fflush(stdin);
                    printf("Escreva a sua altura: ");
                    scanf("%f", &u[indexOfTheUserThatUSearched].height);

                    if(!(u[indexOfTheUserThatUSearched].height >= 1 && u[indexOfTheUserThatUSearched].height <= 2))
                        printf("altura invalida\n");
                } while(!(u[indexOfTheUserThatUSearched].height >= 1 && u[indexOfTheUserThatUSearched].height <= 2));

                char verify = 'a';
                do {
                    fflush(stdin);
                    printf("Voce tomou vacina? [s/n] ");
                    verify = getchar();

                    if(verify == 's' || verify == 'S')
                        u[indexOfTheUserThatUSearched].vaccine == 1;
                    else if(verify == 'n' || verify == 'N')
                        u[indexOfTheUserThatUSearched].vaccine == 0;
                    else
                        printf("favor escrever sim (s) ou nao (n) %c\n", verify);
                } while(!(verify == 's' || verify == 'S' || verify == 'n' || verify == 'N'));

                break;
            }
        }

        if(founded != 1)
            printf("email nn encontrado!\n");
    }
}