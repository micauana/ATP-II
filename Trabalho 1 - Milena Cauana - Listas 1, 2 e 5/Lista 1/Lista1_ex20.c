/*Milena Cauana - Lista 1 - Exercício 20: Escreva um programa em C que declare um array de 12
caracteres e use aritmetica de ponteiros para inverter a ordem dos caracteres no
array.*/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char array[12] = {'A', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'L'};
    char *ptr_inicio;
    char *ptr_fim;
    char temp;
    int i;

    //Imprimindo o array original
    printf("Array original: ");

    for (i = 0; i < 12; i++)
    {
        printf(" %c ", array[i]);
    }

    printf("\n\n");

    //Definindo os endereços que os ponteiros irão armazenar
    ptr_inicio = array;

    ptr_fim = array + 11;

    //Invertendo o array, para isso, trocaremos o primeiro com o último, o segundo com o penultimo....
    while (ptr_inicio < ptr_fim)
    {
        temp = *ptr_inicio;
        *ptr_inicio = *ptr_fim;
        *ptr_fim = temp;

        //Agora, iremos aumentar o inicio e diminuir o fim
        ptr_inicio ++;
        ptr_fim --;
    }

    //Imprimindo o array invertido
    printf("Array invertido: ");

    for (i = 0; i < 12; i++)
    {
        printf(" %c ", array[i]);
    }

    printf("\n\n");


return 0;
}
