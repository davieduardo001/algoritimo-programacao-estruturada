//typedef struct {
//    int code;
//    char descricao[100];
//    int quantity;
//    float value;
//} Product;

//Product *baseProduct;
//baseProduct = (Product*)malloc(sizeof(baseProduct));

Product *putProduct() {
    Product *p = (Product*)malloc(sizeof(p));

    p->code = 213;
    printf("PRDUTO CODIGO: %d\n", p->code);

    printf("Escreva a descricao do produto: ");
    fgets(p->descricao, sizeof(p->descricao), stdin);
    fflush(stdin);

    printf("Escreva a quantidade de produtos no sistema: ");
    scanf("%d", &p->quantity);
    fflush(stdin);

    printf("Escreva o valor deste produto: ");
    scanf("%d", &p->value);
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
