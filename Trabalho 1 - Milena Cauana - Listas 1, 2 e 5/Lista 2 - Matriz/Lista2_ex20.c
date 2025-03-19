/*Milena Cauana - Lista 2 - Exercicio 20: Escreva um programa em C que calcule a soma das colunas de
uma matriz 4x3.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ALT 4
#define LARG 3


int main ()
{
    int i, j;
    int matriz[ALT][LARG];
    int soma [LARG];

    //Definindo a matriz com elementos entre 0 15
    srand(time(NULL));

    for (i = 0; i < ALT; i++)
    {
        for (j = 0; j < LARG; j++)
        {
            matriz[i][j] = rand() % 16;
        }
    }

    //Imprimindo a matriz para conferir
    printf("Matriz: \n");

    for (i = 0; i < ALT; i++)
    {
        for (j = 0; j < LARG; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }


    //Calculando a soma de cada matriz e armazenando em um vetor
    for (j = 0; j < LARG; j++) //Como faremos a soma dos elementos da coluna, iremos deixar o j como primeiro loop
    {
        soma[j] = 0;

        for (i = 0; i < ALT; i++)
        {
           soma[j] += matriz[i][j];
        }
    }

    //Imprimindo as somas
    for (j = 0; j < LARG; j++)
    {
        printf("\nSoma coluna %d: %d\n", j, soma[j]);
    }

 return 0;
}

