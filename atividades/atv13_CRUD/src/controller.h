// MODEL
typedef struct {
    int ID;
    char email[50];
    char name[50];
    char gender;
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

void getUser(User *u, int index) {

    if(index == 0) {
        printf("sem usuarios cadastrados!!\n");
    } else {
        for(int i = 0; i < index; i++) {
            printf("----------");
            printf("ID: %i\n", u[i].ID);
            printf("NOME: %s\n", u[i].name);
            printf("NOME: %s\n", u[i].email);
            printf("SEXO: %s\n", u[i].gender);
            printf("ENDERECO: %s\n", u[i].address);
            printf("ALTURA: %.2f\n", u[i].height);
            printf("VACINA: %i\n", u[i].vaccine);
        }
    }
}

void searchUser() {
    // search for a user
}

void listUser() {
    // exlude user
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

        printf("Escreva o primeiro nome:");
        fflush(stdin);
        scanf("%[^\n]s", u[index].name);
        printf("%s NOMMEEEEE\n",u[index].name);
        // fgets(u[index].name, sizeof(u[index].name), stdin);
        // fflush(stdin);

        fflush(stdin);
        printf("Escreva o email:");
        scanf("%[^\n]s", u[index].email);

        printf("IMPRIMINDO USERS\n");
    } else {
        printf("numero maximo de usuarios atingidos\n");
    }

}

void editUser() {
    // edit user
}

void filterUser() {
    // by email
}