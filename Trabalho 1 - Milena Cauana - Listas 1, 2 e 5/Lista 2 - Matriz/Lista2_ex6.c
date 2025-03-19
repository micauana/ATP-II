/*Milena Cauana - Lista 2 - Exercício 6: Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.*/
#include<stdio.h>

int main ()
{
    int i, j;
    int matriz[5][5];
    int diagonal_principal = 1;

    //Definindo a matriz
    printf("Forneca os elementos de uma matriz 5x5: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

    //Calculando a diagonal principal
    for (i = 0; i < 5; i ++)
    {
        diagonal_principal *= matriz[i][i]; //De acordo com o que foi perguntado em sala de aula, calcular a diagonal principal seria multiplicar os elementos da diagonal principal
    }

    //Imprimindo o resultado
    printf("Diagonal principal: %d\n", diagonal_principal);





return 0;
}
