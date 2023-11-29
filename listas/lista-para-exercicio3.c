#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// apontamentos para endereços de memoria, estrutura de dados mais genérica
// o algoritmo n tem limitacao de escopo so de hardware em estrutura de dados

typedef struct Pessoa{
    int id;
    char nome[30];
    int idade;
    struct Pessoa *prox; // colocar o nome dela (Pessoa) TBM no inicio quando tiver struct aqui com ponteiro
}Pessoa;

Pessoa* criarListaVazia(){
    return NULL;
}

Pessoa* criarPessoa(){
    // cria um endereço de mem. aleatorio
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));

    // verificação se consege alocar um endereco
    if (novaPessoa == NULL){
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE); //sai do programa
    }

    //a nova pessoa vai receber o ponteiro do proximo como nulo
    //deixando assim a referencia do proximo nulo (por enquanto)
    novaPessoa->prox = NULL;
    return novaPessoa;
} 

Pessoa* cadastrar(Pessoa *lista){
    Pessoa *novaPessoa = criarPessoa();
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &novaPessoa->idade);

    if(lista == NULL) {
        return novaPessoa;
    } else {
        Pessoa* atual = lista;
        while(atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
        return lista;
    }
}

void mostrarLista(Pessoa *lista){
    Pessoa *atual = lista;
    if (atual == NULL){
        printf("lista vazia");
        return;
    }else{
        while (atual != NULL){
            printf("\nNome: %s", atual->nome);
            printf("\nID: %d", atual->id);
            printf("\nIdade: %d", atual->idade);
            printf("\n");
            atual = atual->prox;
        }
        
    }
}

Pessoa *buscar(Pessoa *lista, int idBusca) {
    Pessoa *atual = lista;

    if(atual == NULL) {
        printf("lista vazia");
        return NULL;
    } else {
        while(atual != NULL) {
            if(idBusca == atual->id) {
                printf("\nNome: %s", atual->nome);
                printf("\nID: %d", atual->id);
                printf("\nIdade: %d", atual->idade);
                printf("\n");
                return atual;
            }
            atual = atual->prox;
        }
        printf("pessoa nn encontrada!\n");
        return NULL;
    }
}

void alterar(Pessoa *encontrada) {
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(encontrada->nome, sizeof(encontrada->nome), stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &encontrada->idade);
}

Pessoa *exluir(Pessoa *lista, int idBusca) {
    pessoa *atual = lista;
    Pessoa anterior = NULL;

    //percorer a lista que iremos exluir
    while(atual != NULL && atual->id != idBusca) {
        // a ordem IMPORTA
        anterior = atual;
        atual = atual->prox;
    }

    if(atual != NULL) {
        if(anterior != NULL) {
            //excluir alguem depois do primeiro da lista
            anterior->prox = autal->prox;
        } else {
            lista = atual->prox;
        }
        free(atual);
        printf("pessoa ecluida com sucesso\n");
    } else {
        //exluir o primeiro da lista
        printf("pessoa nao encontrada\n");
    }
    
    return lista;
}

int main (){
    Pessoa *lista = criarListaVazia();
    int opcao, idBuscado;
    Pessoa *encontrada;

    do {
        printf("\n1 - Cadastrar");
        printf("\n2 - Mostrar");
        printf("\n3 - Buscar um registro");
        printf("\n4 - Alterar registro");
        printf("\n5 - Excluir um registro");
        printf("\n0 - Sair do registro\n");
        printf("Digite uma opcao: ");
        scanf ("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                mostrarLista(lista);
                break; 
            case 3:
                printf("digite o ID de busca: ");
                scanf("%d", &idBuscado);
                encontrada = buscar(lista, idBuscado);
                break;
            case 4:
                printf("digite o ID para buscar os dados: ");
                scanf("%d", &idBuscado);
                encontrada = buscar(lista, idBuscado);
                if(encontrada != NULL)
                    alterar(encontrada);
                break;
            case 5:
                printf("digite o id para excluir: ");
                scanf("%d", &idBuscado);
                lista = exluir(lista, idBusca);
                break;
        }
    } while (opcao != 0);

}
