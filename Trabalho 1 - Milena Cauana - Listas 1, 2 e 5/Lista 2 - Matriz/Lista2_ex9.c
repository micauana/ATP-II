/*Milena Cauana - Lista 2 - Exercício 9: Escreva um programa em C que encontre o maior elemento em
uma matriz 3x3.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];

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

    //Encontrando o maior elemento, para isso, iremos percorrer toda a matriz
    int maior = matriz [0][0];

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    //Imprimindo o resultado
    printf("\n\nMaior elemento: %d\n", maior);

return 0;
}
