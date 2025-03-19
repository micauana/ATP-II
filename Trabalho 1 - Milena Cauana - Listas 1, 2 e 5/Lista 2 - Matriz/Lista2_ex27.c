/*Milena Cauana - Lista 2 - Exercicio 27: Escreva um programa em C que multiplique uma matriz
3x3 por um escalar*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int escalar;

    //Os elementos da matriz serão definidos para números aleatórios entre -10 e 10
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = -10 + rand() % 21;
        }
    }

    //Selecionando um escalar aleatório entre -10 e 10
    escalar = -10 + rand() % 21;


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

    //Imprimindo o escalar para verificação
    printf("\nEscalar: %d\n", escalar);

    //Efetuando a multiplicação
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] *= escalar;
        }
    }

    //Imprimindo o resultado
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
