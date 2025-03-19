/*Milena Cauana - Lista 2 - Exercício 2: Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.*/
#include<stdio.h>

int main ()
{

    int i, j;
    int matriz[4][4];
    int soma = 0;

    //Declarando a matriz
    matriz[0][0] = 3;
    matriz[0][1] = 12;
    matriz[0][2] = 14;
    matriz[0][3] = 20;
    matriz[1][0] = 90;
    matriz[1][1] = 40;
    matriz[1][2] = 1;
    matriz[1][3] = 0;
    matriz[2][0] = 100;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    matriz[2][3] = 10;
    matriz[3][0] = 11;
    matriz[3][1] = 30;
    matriz[3][2] = 40;
    matriz[3][3] = 50;

    //Calculando a soma dos elementos
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
    }

    //Imprimindo o resultado
    printf("Soma da matriz: %d\n", soma);

return 0;
}
