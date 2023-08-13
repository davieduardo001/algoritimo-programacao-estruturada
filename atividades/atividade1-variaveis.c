#include<stdio.h>

int main() {
    
    //starting the program
    printf("\nIniciando algoritimo de cadastro...\n");
    printf("Favor preencher conforme solicitado\n\n");

    //variables
    char nome[50];
    int idade;
    float altura;
    char endereco[70];
    char matricula[30];
    char curso[70];
    char periodo[50];
    char diciplinas[100];

    //inputs
    printf("Escreva seu NOME: ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("Escreva sua IDADE: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Escreva sua ALTURA: ");
    scanf("%f", &altura);    
    fflush(stdin);

    printf("Escreva seu ENDERECO: ");
    fgets(endereco, 70, stdin);
    fflush(stdin);

    printf("Escreva sua MATRICULA: ");
    fgets(matricula, 30, stdin);
    fflush(stdin);

    printf("Escreva seu CURSO: ");
    fgets(curso, 70, stdin);
    fflush(stdin);

    printf("Escreva qual o periodo do seu curso (matutino ou noturno): ");
    fgets(periodo, 50, stdin);
    fflush(stdin);

    printf("Escreva suas diciplinas cursadas nesse semestre: ");
    fgets(diciplinas, 100, stdin);
    fflush(stdin);

    //outputs
    printf("\n\n__DADOS PESSOAIS__\n");
    printf("Ola, %sVoce tem %.2fm de ALTURA e tem %d ANOS.\nMora no ENDERECO: %s", nome, altura, idade, endereco);

    printf("\n\n__DADOS ESTUDANTIS__\n");
    printf("Sua matricula: %s", matricula);
    printf("Seu curso: %s", curso);
    printf("O PERIODO que estuda: %s", periodo);
    printf("As DICIPLINAS desse semestre: %s", diciplinas);

    //exit
    printf("\nObrigad@ por se cadastrar!\n");
    printf("\nSaindo do programa...\n\n");
    return 0;
}