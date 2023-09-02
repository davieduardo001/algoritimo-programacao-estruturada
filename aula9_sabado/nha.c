#include<stdio.h>

int main(int argc, char *argv[ ]) {

    int i;
    
    printf("\n\n    ( ");
    for (i = 0; i < argc; i++)
    {
        if (i>0)
            printf("%s ", argv[i]);
    }
    printf(")\n");


    printf("        /\n       /\n");
    printf("┈┈╱╲┈┈┈╱╲┈┈╭━╮┈\n┈╱╱╲╲__╱╱╲╲┈╰╮┃┈\n┈▏┏┳╮┈╭┳┓▕┈┈┃┃┈\n┈▏╰┻┛▼┗┻╯▕┈┈┃┃┈\n┈╲┈┈╰┻╯┈┈╱▔▔┈┃┈\n┈┈╰━┳━━━╯┈┈┈┈┃┈\n┈┈┈┈┃┏┓┣━━┳┳┓┃┈\n┈┈┈┈┗┛┗┛┈┈┗┛┗┛┈\n");
    return 0;
}