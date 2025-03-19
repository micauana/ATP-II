/*Milena Cauana - Lista 2 - Exerc�cio 60: Escreva um programa em C que realize a rotacao de uma matriz
quadrada 5x5 no sentido anti-hor�rio*/
#include<stdio.h>

#define TAM 5

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int matriz2[TAM][TAM];


    //Coletando a matriz do usu�rio
    printf("Forneca uma matriz 5x5: ");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    //Rotacionar a matriz
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz2[i][j] = matriz[j][TAM - 1 - i];
        }
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = matriz2[i][j]; //Rotaciona a matriz em 90�, mas ela est� armazenada na matriz2, vamos pass�-la para a matriz original
        }
    }


    //Imprimindo resultado
    printf("\nMatriz Rotacionada:\n");

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
