/*Milena Cauana - Lista 2 - Exercicio 30: Escreva um programa em C que calcule a media dos elementos de
uma matriz 4x4*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ALT 4
#define LARG 4

int main ()
{
    int i, j;
    int matriz[ALT][LARG];
    float soma = 0;

    //Os elementos da matriz serão definidos para números aleatórios entre 0 e 30
    srand(time(NULL));

    for (i = 0; i < ALT; i++)
    {
        for (j = 0; j < LARG; j++)
        {
            matriz[i][j] = rand() % 31;
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

    //Calculando a soma dos elementos, para isso, iremos percorrer a matriz
    for (i = 0; i < ALT; i++)
    {
        for (j = 0; j < LARG; j++)
        {
            soma += matriz[i][j];
        }
    }

    //Imprimindo a media
    printf("\nMedia: %.2f", soma / (float) (ALT * LARG));

return 0;
}
