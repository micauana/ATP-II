/*Teste tamanho de um ponteiro*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int *p;

    printf("INTEIRO: \n");
    printf("Tamanho do inteiro: %d\n", sizeof(int));
    printf("Tamanho do ponteiro do inteiro: %d\n", sizeof(p));
    printf("\n\n");

    char *p2;

    printf("CHAR: \n");
    printf("Tamanho do char: %d\n", sizeof(char));
    printf("Tamanho do ponteiro do char: %d\n", sizeof(p2));
    printf("\n\n");

    float *p3;

    printf("FLOAT: \n");
    printf("Tamanho do float: %d\n", sizeof(float));
    printf("Tamanho do ponteiro do float: %d\n", sizeof(p3));
}
