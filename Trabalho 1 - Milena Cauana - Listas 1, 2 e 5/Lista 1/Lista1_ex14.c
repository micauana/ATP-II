/*Milena Cauanna - Lista 1 - Exerc�cio 14: Escreva um programa em C que declare um array de 5
inteiros e um ponteiro para inteiro. Use o ponteiro para modificar os valores
dos elementos do array. Imprima o array resultante.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[5];
    int i;
    int *ptr;

    //Ser�o declarados 5 n�meros aleat�rios entre 0 e 20 para o array
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        array[i] = rand() % 21;
    }

    printf("Os cinco numeros do array sao:");
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n\n");

    //Atribuindo o endere�o do array para o ponteiro
    ptr = array;

    //Modificando os elementos do array atrav�s do ponteiro
    for (i = 0; i < 5; i++)
    {
        *(ptr + i) += 1;
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
