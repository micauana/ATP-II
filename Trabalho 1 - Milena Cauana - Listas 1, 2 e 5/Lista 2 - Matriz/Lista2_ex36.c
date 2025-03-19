/*Milena Cauana - Lista 2 - Exercício 36: Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatorios e depois ordene os elementos de cada coluna.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 5

void ordenando(int matriz[TAM][TAM], int coluna)
{
    int i, j, aux;

    for (i = 0; i < TAM - 1; i++)
    {
        for (j = 0; j < TAM - i - 1; j++)
        {
            if (matriz[j][coluna] > matriz[j + 1][coluna])
            {
                aux = matriz[j][coluna];
                matriz[j][coluna] = matriz[j + 1][coluna];
                matriz[j + 1][coluna] = aux;
            }
        }
    }
}
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

    //Ordenando cada coluna
    for (j = 0; j < TAM; j++)
    {
        ordenando(matriz, j);
    }

    //Imprimindo a matriz ordenada
    printf("\nMatriz ordenada: \n");

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
