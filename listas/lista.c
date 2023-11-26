#include<stdio.h>

//////////////////////////////////
// model
typedef struct {
    char *nome;
    int n;

    struct Pessoa *prox;
} Pessoa;

//////////////////////////////////
// initialize the list
Pessoa *createVoidList{
    return NULL;
}

// create a person
Pessoa *newPerson() {
    Pessoa *newPerson = (Pessoa*)malloc(sizeof(Pessoa));
}


//////////////////////////////////
int main() {
    Pessoa *lista;
    lista = createVoidList();

    int opcao;

    do {
        printf("1-cadastrar\n2-mostrar\n3-buscar\n4-alterar registro\n5-excluir registro\n0-sair da aplicacao\n");
        scanf("%i", &opcao);

        switch(opcao) {
            case 1:
                lista = cadastrar(lista);
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 0:
                return 0;
            default:
                printf("opcao nao encontrada! favor, digitar uma opcao valida\n");
 
        }
   }

    return 0;
}
