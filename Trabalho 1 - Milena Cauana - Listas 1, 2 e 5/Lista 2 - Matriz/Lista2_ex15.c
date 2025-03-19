/*Milena Cauana - Lista 2 - Exercício 15: Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 10
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 11;
        }
    }

    //Imprimindo a matriz original para conferir
    printf("Matriz: \n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    /*Invertendo as linhas.
    Como a matriz tem 3 linhas, iremas trocar a primeira linha com a terceira, já que a do meio continuará no mesmo lugar
    Veja um exemplo: 123 invertido --> 321*/

        for (j = 0; j < TAM; j++)
        {
            int aux = matriz[0][j];
            matriz[0][j] = matriz[2][j];
            matriz[2][j] = aux;
        }

     //Imprimindo a matriz invertida
    printf("\nMatrzi com linhas invertidas: \n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

 return 0;
}
