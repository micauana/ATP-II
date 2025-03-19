/*Milena Cauana - Lista 1 - Exercício 13: Escreva um programa em C que declare um array de 5 inteiros.
Use um ponteiro para acessar e imprimir todos os elementos do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[5];
    int i;
    int *ptr;

    //Farei um programa que declara 5 números aleatórios entre 0 e 20 para o array
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        array[i] = rand() % 21;
    }

    printf("Os cinco números do array sao:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n\n");

    //Armazenando no ponteiro o endereço do array (o ponteiro só armazenará o endereço do primeiro elemento do array)
    ptr = array; //Pode-se atribuir o endereço sem o & pois o array já é um ponteiro para o primeiro elemento

    //Imprimindo todos os elementos do array
    printf("\n");

    printf("Impressao dos elementos pelo ponteiro: ");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", *(ptr + i));
    }

    printf("\n\n");

return 0;
}
