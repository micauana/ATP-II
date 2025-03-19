/*Milena Cauana - Lista 2 - Exercício 40: Escreva um programa em C que realize a rotacao de uma matriz
quadrada 5x5 no sentido horario.*/
#include<stdio.h>

#define TAM 5

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int matriz2[TAM][TAM];


    //Coletando a matriz do usuário
    printf("Forneca uma matriz 5x5:\n ");

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    //Utilizando a função para rotacionar a matriz
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz2[j][TAM - 1 - i] = matriz[i][j];
        }
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = matriz2[i][j]; //Rotaciona a matriz em 90º, mas ela está armazenada na matriz2, vamos passá-la para a matriz original
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
