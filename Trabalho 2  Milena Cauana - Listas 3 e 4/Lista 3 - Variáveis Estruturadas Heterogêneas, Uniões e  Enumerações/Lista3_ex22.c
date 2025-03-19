/*Milena Cauana - Lista 3 - Exercício 22: Declare e inicialize uma uni ̃ao para armazenar um valor char ou um valor inteiro
e imprima seus valores.*/
#include<stdio.h>
#include<string.h>

union Valor
{
    char caractere;
    int inteiro;
};

int main()
{
    union Valor valores;
    valores.caractere = 'A';
    printf("Valor char: %c\n", valores.caractere);

    valores.inteiro = 12345;
    printf("Valor int: %d\n", valores.inteiro);

    return 0;
}
