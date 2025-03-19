/*Milena Cauana - Lista 2 - Exercício 7: Escreva um programa em C que verifique se uma matriz 3x3  e
simetrica.*/
#include<stdio.h>

#define TAMANHO 3

int main ()
{
    int i, j;
    int matriz[TAMANHO][TAMANHO];
    int simetrica = 1;


    //Definindo a matriz
    printf("Forneca os elementos de uma matriz 3x3: \n");
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    //Comparando as duas matrizes para definir se a matriz é simétrica
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (matriz[i][j] != matriz[j][i]) //Para as matrizes serem iguais o elemento de cada posição tem que ser igual ao elemento da outra matriz na mesma posição
            {
                simetrica = 0;
                break;
            }
        }
        if (!simetrica)
        {
            break;
        }
    }

    //Imprimindo resultado
    printf("\n\n");

    if (simetrica)
    {
        printf("A matriz eh simetrica.\n");
    }
    else
    {
        printf("A matriz NAO eh simetrica.\n");
    }


return 0;
}
