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
    return option;
}

void getUser(User *u, int index) {
    u[0].gender = 'M';

    for(int i; i < index, i++) {
        
    }
    
    printf("test: %c", u[0].gender);
}

void searchUser() {
    // search for a user
}

void listUser() {
    // exlude user
}

void createId() {
    // create a ID
}

void createUser(User *u, index, max) {
    // create a user
    if(index != max) {
        u[index].ID = rand() % 100;

        printf("Escreva o nome: %s");
        fgets(u[index].name, sizeof(u[index].name), stdin);
        fflush(stdin);

        index++;
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