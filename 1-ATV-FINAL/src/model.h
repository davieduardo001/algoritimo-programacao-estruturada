typedef struct Car{
    int chassis;
    char owner[100];
    char model[50];
    char *gasType;
    char color[50];
    int year;
    char plate[10];

    struct Car *next; 
} Car;
