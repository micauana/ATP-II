/*Milena Cauana - Lista 1 - Exercício 9: Escreva um programa em C que preencha um array de 20 inteiros
com numeros aleatorios entre 1 e 100. Em seguida, imprima todos os elementos
do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[20];
    int i;

    //Declarando srand
    srand(time(NULL));

    //Preenchendo o array
    for(i = 0; i < 20; i++)
    {
        array[i] = 1 + rand() % 100;
    }

    //Imprimindo os elementos

    printf("Os 20 numeros aleatorios gerados sao: \n");

    for (i = 0; i < 20; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("\n");

return 0;
}
