/*Milena Cauana - Lista 2 - Exercício 11: Escreva um programa em C que conte quantos elementos pares
existem em uma matriz 3x3.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int par = 0;

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 50
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 51;
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

    //Para definir quantos elementos da matriz são pares, iremos percorre-la
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                par += 1;
            }
        }
    }

    //Imprimindo o resultado
    printf("\n\nA matriz tem %d elementos pares.\n", par);

    return 0;
}
