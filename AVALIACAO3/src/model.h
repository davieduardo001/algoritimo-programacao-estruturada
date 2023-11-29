typedef struct {
    int code;
    char descricao[100];
    int quantity;
    float value;
    struct Product *next; 
} Product;
