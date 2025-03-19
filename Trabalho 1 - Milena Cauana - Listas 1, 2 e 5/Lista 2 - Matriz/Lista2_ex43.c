/*Milena Cauana - Lista 2 - Exerc�cio 43: Escreva um programa em C que calcule a soma dos elemenntos
abaixo da diagonal princi�l de uma matriz 4x4*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 4

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int soma = 0;

    //Os elementos da matriz ser�o definidos para n�meros aleat�rios entre 0 e 60
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

    //Calculando a soma dos elementos abaixo da diagonal principal
    //Irei imprimi-los para verificar se sao os elementos certos
    printf("Elementos abaixo da diagonal principal: ");
    for (i = 1; i < TAM; i++)
    {
        for (j = 0; j < i; j++)
        {
            soma += matriz[i][j];
            printf(" %d ", matriz[i][j]);
        }
    }

    //Imprimindo a soma
    printf("\n\nSoma: %d\n", soma);

 return 0;
}
