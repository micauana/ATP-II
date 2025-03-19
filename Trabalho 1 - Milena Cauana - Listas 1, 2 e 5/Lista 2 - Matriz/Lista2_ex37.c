/*Milena Cauana - Lista 2 - Exercicio 37: Escreva um programa em C que multiplique uma matriz 2x3 por
uma matriz 3x4 e armazene o resultado em uma matriz 2x4.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void definindo_matriz(int a, int b, int matriz[a][b])
{
    int i, j;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            matriz[i][j] = rand() % 6;
        }
    }
}

void imprimindo_matriz(int a, int b, int matriz[a][b])
{
    int i, j;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main ()
{
    int i, j, a;
    int matriz1[2][3];
    int matriz2[3][4];
    int matriz_resultante[2][4];

    //Definindo as duas matrizes com elementos entre 0 e 5
    srand(time(NULL));

    definindo_matriz(2, 3, matriz1);

    definindo_matriz(3, 4, matriz2);

    //Imprimindo a matriz para conferir
    printf("Matriz 1: \n");
    imprimindo_matriz(2, 3, matriz1);

    printf("\nMatriz 2: \n");
    imprimindo_matriz(3, 4, matriz2);

    //Efetuando a multiplicação
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz_resultante[i][j] = 0; //Inicializando com todos os elementos zero para conseguir adicionar os números que serão múltiplicados
            for (a = 0; a < 3; a++)
            {
                matriz_resultante[i][j] += matriz1[i][a] * matriz2[a][j];
            }
        }
    }

    //Imprimindo a matriz resultante
    printf("\nMatriz Resultante: \n");
    imprimindo_matriz(2, 4, matriz_resultante);

 return 0;
}
