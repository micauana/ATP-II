/*Milena Cauana - Lista 1 - Exerc�cio 18: Escreva um programa em C que declare um array de 10
inteiros e use aritmetica de ponteiros para calcular a soma de todos os elementos
do array. Imprima a soma.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[10];
    int *ptr;
    int i;
    int soma = 0;

    //O array receber� 10 n�meros aleat�rios de 0 a 30
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        array[i] = rand() % 31;
    }

    //Imprimindo o array
    printf("Array: ");

    for (i = 0; i < 10; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n\n");

    //Atribuindo o endere�o de array ao ponteiro
    ptr = array;

    //Somando os elementos do array atrav�s da artimetica de ponteiros
    for (i = 0; i < 10; i++)
    {
       soma += *(ptr + i);
    }

    //Imprimindo o resultado da soma
    printf("Soma: %d\n", soma);

return 0;
}
