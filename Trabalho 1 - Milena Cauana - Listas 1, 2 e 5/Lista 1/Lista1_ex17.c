/*Milena Cauana - Lista 1 - Exercício 17: Escreva um programa em C que declare um array de 5 inteiros
e use aritmetica de ponteiros para somar 10 a cada elemento do array. Imprima
o array resultante.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[5];
    int *ptr;
    int i;

    //O array receberá 5 números aleatórios de 0 a 30
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        array[i] = rand() % 31;
    }

    //Imprimindo o array original
    printf("Array original: ");

    for (i = 0; i < 5; i++)
    {
        printf(" %d ", array[i]);;
    }

    printf("\n\n");

    //Atribuindo o endereço do array ao ponteiro
    ptr = array;

    //Utilizando a aritmetica de ponteiros para somar 10 a cada elemento do array
    for (i = 0;  i < 5; i++)
    {
        *(ptr + i) += 10;
    }

    //Imprimindo o array resultante
    printf("Array resultante: ");

    for (i = 0; i < 5; i++)
    {
        printf(" %d ", *(ptr + i));
    }

    printf("\n\n");

return 0;
}
