/*Milena Cauana - Lista 2 - Exercicio 18: Escreva um programa em C que verifique se uma matriz 3x3 e
uma matriz identidade.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int identidade = 1;

    //Definindo a matriz com elementos entre 0 e 1, mas nao necessariamente vira uma identidade
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = rand() % 2;
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


    //Definindo se é ou não identidade
    //Para isso, veremos se os elementos em que i = j são 1 e
    //se os elementos que i != j são zero
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                identidade = 0;
                break;
            }
            else if (i != j && matriz[i][j] != 0)
            {
                identidade = 0;
                break;
            }
        }

        if (!identidade)
        {
            break; //se ele já definiu que a matriz não é identidade, não tem pq continuar o loop
        }
    }

    //Imprimindo resultado
    if (identidade)
    {
        printf("\nA matriz eh identidade.\n");
    }
    else
    {
        printf("\nA matriz NAO eh identidade.\n");
    }

 return 0;
}
