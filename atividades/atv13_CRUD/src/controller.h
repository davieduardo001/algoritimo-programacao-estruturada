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

    for(int i; i < index; i++) {
        printf("ID: %s", u[i].ID);
        printf("NOME: %s", u[i].name);
        printf("NOME: %s", u[i].email);
        printf("SEXO: %s", u[i].gender);
        printf("ENDERECO: %s", u[i].address);
        printf("ALTURA: %.2f", u[i].height);
        printf("VACINA: %i", u[i].vaccine);
    }
    
    printf("test: %c", u[0].gender);
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
void createUser(User *u, int index, int max) {
    // create a user
    if(index != max) { 
        index++;
        
        // verify ID
        createId(u, index);

        printf("Escreva o primeiro nome:");
        fflush(stdin);
        scanf("%[^\n]s", u[index].name);
        // fgets(u[index].name, sizeof(u[index].name), stdin);
        // fflush(stdin);
        fflush(stdin);

        printf("Escreva o email:");
        scanf("%s", u[index].email);



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