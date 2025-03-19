/*Milena Cauana - Lista 2 - Exercício 13: Escreva um programa em C que verifique se uma matriz 4x4 e
uma matriz diagonal.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 4

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int diagonal = 1;

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

    //Conferindo se a matriz é ou naõ diagonal
    //matriz diagonal é aquela que todos os elementos fora da diagonal principal são zero
    //Para isso, percorreremos a matriz e os elementos em que i != j devem ser = 0
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i != j && matriz[i][j] != 0)
            {
                diagonal = 0;
                break;//sai do loop interno
            }

        }
        if (!diagonal)
        {
            break;//aqui, se ele perceber que já foi definido que a matriz nao eh diagonal, ele nao continuara percorrendo a matriz
        }
    }

    //Imprimindo resultado
    if (diagonal)
    {
        printf("A matriz eh diagonal.\n");
    }
    else
    {
        printf("A matriz NAO eh diagonal.\n");
    }

    return 0;
}
