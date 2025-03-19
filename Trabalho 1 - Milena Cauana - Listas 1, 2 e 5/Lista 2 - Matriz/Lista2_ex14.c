/*Milena Cauana - Lista 2 - Exercício 14: Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int outra_matriz[TAM][TAM];

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 5
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 6;
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

    //Copiando os elementos da matriz para a outra
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            outra_matriz[i][j] = matriz[i][j];
        }
    }

    //Imprimindo a outra
    printf("\nA outra matrziz: \n");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            printf(" %d ", outra_matriz[i][j]);
        }
        printf("\n");
    }

 return 0;
}
