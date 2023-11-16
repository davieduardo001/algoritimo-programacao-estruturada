
typedef struct {
    char sexo[10];
    char classificacao[10];
    float salario;
    int index;
} Assalariado;

int count = 0;
int acimaSalarioMinimo = 0;
int abaixoSalarioMinimo = 0;

// function for receiving the gender of the person
const char* receberSexo(char s) {
    char *sexo;

    switch(s) {
        case 'M': case 'm':
            sexo = "masculino";
        break;
        case 'F': case 'f':
            sexo = "feminino";
        break;
    }

    return sexo;
}

// function that classify the salary of the person
const char* classificaSalario(float salario) {
    char *classificacao;

    if(salario == 1400) {
        classificacao = "igual";
    } else if(salario > 1400) {
        classificacao = "acima";
        acimaSalarioMinimo++;
    } else {
        classificacao = "abaixo";
        abaixoSalarioMinimo++;
    }

    return classificacao;
}

// INPUTS
void receberAssalariado(Assalariado *a) {

    while(count < 3) {
        // setting up a new person...
        a[count].index = count;
        char confirm = 'n';

        printf("Assalariado: [%i]\n", a[count].index);

        // receiving the salary
        do {
            printf("Escreva o salario: ");
            scanf("%f", &a[count].salario);
        } while(a[count].salario < 1);
        
        // computing the gender
        char sexo;
        do {
            printf("Escreva o sexo [M ou F]: ");
            scanf("%s", &sexo);
        } while(!(sexo == 'M' || sexo == 'm' || sexo == 'f' || sexo == 'F'));
        strcpy(a[count].sexo, receberSexo(sexo));
        
        // add another one? yes/no
        printf("DESEJA ADICIONAR MAIS UM? [s/n] \n");
        scanf("%s", &confirm);

        // compute the salary classification
        strcpy(a[count].classificacao, classificaSalario(a[count].salario));

        if(confirm == 's' || confirm == 'S') {
            count++;
            system("clear");
        } else {
            system("clear");
            break;
        }
    }
}

// show the person
void mostraClassifica(char* classificacao, char* sexo, float salario, int colaborador) {
    printf("Colaborador %i\n", colaborador);
    printf("Salario: %.2f\n", salario);
    printf("Sexo: %s\n", sexo);
    printf("Classificacao: %s\n", classificacao);
}

// OUTPUT
void listaClassificacao(Assalariado *a) {

    printf("RESULTADOS: \n");
    for(int i = 0; i < (count+1); i++) {
        printf("-------\n");
        mostraClassifica(a[i].classificacao, a[i].sexo, a[i].salario, a[i].index);
    }
    printf("-----\n\n");
    printf("* Sao %i acima do salario minimo\n* Sao %i abaixo do salario minimo\n", acimaSalarioMinimo, abaixoSalarioMinimo);
}
