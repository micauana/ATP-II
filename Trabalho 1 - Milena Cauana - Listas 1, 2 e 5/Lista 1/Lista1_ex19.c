/*Milena Cauana - Lista 1 - Exercício 19: Escreva um programa em C que declare um array de 8
numeros de ponto flutuante e use aritmetica de ponteiros para calcular a media
dos valores.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    float array[8] = {2.34, 7.89, 5.67, 1.23, 8.45, 9, 3, 4.78};
    float *ptr;
    float soma = 0;
    int i;

    //Imprimindo o array
    printf("Array:");

    for (i = 0; i < 8; i++)
    {
        printf(" %.2f ", array[i]);
    }

    printf("\n\n");

    //Atribuindo o endereço do array ao ponteiro
    ptr = array;

    //Somando os elementos utilizando aritmetica de ponteiros para depois calcular a media
    for (i = 0; i < 8; i++)
    {
        soma += *(ptr + i);
    }

    //Calculando e imprimindo a media
    printf("Media dos elementos: %.3f\n", soma / 8);

return 0;
}
