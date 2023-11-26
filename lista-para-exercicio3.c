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
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
    if (novaPessoa == NULL){
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE); //sai do programa
    }
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
    scanf("%d", &novaPessoa ->idade);

    if (lista == NULL){
        return novaPessoa;
    }else{
        Pessoa* atual = lista;
        while(atual->prox != NULL){
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

int main (){
    Pessoa *lista = criarListaVazia();
    int opcao;

    do {
        printf("\n1 - Cadastrar");
        printf("\n2 - Mostrar");
        printf("\n3 - Buscar um registro");
        printf("\n4 - Alterar registro");
        printf("\n5 - Excluir um registro");
        printf("\n0 - Sair do registro");
        scanf ("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                mostrarLista(lista);
                break; 
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    } while (opcao != 0);

}