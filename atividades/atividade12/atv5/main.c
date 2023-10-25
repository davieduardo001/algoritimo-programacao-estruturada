#include <stdio.h>
#include <time.h>

//! 7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

int computandoDias(int dias, int meses, int anos)
{
    time_t today = time(NULL);
    struct tm tm = *localtime(&today);
    if(meses <= tm.tm_mon + 1) {

        anos = (tm.tm_year + 1900 - anos);
        printf("* %d anos\n", anos);
        anos *= 360;

        meses = ((tm.tm_mon + 1) - meses);
        printf("* %d meses\n", meses);
        meses *= 30;

        dias = tm.tm_mday - dias;

        printf("* %d dias\n", dias);

        return dias + meses + anos;
    } else {

        anos = (((tm.tm_year + 1900) - anos) - 1);
        printf("* %d anos\n", anos);
        anos *= 360;

        meses = (12 - (meses - (tm.tm_mon + 1)));
        printf("* %d meses\n", meses);
        meses *= 30;

        dias = tm.tm_mday - dias;
        printf("* %d meses\n", meses);
        meses *= 30;

        return dias + meses + anos;
    }
}

int main() {

    //* variables
    int anos, meses, dias, totalDeDias;

    //* inputs
    printf("Voce nasceu em qual ano? ");
    scanf("%i", &anos);
    fflush(stdin);

    printf("qual o numero do mes voce nasceu? (ex: 01, 02, 03... 11, 12) ");
    scanf("%i", &meses);
    fflush(stdin);

    printf("que dia voce nasceu? ");
    scanf("%i", &dias);
    fflush(stdin);

    printf("\n\nDIAS VIVIDOS\n");

    totalDeDias = computandoDias(dias, meses, anos);
    //* outputs
    printf("\n\nSUA IDADE EM DIAS EH: %d\n", totalDeDias);

    return 0;
}