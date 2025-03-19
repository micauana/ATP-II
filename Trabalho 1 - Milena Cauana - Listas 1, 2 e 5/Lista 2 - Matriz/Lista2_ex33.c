/*Milena Cauana - Lista 2 - Exercício 33: Escreva um programa em C que encontre o menor elemento em
uma matriz 5x5.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 5

int main ()
{
    int i, j;
    int matriz[TAM][TAM];

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 60
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 61;
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

    //Encontrando o menor elemento, para isso, iremos percorrer toda a matriz
    int menor = matriz [0][0];

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
    }

    //Imprimindo o resultado
    printf("\n\nMenor elemento: %d\n", menor);

return 0;
}
