/*Milena Cauana - Lista 1 - Exercício 16: Escreva um programa em C que declare um array de 10
caracteres e use um ponteiro para contar quantos desses caracteres sao letras
maiusculas.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char array[10] = {'A', 'b', 'c', 'D', 'e', 'f', 'G', 'h', 'i', 'J'};
    char *ptr;
    int i;
    int maiuscula = 0;

    //Imprimindo o array
    printf("Os caracteres do array sao:");

    for (i = 0; i < 10; i++)
    {
        printf(" %c ", array[i]);
    }

    printf("\n\n");

    //Atribuindo ao ponteiro o endereço do array
    ptr = array;

    //Contando quantas são maiúsculas através da tabela ascii
    for (i = 0; i < 10; i++)
    {
        if (*(ptr + i) >= 65 && *(ptr + i) <= 90)
        {
            maiuscula += 1;
        }
    }

    //Imprimindo resultado
    printf("No array tem %d letras maiusculas.\n\n", maiuscula);

return 0;
}
