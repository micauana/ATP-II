/*Milena Cauana - Lista 1 - Exercício 11: Escreva um programa em C que preencha um array de 15
inteiros com numeros aleatorios entre 0 e 50. Em seguida, encontre e imprima o maior valor do array.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[15];
    int i;
    int maior;

    //Declarando srand
    srand(time(NULL));

    //Preenchendo o array
    for (i = 0; i < 15; i++)
    {
        array[i] = rand() % 51;
    }

    //Imprimindo os elementos para conferir
    printf("Elementos do array: \n");

    for (i = 0; i < 15; i++)
    {
        printf(" %d ", array[i]);
    }

    //Definindo o maior do array
    maior = array[0];

    for (i = 1; i < 15; i++)
    {
        if (array [i] > maior)
        {
            maior = array[i];
        }
    }

    //Imprimindo o maior valor do array
    printf("\n\nO maior valor eh: %d\n\n", maior);


return 0;
}
