//typedef struct {
//    int code;
//    char descricao[100];
//    int quantity;
//    float value;
//} Product;

//Product *baseProduct;
//baseProduct = (Product*)malloc(sizeof(baseProduct));


int createId(Product *p, int *index) {
    // create a ID
    int validate;
    do {
        validate = 1;

        p[index].code = rand() % 100;

        for(int i = 0; i < index-1; i++) {
            if( (p[index].code) == (p[i].code) ) {
                validate = 0;
            }
        }
    } while(validate == 0);

    return p[index].code;
}

int addToTheProductIndex(int *index) {
    *index = *index + 1; 

    return 0;
}

Product *putProduct() {
    Product *p = (Product*)malloc(sizeof(p));

    p->code = 213;
    printf("PRODUTO CODIGO: %d\n", p->code);

    printf("Escreva a descricao do produto: ");
    fgets(p->descricao, sizeof(p->descricao), stdin);
    fflush(stdin);

    printf("Escreva a quantidade de produtos no sistema: ");
    scanf("%d", &p->quantity);
    fflush(stdin);

    printf("Escreva o valor deste produto: ");
    scanf("%f", &p->value);
    fflush(stdin);

    return p;

}

int createProduct(Product *p) {
    p[0].code = 12343;
    printf("the product code is: %i\n", p[0].code);
    return 0;
}

int createCodeForTheProduct() {
    return 0;
}
int readProduct() {
    return 0;
}

int updateProduct() {
    return 0;
}

int deleteProduct(){
    return 0;
}
