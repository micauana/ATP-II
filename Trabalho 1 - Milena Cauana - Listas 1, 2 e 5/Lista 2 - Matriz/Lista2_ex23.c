/*Milena Cauana - Lista 2 - Exercicio 23: Escreva um programa em C que calcule o determinante de uma
matriz quadrada 3x3.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 3

int main ()
{
    int i, j, k;
    int matriz[TAM][TAM];

    //Os elementos da matriz serão definidos para números aleatórios entre -9 e 9
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            matriz[i][j] = -9 + rand() % 19;
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

    //Calculando o determinante
    //Para isso, iremos fazer a conta das diagonais principais, armazenando em x
    //E faremos a conta das diagonais secundárias armazenando em y
    //Para o det, faremos na impressão x - y
    int x, y;

    x = matriz[0][0] * matriz[1][1] * matriz[2][2] + matriz[0][1] * matriz[1][2] * matriz[2][0] + matriz[0][2] * matriz[1][0] * matriz[2][1];
    y = matriz[0][2] * matriz[1][1] * matriz[2][0] + matriz[0][0] * matriz[1][2] * matriz[2][1] + matriz[0][1] * matriz[1][0] * matriz[2][2];

    //Imprimindo resultado
    printf("\nDeterminante: %d\n", x - y);


 return 0;
}
