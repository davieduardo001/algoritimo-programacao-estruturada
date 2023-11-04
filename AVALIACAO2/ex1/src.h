struct funcionario {
    float salario;
    int index;
    int contribuicaoFuncionario;
};

int count = 0;

float calculaSalarioMaisDe80(int contribuicoes) {
    float total = 600;
    int c = contribuicoes;
    c -= 80;

    total += 0.75*c;
    total += 0.50*30;

    return total;
}

float calculaSalarioMaisDe50(int contribuicoes) {
    float total = 600;
    int c = contribuicoes;
    c -= 50;

    total += 0.50*c;

    return total;
}

float validaQuantidade(float contribuicoes) {
    float salario = 0;

    if(contribuicoes >= 50 && contribuicoes <= 80) {
        salario = calculaSalarioMaisDe50(contribuicoes);
    } else if(contribuicoes > 80) {
        salario = calculaSalarioMaisDe80(contribuicoes);
    } else {
        salario = 600;
    }

    return salario;
}

int receberQuantidadeVendidos(struct funcionario *f) {
    while(1) {
        int n = 0;
        int confirmacao;

        f[count].index = count;

        printf("Coloque o numero de contribuicoes do funcionario [%i]: ", f[count].index);
        scanf("%i", &n);

        f[count].contribuicaoFuncionario = n;

        f[count].salario = validaQuantidade(f[count].contribuicaoFuncionario);
        
        printf("Deseja adicionar mais um usuario? [1 para adiconar / 0 para sair] ");
        scanf("%i", &confirmacao);

        if(confirmacao == 1) {
            count++;
        } else {
            break;
        }
    }


}

void imprimindoFuncionario(struct funcionario *f) {
    for(int i = 0; i < (count+1); i++) {
        printf("Funcionario: %i\n", f[i].index);
        printf("Numero de contribuicoes: %i\n", f[i].contribuicaoFuncionario);
        printf("Salario: %.2f\n", f[i].salario);
        printf("-------------\n");
    }
}