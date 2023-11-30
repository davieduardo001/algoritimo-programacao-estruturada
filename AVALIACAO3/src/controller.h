Product *createVoidList() {
    return NULL;
}

int createId(Product *list, Product *newProduct) {
    //create a ID
    int validate, code;
    Product *current = list;

    do {
        validate = 0;

        srand(time(NULL));

        code = rand() % 1000;

        newProduct->code = code;

        if(list != NULL) {
            while(current->next != NULL) {
                if( current->code == code ) {
                    validate = 1;
                }
                current = current->next; 
            }
        }
    } while(validate == 1);

    return code;
}

Product *createProduct(Product *list) {
    Product *newProduct = (Product*)malloc(sizeof(Product));

                printf("entou AQUIII\n");

    if(newProduct == NULL) {
        printf("erro ao alocar mem.\n");
        exit(EXIT_FAILURE);
    }

    newProduct->code = createId(list, newProduct);

    printf("PRODUTO N* %i\n", newProduct->code);

    printf("Digite a descricao do produto: ");
    fflush(stdin);
    fgets(newProduct->descricao, sizeof(newProduct->descricao), stdin);

    printf("Digite a quantidade de produtos: ");
    fflush(stdin);
    scanf("%d", &newProduct->quantity);

    printf("Digite o valor do produto: ");
    fflush(stdin);
    scanf("%f", &newProduct->value);

    newProduct->next = NULL;

    return newProduct;
}

Product *putProduct(Product *list) {
    Product *newProduct = createProduct(list);

    if(list == NULL) {
        return newProduct;
    } else {
        Product *current = list;

        //this will go through the whole list and stop in the last position;
        while(current->next != NULL) {
            current = current->next;
        }

        //this will set the last position *next pointer to the newProduct pointer;
        current->next = newProduct;

        return list;
    }

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
