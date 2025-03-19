/*Milena Cauana - Lista 2 - Exerc�cio 51: Escreva um programa em C que preencha uma matriz 3x3 com
numeros primos e depois calcule o produto  dos elementos da diagonal secundaria*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int aleatorio ()
{
    int x = rand() % 101;

    while (!primo(x))
    {
        x++;
    }

    return x;
    }


int primo (int num)
{
    if (num <= 1) return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    if (num == 2) return 1; // 2 � o �nico n�mero primo par
    if (num % 2 == 0) return 0; // N�meros pares maiores que 2 n�o s�o primos

    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


#define TAM 3

int main ()
{
    int i, j;
    int matriz[TAM][TAM];
    int produto = 1;

    //Definindo a matriz
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = aleatorio();
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

    //Calculando o produto da diagonal secund�ria
    produto = matriz[2][0] * matriz[1][1] * matriz[0][2];

    //Imprimindo o resultado
    printf("\nProduto da matriz secund�ria: %d\n", produto);

 return 0;
}
