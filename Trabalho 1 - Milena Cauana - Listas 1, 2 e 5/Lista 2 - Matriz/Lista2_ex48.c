/*Milena Cauana - Lista 2 - Exercício 48: Escreva um programa em C que preencha uma matriz 4x4 com
numeros aleatorios e depois calcule a media dos elementos acima da diagonal
principal*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 4

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int soma = 0;
    int qtd = 0;

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

    //Calculando a soma dos elementos acima da diagonal principal
    //Irei imprimi-los para verificar se sao os elementos certos
    printf("Elementos acima da diagonal principal: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 3; j > i; j--)
        {
            soma += matriz[i][j];
            qtd ++;
            printf(" %d ", matriz[i][j]);
        }
    }

    //Imprimindo a soma e a media
    printf("\n\nSoma: %d\n", soma);
    printf("\nMedia: %.2f\n", (float)soma / qtd);

 return 0;
}
