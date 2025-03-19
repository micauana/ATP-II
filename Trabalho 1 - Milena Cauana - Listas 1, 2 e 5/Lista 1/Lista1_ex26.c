/*Milena Cauana - Lista 1 - Exercício 26: Escreva um programa em C que leia duas strings e concatene-
as. Imprima a string resultante.*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char string1[30], string2[30];

    //Recebendo as strings
    printf("Escreva uma palavra, frase ou texto: \n");
    gets(string1);
    printf("Escreva uma palavra, frase ou texto: \n");
    gets(string2);

    //Concatenando
    strcat(string1, string2);

    //Exibindo a concatenação
    printf("\n\n=================\n\n");
    printf("Concatenacao: %s", string1);


return 0;
}
