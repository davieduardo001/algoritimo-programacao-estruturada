int receberQuantidadeVendidos() {
    int maisUmFuncionario = 1;
    int *contribuicaoFuncionarios, *salarioFuncionarios;

    contribuicaoFuncionarios = malloc(maisUmFuncionario * sizeof(int));

    while(1) {
        printf("escreva o numero de contribuicoes do funcionario %i: ", *contribuicaoFuncionarios);
        scanf("%i", &contribuicaoFuncionarios[]);

        
    }


}

int validaQuantidade(float salario, int quantidaeDePecas) {
    float salarioFinal = salario + verificarBonusMais80(quantidaeDePecas) + verificarBonusMais50(quantidaeDePecas);

    return salarioFinal;
}

float verificarBonusMais80(int quantidaeDePecas) {
    int i;
    float total;

    quantidaeDePecas -= 80;

    if(quantidaeDePecas > 0)
        for(int i = 0; i < quantidaeDePecas; i++);
            total += 0.75;
    
    return float;
}

float verificarBonusMais50(int quantidaeDePecas) {
    int i;
    float total;

    quantidaeDePecas -= 50;

    if(quantidaeDePecas > 0)
        for(int i = 0; i < quantidaeDePecas; i++);
            total += 0.50;
    
    return total;
}