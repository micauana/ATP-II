/*Milena Cauana - Lista 3 - Exercicio 10: Declare e inicialize uma uniao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

union UmPraTodos
{
    int inteiro;
    float flutuante;
};

int main ()
{
    union UmPraTodos valor;

    valor.inteiro = 10;
    printf("Inteiro: %d\n", valor.inteiro);

    valor.flutuante = 3.55;
    printf("Flutuante: %.2f", valor.flutuante);

return 0;
}
