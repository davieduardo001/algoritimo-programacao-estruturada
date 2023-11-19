#include<stdio.h>
#include<stdint.h>

struct person {
    int n;
};

int main() {
    int n = 333;

    //pointer declaration
    //it receive a mem. address
    int *ptr = &n; //the receive the mem. address of a INT varible

    float *p1;
    double *p2;
    struct person *p3;

    printf("the address of the variable is: %i\nand it value is: %i\n", &n, n); // & return the mem. address

    printf("POINTER value (the address that u've passed): %B\n", ptr);
    printf("the actually POINTER address: %i\n", &ptr);
    printf("the value of the mem. address passed by the pointer: %i\n", *ptr);

    *ptr = 555; //point to the variable value and change that
    printf("update the var value with the pointer value: %i\n", n);
    /*
        types:
            int, float, struct, char, double...
    */

    return 0;
}
