/*Milena Cauana - Lista 2 - Exercicio 22: Escreva um programa em C que preencha uma matriz 4x4 com
numeros aleatorios e depois ordene os elementos de cada linha.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 4

void ordenando(int matriz[], int n)
{
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (matriz[j] > matriz[j + 1])
                {
                    aux = matriz[j];
                    matriz[j] = matriz[j + 1];
                    matriz[j + 1] = aux;
                }
            }
        }
}

int main ()
{
    int i, j, k;
    int matriz[TAM][TAM];

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 30
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 31;
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

    //Ordenando cada linha da matriz
    for (i = 0; i < TAM; i++)
    {
        ordenando(matriz[i], TAM);
    }

    //Imprimindo resultado
     printf("\nMatriz resultante: \n");

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
