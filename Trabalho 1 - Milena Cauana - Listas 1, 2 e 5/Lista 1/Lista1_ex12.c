/*Milena Cauana - Lista 1 - Exercício 12: Escreva um programa em C que preencha um array de 12
inteiros com numeros aleatorios entre -20 e 20. Em seguida, conte e imprima
quantos numeros sao negativos.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int array[12];
    int i;
    int negativo = 0;

    //Declarando srand
    srand(time(NULL));

    //Preenchendo o array
    for (i = 0; i < 12; i++)
    {
        array[i] = -20 + ((float)rand()/RAND_MAX) * 40;
    }

    //Imprimindo os elementos para conferir e definindo quantos são negativos
    printf("Os elementos são: \n");

    for (i = 0; i < 12; i++)
    {
        printf(" %d ", array[i]);

        if (array[i] < 0)
        {
            negativo += 1;
        }
    }

    //Imprimindo a quantidade de números negativos
    printf("\n\n");

    printf("Existem %d numeros negativos.\n", negativo);

return 0;
}
