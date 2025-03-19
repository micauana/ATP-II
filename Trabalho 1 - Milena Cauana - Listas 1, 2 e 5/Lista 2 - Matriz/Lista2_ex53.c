/*Milena Cauana - Lista 2 - Exerc�cio 53: Escreva um programa em C que preencha uma matriz 5x5 com
numeros aleatorios e depois encontre o segundo menor*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define TAM 5

int main ()
{
    int i, j;
    int matriz[TAM][TAM];

    //Os elementos da matriz ser�o definidos para n�meros aleat�rios entre 0 e 50
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

    //Encontrando o menor elemento, para isso, iremos percorrer toda a matriz
    int menor = matriz [0][0];
    int segundo_menor;

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (matriz[i][j] < menor)
            {
                segundo_menor = menor;
                menor = matriz[i][j];
            }
            else if (matriz[i][j] < segundo_menor && matriz[i][j] > menor)
            {
                segundo_menor = matriz[i][j]; //Essa parte confere se, mesmo ap�s achar o maior n�mero, n�o poder� vir um n�mero maior que aquele armazenado no segundo por�m menor que o maior
            }
        }
    }

    //Imprimindo o resultado
    printf("\n\nSegundo menor elemento: %d\n", segundo_menor);

return 0;
}
