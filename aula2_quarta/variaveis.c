#include<stdio.h>

int main ()
{
    int numero = 200;

    printf("%d \n", &numero); // & (operador unario) NOME DA VARIAVEL retorna o endereço da variavel 
    //TODA A VARIAVEL EH ALOCADA EM UM ENDERECO DE MEMORIA

    printf("%d \n", numero);

    //ALOCACAO DE MEM ESTATICA
    float num1; //ao criar uma variavel ela automaticamente aloca "lixo" dentro da variavel
    float num2 = 324.321312312;
    int numeroApartamento;
    float salarioAnual = 1000.00;

    printf("demonstrando lixo de mem %d \n", num1);


    int apartamento = 204;
    float salario = 2134.3;
    //especificadores de formato
    printf("A variavel numero armazena %i \n", numero);
    printf("o salario atual eh R$%.2f \n", salarioAnual);
    printf("Jao mora no apartamento %i e ganha R$%.2f por ano \n", apartamento, salario);
    return 0;
}
