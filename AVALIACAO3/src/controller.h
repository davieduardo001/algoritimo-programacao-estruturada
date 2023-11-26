//typedef struct {
//    int code;
//    char descricao[100];
//    int quantity;
//    float value;
//} Product;

//Product *baseProduct;
//baseProduct = (Product*)malloc(sizeof(baseProduct));


int createId(Product *p, int index) {
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

Product *putProduct(int index) {
    Product *p = (Product*)malloc(sizeof(p));

    p->code = createId(p, index);
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

int createProduct(Product *p, int *index) {

    if(*index == 0) {

        addToTheProductIndex(index);

        // create a list with one more element
        int n = *index;
        p = (Product*)malloc(n * sizeof(Product));

        p[0].code = 12;
        p[1].code = 123;

        printf("code of 0: %i\ncode of 1: %i\n", p[0].code, p[1].code);


        // generate the random code
        //int code = createId(p, *index);

        // receive the inputs of the products
        //Product *productBase;
        //productBase->code = code;

        //productBase = putProduct(*index);

        //printf("code on the base product: %i\n", productBase->code);
        // put the product on the list
        //p[*index].code = code;
    }

    return 0;
}

int readProduct(Product *p, int *index) {

    printf("code: %i\n", p[0].code);

    return 0;
}

int updateProduct() {
    return 0;
}

int deleteProduct(){
    return 0;
}
