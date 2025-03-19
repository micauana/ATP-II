/*Milena Cauana - Lista 2 - Exercicio 26: Escreva um programa em C que verifique
se uma matriz 3x3 e uma matriz esparsa (maioria dos elementos sao zero)*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int qtd_zero = 0;
    int esparsa = 0;

    //Os elementos da matriz ser�o definidos para n�meros aleat�rios entre 0 e 1
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 2;
        }
    }

    //Imprimindo a matriz para conferir
    printf("Matriz: \n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Analisando se ela � esparsa
    //Matriz esparsa � aquela que maioria dos elementos s�o zero
    //Dessa forma, veremos 1� qual � a metade da quantidade de elementos da matriz.
    //Depois veremos a quantidade de zeros na matriz
    //Como a matriz � 3x3 = 9 elementos, a metade seria 4.5, tomaremos que se a quantidade de zeros for > 5, ela � esparsa
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] == 0)
            {
                qtd_zero += 1;
            }
        }
    }

    if (qtd_zero > 5)
    {
        esparsa = 1;
    }


    //Imprimindo resultado
    if (esparsa)
    {
        printf("\nA matriz eh esparsa.\n");
    }
    else
    {
        printf("\nA matriz NAO eh esparsa.\n");
    }

return 0;
}
