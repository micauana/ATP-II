/*Milena Cauana - Lista 2 - Exercício 17: Escreva um programa em C que encontre a posicao (linha e coluna)
de um elemento especıfico em uma matriz 3x3.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int elemento;
    int esta = 0;

    //Definindo a matriz com elementos entre 0 e 5
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 6;
        }
    }

    //Definindo o elemento que será encontrado
    elemento = rand() % 6;

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

    //Imprimindo elemento para conferir
    printf("\nElemento: %d\n", elemento);

    //Procurando a posição e imprimindo se tiver
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] == elemento)
            {
                printf("\nO elemento esta na posicao na linha %d e na coluna %d.\n", i, j);
                esta = 1;
            }
        }
    }

    if (!esta)
    {
        printf("\nO elemento NAO esta na matriz.\n");
    }

 return 0;
}
